
// Problem ID: 1035
// Title: Selection Test 1
// Link: https://www.beecrowd.com.br/judge/en/problems/view/1035

/**
* Description:
* Read 4 integer values A, B, C and D. Then if B is greater than C and D is greater than A and if the 
* sum of C and D is greater than the sum of A and B and if C and D were positives values and if A is even, 
* write the message “Valores aceitos” (Accepted values). Otherwise, write the message “Valores nao aceitos” (Values not accepted).
*
* Input
* Four integer numbers A, B, C and D.
*
* Output
* Show the corresponding message after the validation of the values​​.
*/


#include <iostream>

using namespace std;

int main () {

 int a, b, c, d, f;
 cin >> a >> b >> c >> d;
  //f= a/2;

if(b>c && d>a && (c+d) > (a+b) && c>0 && d> 0 && (a%2)==0){
 cout<< "Valores aceitos" << endl;
}
else {
 cout<<  "Valores nao aceitos"<< endl;
}

return 0;
}

