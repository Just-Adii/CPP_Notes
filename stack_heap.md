> In memory layout file the whole layout is given
> Here I'll discuss all Stack and Heap cases

_"The Stack is fast, tiny, and managed automatically for local function data; the Heap is large, slower, and managed manually for dynamic, long-lived data."_
--- 
The BSS and Data segment is not too important for normal interviews until it's OS/System engineer so we'll keep that much in memory_layout file
for now only..won't go too deep

# DEFINATIONS : 
> STACK : (**Grows downwards towards Heap**)
A High address memory which stores
-local variables (eg .int a=5);
-local arrays (int arr[100]);
-function parameters (void foo(int x))
-return addresses
-Pointer variables (int* p) (**Address is stored here,data lives on heap**)

## Capacity : 1MB (for windows) to 8MB (for Linux/mac) - fixed by OS
>Overflow : When stack grows too far down it hits the guard page(**The Page at the end of That 1/8MB meomry limit which is read only and don't allows writing in it therefore when stack memory hits it,a error known as Segmentation fault hits**)
This Segmentation fault we call as _Stack Overflow_

> It's managed by OS: memory is allocated when function is called and is freed when it returns...no need to do it manually

Stack is basically high address memory ie if **RAM** is a _Straight Road_ or for now let say a vertical ladder then _Stack memory_ adress **starts from the top and comes down.**

Thereforer if let say memory's last address is 99999 then in stack it will go on like 99999,99998,99997....



# HEAP
While **HEAP** is a low address memory ie it starts from somewhere let's say 00050 and grows upwards towards _Stack_ 

> It Stores : (Grows Upward towards Stack)
- Dynamically Allocated Arrays (Eg. new int[10000];)
- Objects created at runtime (eg. new Myclass();)
- Larege object that exceeds stack's 1-8MB limit(eg. maloc(1000000))

>MANAGED MANUALLY : 
- Manually allocated and I'm responisble for freeing it.
> OUT OF MEMORY(OOM): 
Allocators are responible for Allocating Memory in the RAM and when there's no memory left to be allocated then allocator returns *NULL* (malloc) or throws std::bad_alloc(new)

Key rule: every new/malloc MUST have a delete/free
 *    otherwise → Memory Leak → Heap Overflow → Crash

 > CASE TO KEEP IN MIND : <int* ptr = new int[50];> 

 *In above code ptr will be stored in heap containing the address of array int while int[50] will be stored in heap with all it's data*
### Visual Representation : 
STACK (High Address)                     HEAP (Low Address)
+-------------------+                    +-------------------------------------+
|   ptr (8 bytes)   | ------------------>| [0] | [1] | [2] | ... | [48] | [49] |
| (Stores: 0x00A3)  |                    | (Actual 50 integers live here)      |
+-------------------+                    +-------------------------------------+

> HEAP's LIMITATION : *Memory Fragmentation*

🧩 Memory Fragmentation (The Heap's Main Weakness)

# What it is:
Memory fragmentation is like a game of Tetris gone wrong. It happens when you allocate and free memory on the Heap in a random order, leaving your RAM full of scattered, tiny gaps of free space instead of one big continuous block.

# The Error:
You try to allocate a large continuous block of memory (like a big array), and the program crashes with an Out of Memory error—even though you technically have enough total free RAM left.
📦 Simple Example: The Parking Lot

Imagine a parking lot with 10 total free spaces, but they are scattered individually all over the lot (one empty space here, one empty space there).

> If 10 separate motorbikes arrive, they can all park easily.

>*But if one giant tour bus arrives that needs 3 consecutive spaces to park, it cannot fit anywhere.*