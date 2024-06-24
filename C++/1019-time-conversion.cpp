
// Problem ID: 1019
// Title: Time Conversion
// Link: https://www.beecrowd.com.br/judge/en/problems/view/1019

/**
* Description:
* Read an integer value, which is the duration in seconds of a certain event in a factory, and inform it expressed in hours:minutes:seconds.
*
* Input
* The input file contains an integer N.
*
* Output
* Print the read time in the input file (seconds) converted in hours:minutes:seconds like the following example.
*/


#include <iostream>
#include <iomanip>


using namespace std;

int main() {

int n, h, m, s;
cin>> n;

h = n/3600;
m = (n - (h*3600))/60;
s = (n-((h*3600)+(m * 60)));

cout<< h << ":"<< m << ":"<< s<< endl;

return 0;
}

