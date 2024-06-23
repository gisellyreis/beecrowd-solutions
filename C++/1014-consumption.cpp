
// Problem ID: 1014
// Title: Consumption
// Link: https://www.beecrowd.com.br/judge/en/problems/view/1014

/**
* Description:
* Calculate a car's average consumption being provided the total distance traveled (in Km) and the spent fuel total (in liters).
*
* Input
* The input file contains two values: one integer value X representing the total distance (in Km) and the second one is a 
* floating point number Y  representing the spent fuel total, with a digit after the decimal point.
*
* Output
* Present a value that represents the average consumption of a car with 3 digits after the decimal point, followed by the message "km/l".
*/


#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    
    cout<< fixed << setprecision(3);
    int x;
    double y, total = 0;

    cin>> x>> y;
    total = x / y;
 
    cout<< total << " km/l" <<endl;
    return 0;
}
