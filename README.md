<h1 align="center" style="font-weight: bold;">FCFS and SSTF Disk Scheduling Algorithms</h1>

<p align="center">
<a href="#overview">Project Overview</a>
 <span>&nbsp; • &nbsp;</span>
<a href="#pcode">Program's Code</a>
 <span>&nbsp; • &nbsp;</span>
<a href="#install">Installation & Usage</a>
 <span>&nbsp; • &nbsp;</span>
<a href="#example-out">Example</a>
 <span>&nbsp; • &nbsp;</span>
<a href="#future">Future Enhancement</a>
 <span>&nbsp; • &nbsp;</span>
<a href="#license">License</a>
 <span>&nbsp; • &nbsp;</span>
<a href="#teams">Team Members</a>
</p>

<p align="center">This project implements <b>First Come, First Serve (FCFS)</b> and <b>Shortest Seek Time First (SSTF)</b> disk scheduling algorithms in C++.</p>

<p align="center">
🌐<a href="https://colab.research.google.com/drive/1rlNiFl5Ahy4ulbV_WKDvWbaxwgoPmEwY?usp=sharing" target="_blank" rel="noopener noreferrer">Visit this Project's Playground</a>
</p>

<h2 id="overview">📌 Project Overview</h2>

Disk scheduling algorithms determine the order in which disk I/O requests are processed to optimize seek time and overall performance. This project provides:
- A **C++ implementation** of both FCFS and SSTF.
- User input for disk parameters and request queues.
- Computation of total seek time for each algorithm.

<h2 id="pcode"> 📂 Program's Code </h2>

- `fcfs.cpp` - Implementation of the FCFS algorithm
- `sstf.cpp` - Implementation of the SSTF algorithm

<h2 id="install"> 🛠️ Installation & Usage</h2>

### 1️⃣ Cloning the repository
```bash
git clone https://github.com/Some0ne11/disk-scheduling-algorithm.git
cd disk-scheduling-algorithm
```

### 2️⃣ Compile the Code
You can compile both programs using g++:
```bash
 g++ fcfs.cpp -o fcfs
 g++ sstf.cpp -o sstf
```

### 3️⃣ Run the Executable
For FCFS:
```bash
 ./fcfs
```
For SSTF:
```bash
 ./sstf
```

<h2 id="example-out"> 📊 Example Output</h2>

### FCFS Example:

<details>
<summary><code>output</code></summary>

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
</details>

### SSTF Example:

<details>
<summary><code>output</code></summary>

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
</details>

<h2 id="future"> 🏗️ Future Enhancements</h2>

- Add graphical visualization of the disk scheduling process.
- Implement additional scheduling algorithms such as SCAN and C-SCAN.

<h2 id ="license">📜 License</h2>

This project is licensed under the <a href="LICENSE">MIT License</a>.

<h2 id="teams">📌 Team Members </h2>

<p>Special thanks to all contributors of this project.</p>
<table>
<tr>

<td align="center">
<a href="https://github.com/Some0ne11">
<img src="https://avatars.githubusercontent.com/u/122141550?v=4" width="100px;" alt="Profile Picture"/><br>
<sub>
<b>Muhammad Ammar Danial Bin Abdullah</b>
</sub>
</a>
</td>

<td align="center">
<a href="#">
<img src="#" width="100px;" alt="Profile Picture"/><br>
<sub>
<b>Ashman Bin Mohd Fauzi</b>
</sub>
</a>
</td>

<td align="center">
<a href="#">
<img src="#" width="100px;" alt="Profile Picture"/><br>
<sub>
<b>Ng Xuan Hern</b>
</sub>
</a>
</td>

<td align="center">
<a href="#">
<img src="#" width="100px;" alt="Profile Picture"/><br>
<sub>
<b>Lim Wei Ling</b>
</sub>
</a>
</td>

</tr>
</table>