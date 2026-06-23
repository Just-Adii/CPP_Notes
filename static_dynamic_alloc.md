
**Static (Allocated on Stack):**
```c
int arr[10];
```
- Size fixed at compile time
- Memory auto-created when function starts, auto-destroyed when function ends
- You don't manage it, compiler does

---

**Dynamic (Allocated on Heap):**
```
int *arr = (int*)malloc(10 * sizeof(int));
```
- Size can be decided at **runtime**
- Memory stays alive until **you** kill it with `free()`(for C) or `delete`(for C++) or `delete[]`(for array in C++)
- You manage it completely

---

**The core difference in one line:**

Stack = compiler controls the lifetime. Heap = you control the lifetime.

---

**Why heap exists at all:**

Stack memory is limited and dies with the function. If you need:
- Memory that **outlives** the function
- Size you **don't know** until runtime (user input, file size, etc.)

→ You go to heap via malloc.

---

**Quick mental image:**

Stack = sticky note on your desk, gone when you leave.
Heap = renting a locker, stays yours until you hand back the key (`free()`). If you never return the key → **memory leak.**