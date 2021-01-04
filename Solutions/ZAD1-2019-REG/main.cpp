#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int n,m,niz[10000],a,b,c,d,i,brojac;
    bool flag=0;
    brojac=0;
    cin>>n>>m;
    for(i=n;i<m;i++) {
        niz[i]=i;
    }
    for(i=n+1;i<m;i++) {
        if(i%2==0) {
        a=niz[i]/1000;
        b=(niz[i]-a*1000)/100;
        c=(niz[i]-a*1000-b*100)/10;
        d=niz[i]-a*1000-b*100-c*10;
        if(a%2==0&&b%2==0&&c%2==0&&d%2==0) {
            flag=1;
            cout<<niz[i]<<" ";
        }

    }
    }

    if(flag==1)
        cout<<"Nema";









    system("pause");
    return 0;
}
