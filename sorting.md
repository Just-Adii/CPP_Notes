# DSA Sorting Algorithms — Updated Notes ✅

## 🔵 SORTING - I (Easy)

-------------------------------------------------------1. Selection Sort-------------------------------------------------------
IDEA: Find the smallest element and put it in its correct position, repeat.

HOW IT WORKS:
- Scan the whole array → find minimum → swap it to the front
- Then scan from index 1 → find next minimum → swap, and so on

EXAMPLE:
```
[5, 3, 1, 4, 2]
→ find min(1), swap with index 0 → [1, 3, 5, 4, 2]
→ find min(2), swap with index 1 → [1, 2, 5, 4, 3]
→ and so on...
```
TIME: O(n²) all cases — always scans everything, never skips

SPACE: O(1) | STABLE? No

> ⚠️ INTERVIEW GOTCHA: Selection Sort is always O(n²) — even if array is sorted. No optimization possible.

---

-------------------------------------------------------2. Bubble Sort-------------------------------------------------------
IDEA: Repeatedly swap adjacent elements if they're in the wrong order. Largest "bubbles up" to end.

HOW IT WORKS:
- Compare arr[0] & arr[1] → swap if needed
- Compare arr[1] & arr[2] → swap if needed
- After each pass, the largest element settles at the end

EXAMPLE:
```
[5, 3, 1, 4]
Pass 1: [3,5,1,4] → [3,1,5,4] → [3,1,4,5]  ← 5 settled
Pass 2: [1,3,4,5]  ← done
```
TIME: O(n) best *(optimized)* | O(n²) avg/worst

SPACE: O(1) | STABLE? Yes

> ✅ **Key Optimization — `swapped` flag:**
> ```
> if no swaps happened in a full pass → array is sorted → break early
> ```
> This gives **O(n) best case** for already-sorted arrays — same as Insertion Sort.

---

-------------------------------------------------------3. Insertion Sort-------------------------------------------------------
IDEA: Like sorting playing cards in hand — pick one element and insert it in its correct position among already-sorted elements.

HOW IT WORKS:
- Start from index 1
- Compare with elements before it → shift them right → insert in correct spot

EXAMPLE:
```
[4, 3, 2, 1]
i=1: [3, 4, 2, 1]
i=2: [2, 3, 4, 1]
i=3: [1, 2, 3, 4]
```
TIME: O(n) best *(already sorted)* | O(n²) avg/worst

SPACE: O(1) | STABLE? Yes

> ✅ INTERVIEW TIP: Best choice for small arrays or nearly-sorted data in practice.

---

## 🟡 SORTING - II (Medium/Easy)

-------------------------------------------------------4. Merge Sort-------------------------------------------------------
IDEA: Divide array into two halves → sort each half → merge them back. Uses **Divide & Conquer**.

HOW IT WORKS:
```
[3, 1, 4, 2]
  ↙        ↘
[3,1]      [4,2]
↙   ↘      ↙   ↘
[3] [1]   [4]  [2]
  ↘ ↙       ↘ ↙
 [1,3]      [2,4]
      ↘    ↙
    [1,2,3,4]
```
TIME: O(n log n) — all cases (best/avg/worst)

SPACE: O(n) | STABLE? Yes

> ⚠️ **Why O(n) space?** During the **merge step**, you can't merge two sorted halves in-place without destroying the O(n log n) time. A temporary array of size n is needed to hold merged results — that's the O(n) cost.

> ✅ INTERVIEW TIP: Most consistent sort — time never degrades. Trade-off is memory.

---

-------------------------------------------------------5. Recursive Bubble Sort-------------------------------------------------------
Same as Bubble Sort but written **recursively** instead of loops.
- Each call does one pass → bubbles max to end → calls itself for n-1 elements
- Concept identical — just **recursive implementation practice**

TIME: O(n²) | SPACE: O(n) call stack

---

-------------------------------------------------------6. Recursive Insertion Sort-------------------------------------------------------
Same as Insertion Sort but **recursively**.
- Sort first n-1 elements recursively → insert nth element in right place
- Concept same — just **recursive practice**

TIME: O(n²) | SPACE: O(n) call stack

---

-------------------------------------------------------7. Quick Sort-------------------------------------------------------
IDEA: Pick a **pivot** → put all smaller elements left of it, larger right → repeat for both sides.

HOW IT WORKS:
```
[3, 6, 8, 10, 1, 2, 1]  pivot = 3
→ [1, 2, 1,  3,  6, 8, 10]
         ↙ pivot settled ↘
    [1,2,1]          [6,8,10]
   (sort these)    (sort these)
```
TIME: O(n log n) avg | **O(n²) worst**

SPACE: O(log n) | STABLE? No

> ⚠️ **When does O(n²) worst case hit?**
> When array is **already sorted (or reverse-sorted)** and you always pick first/last as pivot → partitions become (0) and (n-1) sized → completely unbalanced → degrades to O(n²)

> ✅ **Fix — Randomized Quick Sort:**
> Pick a **random pivot** or use **Median-of-Three** (median of first, mid, last element) → expected time stays O(n log n)

> ⚠️ **Why Unstable?** Long-distance swaps during partitioning (Lomuto/Hoare schemes) can jump identical elements over each other → relative order not preserved.

---

## 📌 Complete Comparison Table

| Sort        | Best       | Avg | Worst | Space       | Stable?     | Key Gotcha |
|------       |------      |-----       |-------       |-------      |---------   |------------|
| Selection   | O(n²)      | O(n²)      | O(n²)        | O(1)        | No         | Always scans everything, never skips |
| Bubble      | **O(n)**✅ | O(n²)      | O(n²)       | O(1)         | Yes        | O(n) only with `swapped` flag optimization |
| Insertion   | **O(n)**✅ | O(n²)      | O(n²)       | O(1)         | Yes        | Best for small / nearly-sorted arrays |
| Merge       | O(n log n) | O(n log n) | O(n log n)   | **O(n)**⚠️  | Yes        | Consistent time, but needs extra memory |
| Quick       | O(n log n) | O(n log n) | **O(n²)**⚠️ | O(log n)     | No         | Worst case on sorted data with bad pivot |

---

------------------------------------------------------- 🎯 Interview Priority-------------------------------------------------------
- **Must implement from scratch:** Merge Sort, Quick Sort
- **Must know optimizations:** Bubble (swapped flag), Quick (random pivot)
- **Conceptual only:** Selection, Bubble, Insertion
- **Recursive versions:** Practice only — builds recursion thinking