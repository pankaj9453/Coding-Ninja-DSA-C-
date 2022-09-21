/*
Total Salary
Write a program to calculate the total salary of a person. The user has to enter the basic salary (an integer) and the grade (an uppercase character), and depending upon which the total salary is calculated as -
    totalSalary = basic + hra + da + allow – pf
where :
hra   = 20% of basic
da    = 50% of basic
allow = 1700 if grade = ‘A’
allow = 1500 if grade = ‘B’
allow = 1300 if grade = ‘C' or any other character
pf    = 11% of basic.
Round off the total salary and then print the integral part only.
Note: Try finding out a function on the internet to do so
*/
#include<bits/stdc++.h>
using namespace std;

int main() {
 	float basic_salary;
    char grade;
    cin >> basic_salary >> grade;
    float salary = basic_salary + ((20.0*basic_salary)/100) + (50.0*basic_salary)/100 - (11.0*basic_salary)/100;
    if (grade == 'A') {
       salary += 1700.0; 
    } else if (grade == 'B') {
        salary += 1500.0;
    } else {
        salary += 1300.0;
    }
    cout << long(round(salary));
    return 0;
}
