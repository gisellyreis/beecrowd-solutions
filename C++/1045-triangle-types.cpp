
// Problem ID: 1045
// Title: Triangle Types
// Link: https://www.beecrowd.com.br/judge/en/problems/view/1045


#include <iostream>
#include <iomanip>

using namespace std;

int main() {

float a, b , c, aux;
cin>> a >> b >> c;

if(b>a){
  aux= a;
  a=b;
  b=aux;
}
 if(c>a){
  aux=a;
  a=c;
  c=aux;
}

if (a >= (b+c)) {
  cout<< "NAO FORMA TRIANGULO" <<endl;
}
else {
 if ( (a*a) == ((b*b) + (c*c)) ) {
  cout<< "TRIANGULO RETANGULO" <<endl;
}
 if ( (a*a) > ((b*b) + (c*c)) ) {
  cout<< "TRIANGULO OBTUSANGULO" <<endl;
}
 if ( (a*a) < ((b*b) + (c*c)) ){
  cout<< "TRIANGULO ACUTANGULO" <<endl;
}
 if (a == b && b == c){
  cout<< "TRIANGULO EQUILATERO" <<endl;
}
 if (a == b && a!=c || a == c && a!=b || b == c && b!=a){
  cout<< "TRIANGULO ISOSCELES" <<endl;
}
 }

return 0;
}

