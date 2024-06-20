
// Problem ID: 1004
// Title: Simple Product
// Link: https://www.beecrowd.com.br/judge/en/problems/view/1004

 /**
  * Description: 
  * Read two integer values. After this, calculate the product between them and store the result in a variable named PROD.
  * Do not forget to print the end of line after the result, otherwise you will receive “Presentation Error”.
  *
  * Input
  * The input file contains 2 integer numbers.
  */


#include <iostream>
 
using namespace std;
 
int main() {
 
    int a, b, PROD;
    cin >> a;
    cin >> b;
    PROD = a*b;
    
    cout<< "PROD = " << PROD << endl;
 
    return 0;
}
