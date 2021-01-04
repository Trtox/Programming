#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
int a,b,c,k,razlika,srednji,najv,najm;
cin >>a>>b>>c; //u ovom zadatku je potrebno odrediti k=razlika*srednji (razlika je najveceg i najmanjeg od a,b,c) //

if(a>b && a>c) {
    najv=a;
}
else if(a<b && a<c) {
    najm=a;
}
else {
    srednji=a;
}
if(b>a && b>c) {
   najv=b;
}
else if(b<a && b<c ) {
    najm=b;
}
else {
    srednji=b;
}
if(c>a && c>b) {
    najv=c;
}
else if(c<a && c<b) {
    najm=c;
}
else {
    srednji=c;
}
razlika = najv-najm;

k=razlika*srednji;
cout << k;




system("pause");
return 0;
}
