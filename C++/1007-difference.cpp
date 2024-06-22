
// Problem ID: 1007
// Title: Difference
// Link: https://www.beecrowd.com.br/judge/en/problems/view/1007

 /**
  * Description:
  * Read four integer values named A, B, C and D. Calculate and print the difference of product A and B by the product of C and D (A * B - C * D).
  *
  * Input
  * The input file contains 4 integer values.
  *
  * Output
  * Print DIFERENCA (DIFFERENCE in Portuguese) with all the capital letters, according to the following example, with a blank space before and after the equal signal.
  */


#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {

int a, b, c , d, dif;
cin>> a>> b>> c>> d;

dif =(a*b)-(c*d);

cout<< "DIFERENCA = "<< dif<< endl;

return 0;
}

