# FCFS (First-Come, First-Served) CPU Scheduling Algorithm

## Overview

First-Come, First-Served (FCFS) is one of the simplest CPU scheduling algorithms. In FCFS, the process that arrives first is the one that gets executed first. If two processes have the same arrival time, they are executed in the order they appear.

## Implementation

The implementation includes the following components:
- **`FCFS.h`**: The header file declaring the methods and structures used in the FCFS algorithm.
- **`FCFS.cpp`**: The implementation file where the actual logic of the FCFS algorithm is written.
- **`FCFS_Test.cpp`**: A simple test file demonstrating the usage of the FCFS scheduling algorithm with a sample set of processes.

## Compilation and Execution

To compile and run the test:

```bash
g++ FCFS_test.cpp FCFS.cpp -o FCFS_test
./FCFS_test

```
or run the cmd
```bash

make
