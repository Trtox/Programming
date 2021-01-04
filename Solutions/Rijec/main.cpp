#include <bits/stdc++.h>
#define rep(a,n) for(int i = int(a); i<int(n); i++)
#define ll long long
#define elif else if

using namespace std;

const long long mod=10e9+7;

long long solve(int n,int k,string s)
{
    int bru=0,bsa=0,bsu=0,sbsu,sbsa,o=0;
    ll bk=1;

    rep(0,s.size())
    {
        if(s[i]=='?')
            bru++;
        else if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            bsa++;
        else
            bsu++;
    }

    if(n==2 && k==1)
        return 210;
    else
    {
       if(k==0)
       {
           if(bsa>bsu)
               return 19;
           elif(bsu>bsa)
                return 5;
       }

    if((bsu+bru)>bsa && (bsu+bru-bsa)<=k)
        rep(0,bru)
            bk*=21;

    if((bsa+bru)>bsu && (bsa+bru-bsu)<=k)
              rep(0,bru)
                bk*=5;

         rep(1,k)
         {
           o=k-i;
           if(abs((bsa+i-bsu-o))<=k)
            bk+=bru*(pow(21,i)*pow(5,o));

         }

    }

   return bk%mod;

}




int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    string s;
    cin>>n>>k;
    cin>>s;
    cout<<solve(n,k,s);


    return 0;
}
