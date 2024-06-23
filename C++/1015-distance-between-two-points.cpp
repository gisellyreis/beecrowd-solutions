
// Problem ID: 1015
// Title: Distance Between Two Points
// Link: https://www.beecrowd.com.br/judge/en/problems/view/1015

/**
* Description:
* Read the four values corresponding to the x and y axes of two points in the plane, p1 (x1, y1) and p2 (x2, y2) and calculate the distance between them, 
* showing four decimal places after the comma.
*
* Input
* The input file contains two lines of data. The first one contains two double values: x1 y1 and the second one also contains two double values with one 
* digit after the decimal point: x2 y2.
*
* Output
* Calculate and print the distance value using the provided formula, with 4 digits after the decimal point.
*/


#include <iostream>
#include <iomanip>
#include <math.h>
 
using namespace std;
 
int main() {
    
    cout<< fixed << setprecision(4);
    double x1, y1, x2, y2, dist = 0;
    cin>> x1>> y1>> x2>> y2;
    dist = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
 
    cout<< dist <<endl;
    return 0;
}

