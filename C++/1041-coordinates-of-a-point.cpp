
// Problem ID: 1041
// Title: Coordinates of a Point
// Link: https://www.beecrowd.com.br/judge/en/problems/view/1041


#include <iostream>
#include <iomanip>

using namespace std;

int main () {

 
 float x, y;
 cin >> x >> y;

 if(x >0 && y>0){
 cout<< "Q1" <<endl;
}
 else if(x <0 && y>0){
 cout<< "Q2"<<endl;
}
 else if(x <0 && y<0){
 cout<<"Q3" <<endl;
}
 else if(x >0 && y<0){
 cout<<"Q4" <<endl;
}
 else if(x !=0 && y==0){
 cout<< "Eixo X"<<endl;
}
else if(x ==0 && y!=0){
 cout<< "Eixo Y"<<endl;
}
 else {
cout<< "Origem"<< endl;
}
return 0;
}

