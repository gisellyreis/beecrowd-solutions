
// Problem ID: 1042
// Title: Simple Sort
// Link: https://www.beecrowd.com.br/judge/en/problems/view/1042


#include <iostream>
#include <iomanip>

using namespace std;

int main () {

 
 int x, y, z, a, b , c;
 cin >> x >> y >> z;

 if(x < y && x < z){
 a = x;
  if(y< z){
    b = y;
    c = z;
 }
 else {
  b = z;
  c = y;
 }
}

 else if( y < x && y < z){
 a = y;
   if(x< z){
    b = x;
    c = z;
 }
 else {
  b = z;
  c = x;
 }
}
 else {
 a = z;
   if(y< x){
    b = y;
    c = x;
 }
 else {
  b = x;
  c = y;
 }
}
 cout<< a << endl; cout<< b << endl; cout<< c << endl;
 cout<< endl;
 cout<< x << endl; cout<< y << endl; cout<< z << endl;
 

return 0;
}

