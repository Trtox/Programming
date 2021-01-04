#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n,i,poz=2;
    cin>>n;
    string s[n+1],p,f[2*n+1],k,dd;
    for(i=0;i<n+1;i++)
        cin>>s[i];


    p=s[0];
    f[0]=p;
    f[2*n]=p;
    for(i=1;i<2*n;i+=2)
        f[i]='-';



    for(int j=0;j<n;j++)
    {
        for(i=1;i<n+1;i++)
        {

            k=s[i];
            dd=k.substr(k.find('-')+1,k.size());
            k=k.substr(0,k.find('-'));

                if(k==p)
                {
                    f[poz]=dd;
                    poz+=2;
                    p=dd;
                    k.clear();
                    break;
                }
        }
    }
    for(auto i : f)
       cout<<i;



    return 0;
}
