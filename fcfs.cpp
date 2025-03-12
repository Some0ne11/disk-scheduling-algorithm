// C++ program to implement the FCFS Disk Scheduling Algorithm
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    // Declaring variables
    int totalSeekTime = 0, initialHeadPos, totalNumOfCylinder, totalRequestQueue;

    cout << "First Come, First Serve (FCFS) Disk Scheduling Algorithm: " << endl;

    // Input the total number of cylinders on the disk
    cout << "\n1. Please enter the total number of cylinders on the disk: ";
    cin >> totalNumOfCylinder;

    // Input the total number of I/O requests
    cout << "2. Please enter the total number of I/O requests: ";
    cin >> totalRequestQueue;

    // Input the initial/current head position of the disk with validation
    do {
        cout << "3. Please enter the initial/current head position of the disk (0 to "
             << totalNumOfCylinder - 1 << "): ";
        cin >> initialHeadPos;
        if (initialHeadPos < 0 || initialHeadPos >= totalNumOfCylinder) {
            cout << "Error: Initial head position must be between 0 and "
                 << totalNumOfCylinder - 1 << ". Please try again.\n";
        }
    } while (initialHeadPos < 0 || initialHeadPos >= totalNumOfCylinder);

    // Declaring the list of I/O requests ans seek time.
    int* io_requests = new int[totalRequestQueue];
    int* seekTime = new int[totalRequestQueue];

    // Input the I/O requests with validation.
    cout << "\n4. Please enter the cylinder numbers in the Request Queue below:\n";
    for (int i = 0; i < totalRequestQueue; i++) {
        do {
            cout << "I/O request " << i + 1 << ": ";
            cin >> io_requests[i];
            if (io_requests[i] < 0 || io_requests[i] >= totalNumOfCylinder) {
                cout << "Error: Cylinder number must be between 0 and "
                     << totalNumOfCylinder - 1 << ". Please re-enter.\n";
            }
        } while (io_requests[i] < 0 || io_requests[i] >= totalNumOfCylinder);
    }

    // Output the request sequence.
    cout << "\n5. Request sequence: {";
    for (int i = 0; i < totalRequestQueue; i++) {
        cout << io_requests[i];
        if (i != totalRequestQueue - 1) {
            cout << ", ";
        }
    }
    cout << "}\n";

    // Calculate the total seek time and print the order of processing.
    cout << "\n6. Order of processing: ";
    cout << initialHeadPos << " -> ";
    int currentHeadPos = initialHeadPos;
    for (int i = 0; i < totalRequestQueue; i++) {
        seekTime[i] = abs(currentHeadPos - io_requests[i]);
        totalSeekTime += seekTime[i];
        currentHeadPos = io_requests[i];
        cout << io_requests[i] << (i == totalRequestQueue - 1 ? "" : " -> ");
    }

    // Output the results
    cout << "\n7. Total Seek Time: " << totalSeekTime << endl;
    cout << "8. Average Seek Time: "
         << static_cast<float>(totalSeekTime) / totalRequestQueue << endl;

    // Summary Table:
    cout << "\nSummary Table:\n";
    cout << left << setw(15) << "Request No." << setw(15)
         << "Cylinder No." << "Seek Time" << endl;
    cout << "------------------------------------------\n";
    for (int i = 0; i < totalRequestQueue; i++) {
        cout << left << setw(15) << i + 1 << setw(15)
             << io_requests[i] << seekTime[i] << endl;
    }
    cout << "-------------------------------------------\n";
    cout << left << setw(30) << " " << totalSeekTime << endl;

    delete[] io_requests;
    delete[] seekTime;

    return 0;
}