
// Problem ID: 1020
// Title: Age in Days
// Link: https://www.beecrowd.com.br/judge/en/problems/view/1020

/**
* Description:
* Read an integer value corresponding to a person's age (in days) and print it in years, months and days, followed by its respective message “ano(s)”, “mes(es)”, “dia(s)”.
*
* Note: only to facilitate the calculation, consider the whole year with 365 days and 30 days every month. In the cases of test there will never be a situation that allows 
* 12 months and some days, like 360, 363 or 364. This is just an exercise for the purpose of testing simple mathematical reasoning.
*
* Input
* The input file contains 1 integer value.
*
* Output
* Print the output, like the following example.
*/


#include <iostream>

using namespace std;

int main() {

int a, an, m, d;
cin>> a;
an = a/365;
a%= 365;
m = a/30;
a%= 30;
d = a;

cout<< an << " ano(s)" <<endl;
cout<< m << " mes(es)" <<endl;
cout<< d << " dia(s)" <<endl;

return 0;
}

