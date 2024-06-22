
// Problem ID: 1008
// Title: Salary
// Link: https://www.beecrowd.com.br/judge/en/problems/view/1008

 /**
  * Description:
  * Write a program that reads an employee's number, his/her worked hours number in a month and the amount he received per hour. 
  * Print the employee's number and salary that he/she will receive at end of the month, with two decimal places.
  *   - Don’t forget to print the line's end after the result, otherwise you will receive “Presentation Error”.
  *   - Don’t forget the space before and after the equal signal and after the U$.
  *
  * Input
  * The input file contains 2 integer numbers and 1 value of floating point, representing the number, worked hours amount and the amount the employee receives per worked hour.
  *
  * Output
  * Print the number and the employee's salary, according to the given example, with a blank space before and after the equal signal.
  */


#include <iostream>
#include <iomanip>

using namespace std;

int main() {

 int f , ht; 
 double vh, sal =0;
 cin>> f >> ht >> vh;

 sal = ht * vh;


 cout<< "NUMBER = "<< f<< endl;
 cout<< fixed<< setprecision(2)<< "SALARY = U$ "<< sal<< endl;

  return 0;
}


