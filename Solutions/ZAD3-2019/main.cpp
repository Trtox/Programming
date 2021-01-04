#include <iostream>
#include <stdlib.h>
#define MAX 100
using namespace std;
int main() {
int broj,razlika,veltro,maltro,k,i,j,niz[4];
cin>>broj;
niz[0]=broj/1000;
niz[1]=(broj-niz[0]*1000)/100;
niz[2]=(broj-niz[0]*1000-niz[1]*100)/10;
niz[3]=(broj-niz[0]*1000-niz[1]*100-niz[2]*10);
for(i=0;i<3;i++)
for(j=i+1;j<4;j++) {
   if(niz[i]<niz[j]) {
    k=niz[i];
    niz[i]=niz[j];
    niz[j]=k;
   }
}
veltro=niz[0]*100+niz[1]*10+niz[2];
if(niz[3]!=0) {
  maltro=niz[3]*100+niz[2]*10+niz[1];
}

else if(niz[2]!=0) {
    maltro=niz[2]*100+niz[3]+niz[1];
}
else if(niz[1]!=0) {
    maltro=niz[1]*100+niz[2]+niz[3];
}
else {
    maltro=veltro;
}

razlika=veltro-maltro;
cout <<razlika;

system("pause");
return 0;
}
