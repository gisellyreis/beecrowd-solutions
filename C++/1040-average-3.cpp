
// Problem ID: 1040
// Title: Average 3
// Link: https://www.beecrowd.com.br/judge/en/problems/view/1040

/**
* Description:
* Read four numbers (N1, N2, N3, N4), which one with 1 digit after the decimal point, corresponding to 4 scores obtained by a student. 
* Calculate the average with weights 2, 3, 4 e 1 respectively, for these 4 scores and print the message "Media: " (Average), followed by the calculated result. 
* If the average was 7.0 or more, print the message "Aluno aprovado." (Approved Student). If the average was less than 5.0, print the message: "Aluno reprovado." (Reproved Student). 
* If the average was between 5.0 and 6.9, including these, the program must print the message "Aluno em exame." (In exam student).
*
* In case of exam, read one more score. Print the message "Nota do exame: " (Exam score) followed by the typed score. Recalculate the average (sum the exam score with the previous 
* calculated average and divide by 2) and print the message “Aluno aprovado.” (Approved student) in case of average 5.0 or more) or "Aluno reprovado." (Reproved student) in case of 
* average 4.9 or less. For these 2 cases (approved or reproved after the exam) print the message "Media final: " (Final average) followed by the final average for this student in the last line.
*
* Input
* The input contains four floating point numbers that represent the students' grades.
*
* Output
* Print all the answers with one digit after the decimal point.
*/


#include <iostream>
#include <iomanip>

using namespace std;

int main() {

float a, b , c, d, m, e, f;
cin>> a >> b >> c >> d;

cout<< fixed<< setprecision(1);
m = ((a*2)+(b*3)+(c*4)+(d*1))/10.0;

cout<< "Media: "<< m <<endl;
if(m >= 7.0){

  cout<< "Aluno aprovado."<<endl;
}
else if (m < 5.0){
  cout<< "Aluno reprovado."<<endl;
}
else if (m >= 5.0 && m <= 6.9){
  cout<< "Aluno em exame."<<endl;
  cin>> e;
  cout<< "Nota do exame: " << e << endl;
  f = (m + e)/2;
  if( f >= 5.0){
    cout<< "Aluno aprovado."<< endl;
  }
  else {
    cout<< "Aluno reprovado."<< endl;
  }
  cout<< "Media final: "<< f<<endl;


}


return 0;
}

