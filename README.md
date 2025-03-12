# FCFS and SSTF Disk Scheduling Algorithms

This project implements **First Come, First Serve (FCFS)** and **Shortest Seek Time First (SSTF)** disk scheduling algorithms in C++.

## 📌 Project Overview
Disk scheduling algorithms determine the order in which disk I/O requests are processed to optimize seek time and overall performance. This project provides:
- A **C++ implementation** of both FCFS and SSTF.
- User input for disk parameters and request queues.
- Computation of total seek time for each algorithm.

## 📂 Files Included
- `fcfs.cpp` - Implementation of the FCFS algorithm
- `sstf.cpp` - Implementation of the SSTF algorithm

## 🛠️ Installation & Usage

### 1️⃣ Compile the Code
You can compile both programs using g++:
```bash
 g++ fcfs.cpp -o fcfs
 g++ sstf.cpp -o sstf
```

### 2️⃣ Run the Executable
For FCFS:
```bash
 ./fcfs
```
For SSTF:
```bash
 ./sstf
```

## 📊 Example Output
### FCFS Example:
```
First Come, First Serve (FCFS) Disk Scheduling Algorithm: 

1. Please enter the total number of cylinders on the disk: 200
2. Please enter the total number of I/O requests: 7
3. Please enter the initial/current head position of the disk (0 to 199): 50

4. Please enter the cylinder numbers in the Request Queue below:
I/O request 1: 82
I/O request 2: 170
I/O request 3: 43
I/O request 4: 140
I/O request 5: 24
I/O request 6: 16
I/O request 7: 190

5. Request sequence: {82, 170, 43, 140, 24, 16, 190}

6. Order of processing: 50 -> 82 -> 170 -> 43 -> 140 -> 24 -> 16 -> 190
7. Total Seek Time: 642
8. Average Seek Time: 91.7143

Summary Table:
Request No.    Cylinder No.   Seek Time
------------------------------------------
1              82             32
2              170            88
3              43             127
4              140            97
5              24             116
6              16             8
7              190            174
-------------------------------------------
                              642
```

### SSTF Example:
```
Shortest Seek Time First (SSTF) Disk Scheduling Algorithm: 

1. Please enter the total number of cylinders on the disk: 200
2. Please enter the total number of I/O requests: 7
3. Please enter the initial/current head position of the disk (0 to 199): 50

4. Please enter the cylinder numbers in the Request Queue below:
I/O request 1: 82
I/O request 2: 170
I/O request 3: 43
I/O request 4: 140
I/O request 5: 24
I/O request 6: 16
I/O request 7: 190

5. Request sequence: {82, 170, 43, 140, 24, 16, 190}

6. Order of processing: 50 -> 43 -> 24 -> 16 -> 82 -> 140 -> 170 -> 190
7. Total Seek Time: 208
8. Average Seek Time: 29.7143

Summary Table:
Request No.    Cylinder No.   Seek Time
------------------------------------------
1              43             7
2              24             19
3              16             8
4              82             66
5              140            58
6              170            30
7              190            20
------------------------------------------
                              208
```

## 🏗️ Future Enhancements
- Add graphical visualization of the disk scheduling process.
- Implement additional scheduling algorithms such as SCAN and C-SCAN.

## 📜 License
This project is licensed under the MIT License.

---
📌 **Contributors:**
- Muhammad Ammar Danial Bin Abdullah (22301793)
- Ashman Bin Mohd Fauzi (22303774)
- Ng Xuan Hern (22304061)
- Lim Wei Ling (22306277)

Feel free to contribute and improve this project! 🚀

