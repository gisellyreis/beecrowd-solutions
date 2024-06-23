
// Problem ID: 1012
// Title: Area
// Link: https://www.beecrowd.com.br/judge/en/problems/view/1012

 /**
  * Description:
  * Make a program that reads three floating point values: A, B and C. Then, calculate and show:
  * a) the area of the rectangled triangle that has base A and height C.
  * b) the area of the radius's circle C. (pi = 3.14159)
  * c) the area of the trapezium which has A and B by base, and C by height.
  * d) the area of ​​the square that has side B.
  * e) the area of the rectangle that has sides A and B.
  *
  * Input
  * The input file contains three double values with one digit after the decimal point.
  *
  * Output
  * The output file must contain 5 lines of data. Each line corresponds to one of the areas described above, always with a corresponding message 
  * (in Portuguese) and one space between the two points and the value. The value calculated must be presented with 3 digits after the decimal point.
  */


#include <iostream>
#include <iomanip>

using namespace std;

int main() {

double a, b, c, t, ci, tra, qua, re;
cin>> a>> b>> c;
t = (a*c)/2;
ci = 3.14159 * (c*c);
tra = ((a+b)*c)/2;
qua = b*b;
re = a*b;


cout<<fixed<<setprecision(3);
cout<< "TRIANGULO: "<< t <<endl;
cout<< "CIRCULO: "<< ci <<endl;
cout<< "TRAPEZIO: "<< tra <<endl;
cout<< "QUADRADO: "<< qua <<endl;
cout<< "RETANGULO: "<< re <<endl;

return 0;
}

