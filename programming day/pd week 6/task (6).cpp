#include <iostream>
using namespace std;
string grade(int perc);
main()
{
    int num1, num2, num3, num4, num5, total;
    float percentage;
    string name;
    cout << "enter name ";
    cin >> name;
    cout << "enter english marks ";
    cin >> num1;
    cout << "enter maths marks ";
    cin >> num2;
    cout << "Enter chemistry marks ";
    cin >> num3;
    cout << "Enter social sinence marks ";
    cin >> num4;
    cout << "enter biology marks ";
    cin >> num5;
    total = num1 + num2 + num3 + num4 + num5;
    percentage = (total * 100) / 500;
    cout << "Name: " << name <<endl;
    cout << "Total marks: " << total <<endl;
    cout << "Percentage: " << percentage << "%" <<endl;
    cout << "Grade: " << grade(percentage) <<endl;
}
string grade(int perc)
{
    string grade;
    if (perc < 89 && perc < 101)
        grade = "A+";
    if (perc > 79 && perc < 90)
        grade = "A";
    if (perc > 69 && perc < 80)
        grade = "B+";
    if (perc > 59 && perc < 70)
        grade = "B";
    if (perc > 49 && perc < 60)
        grade = "C";
    if (perc > 39 && perc < 50)
        grade = "D";
    if (perc < 40)
        grade = "A+";
    return grade;
}
