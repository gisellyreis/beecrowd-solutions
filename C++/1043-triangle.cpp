
// Problem ID: 1043
// Title: Triangle
// Link: https://www.beecrowd.com.br/judge/en/problems/view/1043


#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    double A, B, C;
    cin >> A >> B >> C;

    cout << fixed << setprecision (1);

    if ((A < B+C) && (A > B-C) ) {

        cout << "Perimetro = " << A+B+C << endl;
    }
    else {

        cout << "Area = " << ((A+B)*C)/2 << endl;
    }
 
    return 0;
}

