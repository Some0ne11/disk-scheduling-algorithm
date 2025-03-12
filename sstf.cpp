// C++ program to implement the SSTF Disk Scheduling Algorithm
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int totalSeekTime = 0, initialHeadPos, totalNumOfCylinder, totalRequestQueue;

    cout << "Shortest Seek Time First (SSTF) Disk Scheduling Algorithm: " << endl;

    cout << "\n1. Please enter the total number of cylinders on the disk: ";
    cin >> totalNumOfCylinder;

    cout << "2. Please enter the total number of I/O requests: ";
    cin >> totalRequestQueue;

    cout << "3. Please enter the initial/current head position of the disk (0 to "
         << totalNumOfCylinder - 1 << "): ";
    cin >> initialHeadPos;

    while (initialHeadPos < 0 || initialHeadPos >= totalNumOfCylinder) {
        cout << "Error: Initial head position must be between 0 and "
             << totalNumOfCylinder - 1 << ". Please re-enter: ";
        cin >> initialHeadPos;
    }

    int* io_requests = new int[totalRequestQueue];

    cout << "\n4. Please enter the cylinder numbers in the Request Queue below:" << endl;
    for (int i = 0; i < totalRequestQueue; i++) {
        cout << "I/O request " << i + 1 << ": ";
        cin >> io_requests[i];

        while (io_requests[i] < 0 || io_requests[i] >= totalNumOfCylinder) {
            cout << "Error: Cylinder number must be between 0 and "
                 << totalNumOfCylinder - 1 << ". Please re-enter: ";
            cin >> io_requests[i];
        }
    }

    cout << "\n5. Request sequence: {";
    for (int i = 0; i < totalRequestQueue; i++) {
        cout << io_requests[i];
        if (i != totalRequestQueue - 1) cout << ", ";
    }
    cout << "}\n";

    int* processingOrder = new int[totalRequestQueue];
    int* seekTimes = new int[totalRequestQueue];
    int processingIndex = 0;

    cout << "\n6. Order of processing: " << initialHeadPos;
    while (totalRequestQueue > 0) {
        // Find the request with the shortest seek time
        int closestRequestIdx = -1;
        int shortestSeekTime = 1000000; // A large number to compare seek times

        for (int i = 0; i < totalRequestQueue; i++) {
            int seekTime = abs(initialHeadPos - io_requests[i]);
            if (seekTime < shortestSeekTime) {
                shortestSeekTime = seekTime;
                closestRequestIdx = i;
            }
        }

        seekTimes[processingIndex] = shortestSeekTime;
        totalSeekTime += shortestSeekTime;
        initialHeadPos = io_requests[closestRequestIdx];

        processingOrder[processingIndex++] = io_requests[closestRequestIdx];
        cout << " -> " << io_requests[closestRequestIdx];

        for (int i = closestRequestIdx; i < totalRequestQueue - 1; i++) {
            io_requests[i] = io_requests[i + 1];
        }

        totalRequestQueue--;
    }

    cout << "\n7. Total Seek Time: " << totalSeekTime << endl;
    cout << "8. Average Seek Time: "
         << fixed << setprecision(4) << static_cast<float>(totalSeekTime) / processingIndex << endl;

    // Summary Table
    cout << "\nSummary Table:\n";
    cout << "Request No.    Cylinder No.   Seek Time\n";
    cout << "------------------------------------------\n";
    for (int i = 0; i < processingIndex; i++) {
        cout << left << setw(15) << i + 1 << setw(15) << processingOrder[i]
             << seekTimes[i] << endl;
    }
    cout << "------------------------------------------\n";
    cout << left << setw(30) << " " << totalSeekTime << endl;

    delete[] io_requests;
    delete[] processingOrder;
    delete[] seekTimes;

    return 0;
}