
// Problem ID: 1003
// Title: Simple Sum
// Link: https://www.beecrowd.com.br/judge/en/problems/view/1003

 /**
  * Description: 
  * Read two integer values, in this case, the variables A and B. After this, calculate the sum between 
  * them and assign it to the variable SOMA. Write the value of this variable.
  *
  * Input
  * The input file contains 2 integer numbers.
  */


#include <iostream>
 
using namespace std;
 
int main() {
 
    int a, b, soma = 0;
    cin>> a>> b;
    soma = a + b;
    cout<< "SOMA = "<< soma<<endl;
    return 0;
}
