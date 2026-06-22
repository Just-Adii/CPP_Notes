Here's the full breakdown for your notes:

---
*
 * ============================================================
 *         C / C++  PROGRAM MEMORY LAYOUT
 * ============================================================
 *
 *  0xFFFF...  [HIGH ADDRESS]
 *  +--------------------------+
 *  |         STACK            |  <- Local variables, function frames
 *  |   int A[5]; in main()    |     Grows DOWNWARD (↓)
 *  |          |               |
 *  |          ↓               |
 *  +--------------------------+
 *  |      (free space)        |  <- Stack & Heap grow toward
 *  |          ↑               |     each other. Overlap = CRASH
 *  |          |               |
 *  |         HEAP             |  <- malloc(), new
 *  |                          |     Grows UPWARD (↑)
 *  +--------------------------+
 *  |          BSS             |  <- Uninitialized globals/statics
 *  |      int x;  (global)    |     Auto zero-initialized by OS
 *  +--------------------------+
 *  |      DATA SEGMENT        |  <- Initialized globals/statics
 *  |    int x = 5; (global)   |     Loaded from executable
 *  +--------------------------+
 *  |    CODE SECTION          |  <- Compiled machine instructions
 *  |  (Text Segment)          |     Read-only. CPU runs from here.
 *  +--------------------------+
 *  0x0000...  [LOW ADDRESS]
 *
 * ============================================================
 *  QUICK RULES:
 *  - Local variable      -> STACK
 *  - malloc() / new      -> HEAP
 *  - Global, no value    -> BSS
 *  - Global, with value  -> DATA SEGMENT
 *  - Your functions/code -> CODE SECTION
 *  - BSS = Block Started by Symbol
 * ============================================================
 */

# WHAT IS A MEMORY ADDRESS?

RAM is like a long street with houses. Each house has a unique door number — that's the **address.**

```
Address 0001 → stores 1 byte
Address 0002 → stores 1 byte
Address 0003 → stores 1 byte
...
Address 9999 → stores 1 byte
```

Low address = beginning of street (0001)
High address = end of street (9999)

---

## How OS divides this street

```
Address 9999 ┐
Address 9998 │  ← STACK starts here (high address)
Address 9997 │     grows downward ↓
Address 9996 ┘
             
             (free space in middle)
             
Address 0050 ┐
Address 0051 │  ← HEAP starts here (low address)
Address 0052 │     grows upward ↑
Address 0053 ┘

Address 0020 →  DATA
Address 0010 →  CODE  (low address)
```

---

## Now watch them grow

### Program starts — nothing allocated yet
```
9999 [STACK empty]
9998
9997
9996
         ← free space
0054
0053 [HEAP empty]
0052
```

### You call a function — Stack grows DOWN
```
9999 [main() frame    ]
9998 [int a = 5       ]  ← stack grew down
9997 [int b = 10      ]  ← stack grew down
9996
         ← free space
0053 [HEAP empty]
```

### You do `new int[5]` — Heap grows UP
```
9999 [main() frame    ]
9998 [int a = 5       ]
9997 [int b = 10      ]
9996
         ← free space
0057 [array[4]        ]  ← heap grew up
0056 [array[3]        ]  ← heap grew up
0055 [array[2]        ]  ← heap grew up
0054 [array[1]        ]  ← heap grew up
0053 [array[0]        ]  ← heap grew up
```

---

## Growing toward each other

```
9999 [stack frame     ]
9998 [local vars      ]
9997 ↓ stack growing down
9996
9995
         ← free space shrinking
0060
0059 ↑ heap growing up
0058 [dynamic memory  ]
0057 [dynamic memory  ]
```

If program keeps allocating:

```
9997 ↓ stack
9996 ↓ stack
9995 ← COLLISION → 💥 CRASH
9994 ↑ heap
9993 ↑ heap
```

This collision is what causes:
```
Stack Overflow  →  too many function calls
                   (infinite recursion mostly)
Heap Overflow   →  too much dynamic allocation
                   (memory leak mostly)
```

---

## Real example of Stack Overflow

```cpp
void infinite() {
    infinite();   // calls itself forever
}
```

```
Stack keeps growing down:
9999 [infinite() call 1]
9998 [infinite() call 2]
9997 [infinite() call 3]
9996 [infinite() call 4]
...
...  ← eventually hits heap
💥 Stack Overflow
```

---

## One line summary

> Low address = start of RAM, High address = end of RAM. Stack starts at high end and grows toward low. Heap starts at low end and grows toward high. They grow toward each other — if they meet, program crashes.


## Memory Layout — C/C++

**Address direction:** High address at top → Low address at bottom. The OS loads your program from low addresses upward.

---

### Stack (High address end)
- Stores **local variables**, function parameters, return addresses
- Each function call creates a **stack frame**
- Grows **downward** (toward heap)
- Auto-managed — memory freed when function returns
- Example: `int A[5];` inside `main()` → goes here

---

### Heap
- Stores **dynamically allocated** memory
- Grows **upward** (toward stack)
- You manage it manually — `malloc`/`free` in C, `new`/`delete` in C++
- If stack and heap collide → **stack overflow crash**

---

### BSS Segment
- Stores **uninitialized** global and static variables
- Example: `int x;` declared globally (no value assigned)
- Auto **zero-initialized** by OS at program start
- BSS = *Block Started by Symbol*

---

### Data Segment
- Stores **initialized** global and static variables
- Example: `int x = 5;` declared globally
- Values are loaded directly from the executable file

---

### Code Section / Text Segment (Low address end)
- Stores the actual **compiled machine instructions**
- **Read-only** — prevents accidental modification
- CPU reads instructions from here to execute your program
- Every function you write (`main`, etc.) lives here as opcodes


