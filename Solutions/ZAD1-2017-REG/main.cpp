#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;
int main() {
string valuta;
double marka,dobijena,e,d,r,zaokruzena;
cin>>e>>d>>r;
cin>>marka;
cin>>valuta;
if(valuta=="evro") {
    dobijena=marka/e;
}
else if(valuta=="dolar") {
    dobijena=marka/d;
}
else if(valuta=="rublja") {
    dobijena=marka/r;
}
cout <<fixed<<setprecision(3)<<dobijena<<endl;
cout <<valuta<<endl;
system("pause");
return 0;
}
