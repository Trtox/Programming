#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int a[100],b[100],n,brojac,i;
    brojac=0;
    cin>>n;
    for(i=0;i<n;i++) {
        cin>>a[i];
    }
    for(i=0;i<n;i++) {
        if(a[i]%7==0) {
            b[brojac]=a[i];
            brojac++;
        }
    }
    if(brojac==0) {
        cout<<"Ne postoje clanovi niza A djeljivi sa 7 ";
        exit(EXIT_SUCCESS);
    }
    else {
        for(i=0;i<brojac;i++) {
            cout<<b[i]<<" ";
        }
    }





    system("pause");
    return 0;
}
