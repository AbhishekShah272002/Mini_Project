#include <iostream>
using namespace std;

int main() {
    string studentName;
    float marks1, marks2, marks3, average;
    char grade;

    cout << "Enter student name: ";
    getline(cin, studentName);

    cout << "Enter marks for first subjects: ";
    cin >> marks1;
    cout << "Enter marks for second subjects: ";
    cin >> marks2;
    cout << "Enter marks for third subjects: ";
    cin >> marks3;

    average = (marks1 + marks2 + marks3) / 3;

    if (average >= 90)
        grade = 'A';
    else if (average >= 80)
        grade = 'B';
    else if (average >= 70)
        grade = 'C';
    else if (average >= 60)
        grade = 'D';
    else
        grade = 'F';

    cout << "\n--- Student Report ---\n";
    cout << "Name: " << studentName << endl;
    cout << "Average Marks: " << average << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}
