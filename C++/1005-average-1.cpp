
// Problem ID: 1005
// Title: Average 1
// Link: https://www.beecrowd.com.br/judge/en/problems/view/1005

 /**
  * Description: 
  * Read two floating points' values of double precision A and B, corresponding to two student's grades. After this, calculate the student's average, considering that grade A 
  * has weight 3.5 and B has weight 7.5. Each grade can be from zero to ten, always with one digit after the decimal point. Don’t forget to print the end of line after the result, 
  * otherwise you will receive “Presentation Error”. Don’t forget the space before and after the equal sign.
  *
  * Input
  * The input file contains 2 floating points' values with one digit after the decimal point.
  */


#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    cout<< fixed << setprecision(5);
    double a, b, media = 0;
    cin>> a>> b;
    media = ((a*3.5) + (b*7.5))/11.0;
    cout<<"MEDIA = "<< media<< endl;
    return 0;
}

