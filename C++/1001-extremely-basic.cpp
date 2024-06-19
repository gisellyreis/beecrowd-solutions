
// Problem ID: 1001
// Title: Extremely Basic
// Link: https://www.beecrowd.com.br/judge/en/problems/view/1001

/*
Description: 
Read 2 variables, named A and B and make the sum of these two variables, assigning its result to the variable X. 
Print X as shown below. Print endline after the result otherwise you will get “Presentation Error”.
*/


#include <iostream>

using namespace std;

int main() {
  
  int a, b, x=0;
  cin >> a >> b;
  x = a + b;
  cout << "X = " << x << endl;


  return 0;
}
