
// Problem ID: 1006
// Title: Average 2
// Link: https://www.beecrowd.com.br/judge/en/problems/view/1006

 /**
  * Description:
  * Read three values (variables A, B and C), which are the three student's grades. 
  * Then, calculate the average, considering that grade A has weight 2, grade B has weight 3 and the grade C has weight 5. 
  * Consider that each grade can go from 0 to 10.0, always with one decimal place.
  *
  * Input
  * The input file contains 3 values of floating points (double) with one digit after the decimal point.
  *
  * Output
  * Print the message "MEDIA"(average in Portuguese) and the student's average according to the following example, with a blank space before and after the equal signal.
  */


#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  
double a, b, c, re;
cin>> a>> b>>c;
re = ((a*2)+(b*3)+(c*5))/10.0;

cout<<fixed<<setprecision(1);
cout<< "MEDIA = "<< re <<endl;

return 0;
}

