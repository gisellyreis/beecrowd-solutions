
// Problem ID: 1038
// Title: Snack
// Link: https://www.beecrowd.com.br/judge/en/problems/view/1038

/**
* Description:
* Using the following table, write a program that reads a code and the amount of an item. 
* After, print the value to pay. This is a very simple program with the only intention of practice of selection commands.
* 
* Table: https://resources.beecrowd.com/gallery/images/problems/UOJ_1038_en.png
*
* Input
* The input file contains two integer numbers X and Y. X is the product code and Y is the quantity of this item according to the above table.
*
* Output
* The output must be a message "Total: R$ " followed by the total value to be paid, with 2 digits after the decimal point.
*/


#include <bits/stdc++.h>
using namespace std;
int main(){
	int c, q;
 double t;
 cin>> c>>q;

 cout<< fixed<< setprecision(2);
 switch(c){
 case 1: t = 4.00 * q; break;
 case 2: t = 4.50 * q; break;
 case 3: t = 5.00 * q; break;
 case 4: t = 2.00 * q; break;
 case 5: t = 1.50 * q; break;
}

	cout<<  "Total: R$ " << t<< endl;

}

