#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    unsigned long long int a,b,brojac=1,x,l,c,niz[10000]={0},p=0;
    cin>>a>>b>>c;
    string kraj,c1,a1,b1,x1,i;
    x=a*b;
    c1=to_string(c);
    l=c1.size();
    while(kraj!=c1)
    {
        x*=b;
        x1=to_string(x);
        i=
       /* kraj=x1.erase(0,x1.size()-l);
        brojac++;
        if(kraj==c1)
        {
            cout<<brojac;
            return 0;
        }
       /* brojac++;
        if(x%c==0)
            cout<<brojac;
            */
    }
    return 0;
}
