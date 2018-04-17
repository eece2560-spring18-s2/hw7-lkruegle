# Graph Algorithms

## P3. IDDFS vs Breadth-first Search

In order to connect users, I implemented two different graphing algorithms to find paths between two users.
The Breadth-first Search and Iterative deepening Depth First Search (IDDFS) were both used.

### Benchmarking

#### Breadth-First Search

Average Run Time: 0.01057 seconds

Average Memory w/t path-finding: 126838 kbytes

Average Memory w/ path-finding: 126936 kbytes

As shown by the above benchmarks, the path-finding algorithm consumes about 102 kbytes.

#### IDDFS

Average Run Time: 0.01113 seconds

Average Memory w/t path-finding: 126836 kbytes

Average Memory w/ path-finding: 126818 kbytes

As shown by my benchmarks, the path-finding algorithm is seemingly more memory neutral as my benchmarks (over 4 trials) show an average memory usage lower than when the pathfinding algorithm was not used.

