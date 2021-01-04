#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    unsigned long long int a,b,brojac=1,i,x,l;
    string c,kraj;
    cin>>a>>b>>c;
    unsigned long long int o=c.size();
    x=a*b;


    string p;
    while(kraj!=c)
    {
        x*=b;
        p=to_string(x);
        l=p.size();
        p.resize(100000000000);
        kraj=p.substr(l-o,l-1);

       if(kraj==c)
        {
            cout<<brojac+1;
            return 0;
        }
        else
            brojac++;

    }





    return 0;
}
