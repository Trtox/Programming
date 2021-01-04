#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{

    int n,i,suma,niz[100],minnp,suma1;
    suma1=0;
    suma=0;
    cin>>n;
    for(i=0;i<n;i++) {
        cin>>niz[i];
    }
    minnp=niz[0];
    for(i=0;i<n;i++) {
        suma=suma+niz[i];
    }
    if(suma%2==0) {
        cout<<suma<<" ";
    }
    else {
     for(i=0;i<n;i++) {
        if(niz[i]<minnp && niz[i]%2!=0) {
            minnp=niz[i];

        }
     }
    for(i=0;i<n;i++) {
        suma1=suma1+niz[i];
    }
    suma=suma1-minnp;
    cout<<suma<<" ";








    }












    system("pause");
    return 0;
}
