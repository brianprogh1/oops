#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    float sub1Marks;
    float sub2Marks;
    float totalScore;

public:
    Student(string stu_Name, int stu_RollNum, float marksSub1, float marksSub2) {
        name = stu_Name;
        rollNumber = stu_RollNum;
        sub1Marks = marksSub1;
        sub2Marks = marksSub2;
        totalScore = marksSub1 + marksSub2;
    }

    void displayDetails() {
        cout << "Student Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Subject 1 Marks = " << sub1Marks << endl;
        cout << "Subject 2 Marks = " << sub2Marks << endl;
        cout << "Total Marks: " << totalScore << endl;
        cout << "Total score: " << (totalScore * 100) / 200 << "%" << endl;
    }
};

int main() {
    string name;
    int rollNumber;
    float sub1Marks, sub2Marks;

    cout << "Enter name: ";
    getline(cin, name);

    cout << "Enter rollno: ";
    cin >> rollNumber;

    cout << "Enter Subject 1 Marks: ";
    cin >> sub1Marks;

    cout << "Enter Subject 2 Marks: ";
    cin >> sub2Marks;

    Student studentObj(name, rollNumber, sub1Marks, sub2Marks);

    cout << "***************************";
    cout << "\nStudent Details are:\n";
    studentObj.displayDetails();

    return 0;
}
