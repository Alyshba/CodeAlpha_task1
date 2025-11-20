#include <iostream>
using namespace std;

int main() {
    int courseno;
    cout << "Enter number of courses: ";
    cin >> courseno;
    float grade;
    float credit;
    float tcredit = 0;
    float tgp = 0;
//tcredit=total credits    
//tgp= total grade points
    cout << "\nEnter Grade and Credit Hours for Each Course:\n";

    for (int i = 1; i <= courseno; i++) {
        cout << "\nCourse " << i << " Grade (0 - 4): ";
        cin >> grade;

        cout << "Course " << i << " Credit Hours: ";
        cin >> credit;

        tcredit =tcredit + credit;
        tgp = tgp + (grade * credit);
    }
    float GPA = tgp / tcredit;
    float prevCGPA, prevCredits;
    cout << "\nEnter Previous CGPA (enter 0 if none): ";
    cin >> prevCGPA;
    cout << "Enter Previous Total Credits (enter 0 if none): ";
    cin >> prevCredits;

    float fCGPA;
    fCGPA = (prevCGPA * prevCredits + tgp) / (prevCredits + tcredit);
    cout << "Your Semester GPA = " << GPA << endl;
    cout << "Your Overall CGPA = " << fCGPA << endl;
    return 0;
}