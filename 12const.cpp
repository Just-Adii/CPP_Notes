#include <iostream>
#include <string>
int main()
{
   const int MAX_AGE=90;//When we want to keep value/data fixed inside the memory we use const
   //like we wouldn't want to change maximum age..so we kept it constant
  
   //method to bypass the const promise and make modification
    int* a= new int; //heap don't have names of memory address just raw address so new int tell "a" points to raw address which have int data type
    *a = 2;
    a=(int*)&MAX_AGE;
    // const int* a= new int / int const* a=new int; - can't dereference the pointer now, ie can't change memory contents ie *a=2; not allowed now
    //but still pointing a to something else is allowed ie a=(int*)&MAX_AGE; is allowed
   
    //int* const a=new int; quite opposite of last one...we can change contents of memory ie *a=2; is allowed but pointing to new memory address
    //is not allowed now...so can't do a=(int*)&MAX_AGE;



    /*
    &MAX_AGE → get the address of MAX_AGE, but it's of type const int*
    (int*) → typecast it, strip the const, treat it as plain int*
    a = → now a points to MAX_AGE's memory location
    */
   *a=50;

    std::cout<<*a<<"\n"<<MAX_AGE<<std::endl;
    /*
    if you check output we still get "50 90" and not "50 50"...why? Since changes are being done in same addresses now
    when I set *a=50 I meant go to max age's address and make the data 50..then why I still got 90 as a output

    Ans - The moment compiler sees const it HARDCODES the variable data to it(not everytime,not necerssarily,but for understanding purpose
    you can think for now this thing) ie 
    Wherever it sees MAX_AGE it replaces it with 90(Similar concept to how preprossing works)
    So during cout..it didn't go to address after seeing MAX_AGE instead the code to compiler looked like below
    std::cout<<*a<<"\n"<<90<<std::endl;(MAX_AGE is replaced by 90)
    */
    return 0;
}
/*
---------------------------------------------------------------------------------------------------------
so..a is an int type pointer pointing to raw address containing int type data
if it was 
int* a= new char;
a is an int type pointer pointing to a raw address containing char type data
correct?

Ans-
Almost right, but there's a **mismatch problem** here:

---

```cpp
int* a = new char;
```

- `new char` allocates **1 byte** (char size)
- but `a` is `int*` so it thinks it's pointing to **4 bytes** (int size)

---

**So when you do:**
```cpp
*a = 1000;  // tries to write 4 bytes into 1 byte space
```

You're overflowing — writing into memory you didn't allocate. Undefined behavior / crash territory.

---

**This is exactly why typecasting exists:**

```cpp
int* a = (int*) new char;  // at least you're being explicit about the mismatch
```

You're telling the compiler *"yes I know, treat this char memory as int pointer"* — but it's still dangerous because the sizes don't match.

---

**Correct and safe versions:**

```cpp
int* a = new int;    // int pointer → int memory ✅
char* a = new char;  // char pointer → char memory ✅
```

---

**Rule of thumb:**

The type of the pointer and the type of `new` should match. Mixing them is asking for size mismatch bugs — 
pointer thinks it has more space than actually allocated.
*/
