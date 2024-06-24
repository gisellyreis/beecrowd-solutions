
// Problem ID: 1021
// Title: Banknotes and Coins
// Link: https://www.beecrowd.com.br/judge/en/problems/view/1021

/**
* Description:
* Read a value of floating point with two decimal places. This represents a monetary value. After this, calculate the smallest possible number 
* of notes and coins on which the value can be decomposed. The considered notes are of 100, 50, 20, 10, 5, 2. The possible coins are 
* of 1, 0.50, 0.25, 0.10, 0.05 and 0.01. Print the message “NOTAS:” followed by the list of notes and the message “MOEDAS:” followed by the list of coins.
*
* Input
* The input file contains a value of floating point N (0 ≤ N ≤ 1000000.00).
*
* Output
* Print the minimum quantity of banknotes and coins necessary to change the initial value, as the given example.
*/


#include <iostream>
#include <math.h>
 
using namespace std;
 
int main() {
    
    double n;
    int moeda, real, aux = 0;
    cin>> n;
    real = n;
    moeda = (n - real) * 100;


    cout<< "NOTAS:" << endl;
    aux = (real % 100);
    cout<< real/100 << " nota(s) de R$ 100.00" <<endl;
    real = aux;
    aux = (real % 50);
    cout<< real/50 << " nota(s) de R$ 50.00" <<endl;
    real = aux;
    aux = (real % 20);
    cout<< real/20 << " nota(s) de R$ 20.00" <<endl;
    real = aux;
    aux = (real % 10);
    cout<< real/10 << " nota(s) de R$ 10.00" <<endl;
    real = aux;
    aux = (real % 5);
    cout<< real/5 << " nota(s) de R$ 5.00" <<endl;
    real = aux;
    aux = (real % 2);
    cout<< real/2 << " nota(s) de R$ 2.00" <<endl;

    moeda += (aux * 100);
    cout<< "MOEDAS:" << endl;
    aux = (moeda % 100);
    cout<< moeda/100 << " moeda(s) de R$ 1.00" <<endl;
    moeda = aux;
    aux = (moeda % 50);
    cout<< moeda/50 << " moeda(s) de R$ 0.50" <<endl;
    moeda = aux;
    aux = (moeda % 25);
    cout<< moeda/25 << " moeda(s) de R$ 0.25" <<endl;
    moeda = aux;
    aux = (moeda % 10);
    cout<< moeda/10 << " moeda(s) de R$ 0.10" <<endl;
    moeda = aux;
    aux = (moeda % 5);
    cout<< moeda/5 << " moeda(s) de R$ 0.05" <<endl;
    moeda = aux;
    cout<< moeda << " moeda(s) de R$ 0.01" <<endl;

    return 0;
}

