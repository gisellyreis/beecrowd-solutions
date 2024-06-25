
// Problem ID: 1036
// Title: Bhaskara's Formula
// Link: https://www.beecrowd.com.br/judge/en/problems/view/1036

/**
* Description:
* Read 3 floating-point numbers. After, print the roots of bhaskara’s formula. If it's impossible to calculate the 
* roots because a division by zero or a square root of a negative number, presents the message “Impossivel calcular”.
*
* Input
* Read 3 floating-point numbers (double) A, B and C.
*
* Output
* Print the result with 5 digits after the decimal point or the message if it is impossible to calculate.
*/


#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {

float a, b , c, de, x, y, r;
cin>> a >> b >> c;

de = ((b*b) - (4*a*c));
r = sqrt(de);

if(de < 0 || (2*a) == 0){
  cout<< "Impossivel calcular"<< endl;
}
else{
x = ((-b + r)/(2*a));
y = ((-b - r)/(2*a));

cout<< fixed<< setprecision(5);
cout<< "R1 = "<< x << endl;
cout<< "R2 = "<< y << endl;
}
return 0;
}

