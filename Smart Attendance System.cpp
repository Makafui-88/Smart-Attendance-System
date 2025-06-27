#include <iostream>
#include <string>
using namespace std;

int main() {
    string studentName;
    string studentID;

    cout << "Enter student name: ";
    getline(cin, studentName);

    cout << "Enter student ID: ";
    getline(cin, studentID);

    cout << "\nAttendance marked for: " << studentName << " (ID: " << studentID << ")" << endl;

    // In future: Add date, time, and QR code reading logic

    return 0;
}