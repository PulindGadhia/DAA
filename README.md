📘 Design and Analysis of Algorithms (DAA)

> A comprehensive collection of C++ implementations for the **Design and Analysis of Algorithms** course — covering sorting, searching, dynamic programming, graph traversal, and greedy algorithms.

---

## 📑 Table of Contents

| #  | Practical | Topic | Paradigm |
|----|-----------|-------|----------|
| 1  | [Sorting Algorithms](#practical-1--sorting-algorithms) | Bubble, Selection, Insertion, Merge, Quick Sort | Brute Force / Divide & Conquer |
| 2  | [Searching Algorithms](#practical-2--searching-algorithms) | Linear Search & Binary Search | Sequential / Divide & Conquer |
| 3  | [Heap Sort](#practical-3--heap-sort) | Heap Sort using Max-Heap | Comparison-Based Sorting |
| 4  | [Factorial Computation](#practical-4--factorial-computation) | Iterative vs Recursive Factorial | Iteration / Recursion |
| 5  | [0/1 Knapsack Problem](#practical-5--01-knapsack-problem) | 0/1 Knapsack (DP) | Dynamic Programming |
| 6  | [Matrix Chain Multiplication](#practical-6--matrix-chain-multiplication) | MCM Optimization | Dynamic Programming |
| 7  | [Coin Change Problem](#practical-7--coin-change-problem) | Minimum Coins (DP) | Dynamic Programming |
| 8  | [Graph Traversals](#practical-8--graph-traversals-dfs--bfs) | DFS & BFS | Graph Algorithms |
| 9  | [Prim's Algorithm](#practical-9--prims-algorithm-mst) | Minimum Spanning Tree (Prim's) | Greedy |
| 10 | [Kruskal's Algorithm](#practical-10--kruskals-algorithm-mst) | Minimum Spanning Tree (Kruskal's) | Greedy |

---

## 📂 Repository Structure

```text
DAA/
│
├── 📁 Practical 1/
│   ├── Bubble_Sort.cpp
│   ├── Selection_Sort.cpp
│   ├── Insertion_Sort.cpp
│   ├── Merge_Sort.cpp
│   └── Quick_Sort.cpp
│
├── 📄 Practical 2.cpp        ─  Linear & Binary Search
├── 📄 Practical 3.cpp        ─  Heap Sort
├── 📄 Practical 4.cpp        ─  Iterative & Recursive Factorial
├── 📄 Practical 5.cpp        ─  0/1 Knapsack (DP)
├── 📄 Practical 6.cpp        ─  Matrix Chain Multiplication
├── 📄 Practical 7.cpp        ─  Coin Change Problem
├── 📄 Practical 8.cpp        ─  DFS & BFS Graph Traversal
├── 📄 Practical 9.cpp        ─  Prim's Algorithm (MST)
├── 📄 Practical 10.cpp       ─  Kruskal's Algorithm (MST)
│
└── 📄 README.md
```

---

## 🔬 Practical Details

---

### Practical 1 — Sorting Algorithms

**Aim:** Implement and study fundamental comparison-based sorting algorithms.

| Algorithm | Best Case | Average Case | Worst Case | Space | Stable |
|-----------|-----------|--------------|------------|-------|--------|
| Bubble Sort | O(n) | O(n²) | O(n²) | O(1) | ✅ |
| Selection Sort | O(n²) | O(n²) | O(n²) | O(1) | ❌ |
| Insertion Sort | O(n) | O(n²) | O(n²) | O(1) | ✅ |
| Merge Sort | O(n log n) | O(n log n) | O(n log n) | O(n) | ✅ |
| Quick Sort | O(n log n) | O(n log n) | O(n²) | O(log n) | ❌ |

**Key Concepts:**
- Brute-force approach (Bubble, Selection, Insertion)
- Divide and Conquer (Merge Sort, Quick Sort)
- In-place vs out-of-place sorting
- Stability of sorting algorithms

📁 **Location:** `Practical 1/`

---

### Practical 2 — Searching Algorithms

**Aim:** Compare Linear Search and Binary Search with execution time measurement.

| Algorithm | Best Case | Average Case | Worst Case | Prerequisite |
|-----------|-----------|--------------|------------|--------------|
| Linear Search | O(1) | O(n) | O(n) | None |
| Binary Search | O(1) | O(log n) | O(log n) | Sorted Array |

**Key Concepts:**
- Sequential search vs divide-and-conquer search
- Performance benchmarking using `<chrono>` (microsecond precision)
- Demonstrates the dramatic speed difference on large datasets (100,000 elements)

📄 **File:** `Practical 2.cpp`

---

### Practical 3 — Heap Sort

**Aim:** Implement Heap Sort using the Max-Heap data structure.

| Metric | Complexity |
|--------|------------|
| Best Case | O(n log n) |
| Average Case | O(n log n) |
| Worst Case | O(n log n) |
| Space | O(1) |

**Key Concepts:**
- Building a max-heap via the `heapify` procedure
- Extracting the maximum element and restoring heap property
- In-place sorting with guaranteed O(n log n) performance
- Not a stable sort

📄 **File:** `Practical 3.cpp`

---

### Practical 4 — Factorial Computation

**Aim:** Compare iterative and recursive approaches to computing factorial with time analysis.

| Method | Time Complexity | Space Complexity |
|--------|----------------|------------------|
| Iterative | O(n) | O(1) |
| Recursive | O(n) | O(n) — call stack |

**Key Concepts:**
- Iteration vs recursion trade-offs
- Stack overhead in recursive calls
- Nanosecond-level timing using `<chrono>`
- Demonstrates that iterative methods are typically faster due to no function call overhead

📄 **File:** `Practical 4.cpp`

---

### Practical 5 — 0/1 Knapsack Problem

**Aim:** Solve the 0/1 Knapsack problem using Dynamic Programming (bottom-up tabulation).

| Metric | Complexity |
|--------|------------|
| Time | O(n × W) |
| Space | O(n × W) |

> Where `n` = number of items, `W` = knapsack capacity.

**Key Concepts:**
- Dynamic Programming — optimal substructure & overlapping sub-problems
- Bottom-up (tabulation) approach using a 2D DP table
- Each item is either included entirely or excluded (no fractions)
- Maximizes total value without exceeding weight capacity

📄 **File:** `Practical 5.cpp`

---

### Practical 6 — Matrix Chain Multiplication

**Aim:** Find the optimal parenthesization of a chain of matrices to minimize scalar multiplications.

| Metric | Complexity |
|--------|------------|
| Time | O(n³) |
| Space | O(n²) |

**Key Concepts:**
- Classic DP problem — split the chain at every possible point
- Computes the minimum cost of multiplying `n` matrices
- Uses a 2D DP table indexed by sub-chain boundaries
- Demonstrates the significance of multiplication order (associativity)

📄 **File:** `Practical 6.cpp`

---

### Practical 7 — Coin Change Problem

**Aim:** Find the minimum number of coins required to make a given amount using Dynamic Programming.

| Metric | Complexity |
|--------|------------|
| Time | O(n × amount) |
| Space | O(amount) |

**Key Concepts:**
- Dynamic Programming with 1D tabulation
- Greedy approach does not always give optimal results for arbitrary denominations
- Handles the case where change is impossible
- Optimal substructure: `dp[i] = min(dp[i], dp[i - coin] + 1)`

📄 **File:** `Practical 7.cpp`

---

### Practical 8 — Graph Traversals (DFS & BFS)

**Aim:** Implement Depth-First Search and Breadth-First Search on an undirected graph.

| Algorithm | Time Complexity | Space Complexity | Data Structure |
|-----------|----------------|------------------|----------------|
| DFS | O(V + E) | O(V) | Recursion Stack |
| BFS | O(V + E) | O(V) | Queue |

**Key Concepts:**
- Graph representation using adjacency list (`vector<int> graph[]`)
- DFS — recursive exploration, goes deep before backtracking
- BFS — level-order exploration using a queue
- Both cover all connected vertices from a given starting node

📄 **File:** `Practical 8.cpp`

---

### Practical 9 — Prim's Algorithm (MST)

**Aim:** Find the Minimum Spanning Tree of a weighted undirected graph using Prim's Algorithm.

| Metric | Complexity (this implementation) |
|--------|----------------------------------|
| Time | O(V²) |
| Space | O(V²) |

**Key Concepts:**
- Greedy algorithm — always picks the minimum weight edge connecting visited and unvisited vertices
- Uses a cost adjacency matrix as input
- Builds the MST by expanding from vertex 0
- Detects disconnected graphs

📄 **File:** `Practical 9.cpp`

---

### Practical 10 — Kruskal's Algorithm (MST)

**Aim:** Find the Minimum Spanning Tree of a weighted undirected graph using Kruskal's Algorithm.

| Metric | Complexity (this implementation) |
|--------|----------------------------------|
| Time | O(E log E) |
| Space | O(V + E) |

**Key Concepts:**
- Greedy algorithm — sorts all edges by weight, then greedily picks the lightest edge that does not form a cycle
- Uses **Union-Find** (Disjoint Set) data structure for cycle detection
- Edge list representation with `struct Edge { u, v, w }`
- Detects disconnected graphs

📄 **File:** `Practical 10.cpp`

---

## Algorithm Paradigms Covered

| Paradigm | Practicals |
|----------|------------|
| **Brute Force** | 1 (Bubble, Selection, Insertion Sort) |
| **Divide & Conquer** | 1 (Merge Sort, Quick Sort), 2 (Binary Search) |
| **Dynamic Programming** | 5 (Knapsack), 6 (MCM), 7 (Coin Change) |
| **Greedy** | 9 (Prim's), 10 (Kruskal's) |
| **Graph Algorithms** | 8 (DFS, BFS), 9 (Prim's), 10 (Kruskal's) |
| **Recursion vs Iteration** | 4 (Factorial) |

---

## 🛠️ Technologies Used

| Tool | Purpose |
|------|---------|
| **C++** | Core programming language |
| **STL** | `<algorithm>`, `<vector>`, `<queue>`, `<chrono>` |
| **G++ / GCC** | Compilation |
| **VS Code** | IDE |

---

## How to Compile & Run

```bash
# Compile any practical
g++ -o output "Practical X.cpp"

# Run
./output
```

**Example — Practical 2 (Searching):**

```bash
g++ -o search "Practical 2.cpp"
./search
```

**Example — Practical 1 (Sorting — individual files):**

```bash
g++ -o merge_sort "Practical 1/Merge_Sort.cpp"
./merge_sort
```

---

## License

This repository is intended for academic and educational purposes only.

---

<p align="center">
  <b>⭐ Star this repository if you find it useful!</b>
</p>
