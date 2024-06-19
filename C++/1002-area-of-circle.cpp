
// Problem ID: 1002
// Title: Area of a Circle
// Link: https://judge.beecrowd.com/en/problems/view/1002

/*
Description:
The formula to calculate the area of a circumference is defined as A = π . R2. Considering to this problem that π = 3.14159:
Calculate the area using the formula given in the problem description.

Input
The input contains a value of floating point (double precision), that is the variable R.
*/


#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    
    cout<< fixed << setprecision(4);
    double pi = 3.14159;
    double raio, a = 0;
    cin>> raio;
    a = pi * (raio * raio);
 
    cout<< "A="<< a<<endl;
    return 0;
}
