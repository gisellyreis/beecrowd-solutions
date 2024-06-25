
// Problem ID: 1037
// Title: Interval
// Link: https://www.beecrowd.com.br/judge/en/problems/view/1037

/**
* Description:
* You must make a program that read a float-point number and print a message saying in which of following intervals the 
* number belongs: [0,25] (25,50], (50,75], (75,100]. If the read number is less than zero or greather than 100, the program 
* must print the message “Fora de intervalo” that means "Out of Interval".
*
* The symbol '(' represents greather than. For example:
* [0,25] indicates numbers between 0 and 25.0000, including both.
* (25,50] indicates numbers greather than 25 (25.00001) up to 50.0000000.
*
* Input
* The input file contains a floating-point number.
*
* Output
* The output must be a message like following example.
*/


#include <iostream>
#include <iomanip>

using namespace std;

 int main (){
  double a;
  cin>> a;
 if(a >=0 && a <=25.0){
  cout<< "Intervalo [0,25]" << endl;
 }
 else if(a > 25.000000 && a<=50.000000){
  cout<< "Intervalo (25,50]" << endl;
 }
 else if(a > 50.0000001 && a<=75.0){
  cout<< "Intervalo (50,75]" << endl;
 }
 else if(a >75.0000001 && a<=100.0){
  cout<< "Intervalo (75,100]" << endl;
 }
 else {
   cout<< "Fora de intervalo" << endl;
 }


return 0;
}

