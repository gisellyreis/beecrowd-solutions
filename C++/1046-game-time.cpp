
// Problem ID: 1046
// Title: Game Time
// Link: https://www.beecrowd.com.br/judge/en/problems/view/1046


#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {

int i, f, dif;
cin>> i>> f;

if(f<=i){
f+= 24;
}

dif = f -i;

cout<< "O JOGO DUROU "<< dif<< " HORA(S)"<< endl;

return 0;
}


