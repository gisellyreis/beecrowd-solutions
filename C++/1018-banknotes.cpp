
// Problem ID: 1018
// Title: Banknotes
// Link: https://www.beecrowd.com.br/judge/en/problems/view/1018

/**
* Description:
* In this problem you have to read an integer value and calculate the smallest possible number of banknotes in which the value may be decomposed. 
* The possible banknotes are 100, 50, 20, 10, 5, 2 and 1. Print the read value and the list of banknotes.
*
* Input
* The input file contains an integer value N (0 < N < 1000000).
*
* Output
* Print the read number and the minimum quantity of each necessary banknotes in Portuguese language, as the given example. 
* Do not forget to print the end of line after each line, otherwise you will receive “Presentation Error”.
*/


#include <iostream>
#include <math.h>
 
using namespace std;
 
int main() {
    
    int n, copia;
    int atual = 0;
    cin>> n;
    copia = n;

    cout<< n<< endl;
    atual = (n % 100);
    cout<< n/100 << " nota(s) de R$ 100,00" <<endl;
    n = atual;
    atual = (n % 50);
    cout<< n/50 << " nota(s) de R$ 50,00" <<endl;
    n = atual;
    atual = (n % 20);
    cout<< n/20 << " nota(s) de R$ 20,00" <<endl;
    n = atual;
    atual = (n % 10);
    cout<< n/10 << " nota(s) de R$ 10,00" <<endl;
    n = atual;
    atual = (n % 5);
    cout<< n/5 << " nota(s) de R$ 5,00" <<endl;
    n = atual;
    atual = (n % 2);
    cout<< n/2 << " nota(s) de R$ 2,00" <<endl;
    cout<< atual<< " nota(s) de R$ 1,00"<< endl;

    return 0;
}

