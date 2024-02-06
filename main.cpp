#include <iostream>
using namespace std;
void calc(float grade, float hours, float& total_grade);
int main()
{
    cout << "\t\t\tEnter -1 To finish.\n\n";
    float grade, total_grade=0, hours, counter = 1, total_hours = 0;
    bool condition = true;
    
	while (condition)
	{
       
        cout << "===============================================\n";
        cout << "Enter your Subject "<<counter <<" grade: ";
        cin >> grade;
        if (grade == -1)
            break;
        cout << "Enter hours: ";
        cin >> hours;
        total_hours += hours;
        counter++;
        //===========================================================
        calc(grade, hours, total_grade);
        
	}
    cout << "===============================================\n";
    cout << "Your New GPA= " << (total_grade / total_hours) << endl;
    cout << "Total Houres: " << total_hours << endl;
    cout << "\n\t\t\t\tGood Luck " ;
    char ch = 1;
    cout << ch << "\t";
    cout << "\n";
    cout << "===============================================\n";
}


void calc(float grade, float hours, float &total_grade) {
    if (grade >= 90) {
        total_grade += (4 * hours);
    }
    else if (grade >= 85 && grade < 90) {
        total_grade += (3.6 * hours);
    }
    else if (grade >= 80 && grade < 85) {
        total_grade += (3.3 * hours);
    }
    else if (grade >= 75 && grade < 80) {
        total_grade += (3 * hours);
    }
    else if (grade >= 70 && grade < 75) {
        total_grade += (2.6 * hours);
    }
    else if (grade >= 65 && grade < 70) {
        total_grade += (2.4 * hours);
    }
    else if (grade >= 60 && grade < 65) {
        total_grade += (2.2 * hours);
    }
    else if (grade >= 50 && grade < 60) {
        total_grade += (2 * hours);
    }
    else if (grade < 50) {
        total_grade += (0 * hours);
    }
}
