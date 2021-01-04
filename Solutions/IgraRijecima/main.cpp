#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int mod=1e9+7;

ll izlaz(ll br)
{
    cout<<br;
    return 0;
}
int main()
{
    string s,k,s1;
    getline(cin,s);
    getline(cin,k);
    ll n = s.size(),ans=0;
    ll a[n],i;
    s1=s;
    for(i=0;i<n;i++)
        {
            cin>>a[i];
            a[i]--;
        }

    for(i=0;i<n;i++)
    {
       if(s.size() == k.size() && s!=k)
            {
                ans--;
                break;
            }

         s[a[i]]='-';
         s1.erase(a[i],1);

        if(s1.size() == k.size()+1 || s1.size()==k.size())
        {
            if(s1!=k)
                break;
        }




        ans++;

        if(s1==k)
            break;


    }
    cout<<ans+1;




    return 0;
}
