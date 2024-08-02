
// Problem ID: 1044
// Title: Multiples
// Link: https://www.beecrowd.com.br/judge/en/problems/view/1044


#include <iostream>
#include <iomanip>

using namespace std;
int main(){
	int a, b, au;
	cin>> a>>b;

if(a>b){
 au = a;
 a=b;
 b=au;
}

	if (b%a == 0){
	  cout<< "Sao Multiplos" <<endl;
	}else{
		cout<< "Nao sao Multiplos" <<endl;
	}



return 0;
}

