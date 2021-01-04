#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
float a,b,x;
cin>>a>>b;
x=b/2;
if(b<=30||a<=30) {
    cout << "Duzina sale mora biti veca od 30m!" << endl;
    exit(EXIT_FAILURE);
}
cout << "Duzina sale je "<<b<<"m, "<<"a sirina "<< x<<"m";

system("pause");
return 0;
}
