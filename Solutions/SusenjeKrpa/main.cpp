#include <bits/stdc++.h>
#define rep(a,n) for(int i = int(a); i<int(n); i++)
#define repd(a,n) for(int i = int(n); i>=int(a); i--)
#define i64 long long
#define elif else if

using namespace std;

int main()
{
    i64 n,l,i,j,s1=0,s2=0;
    cin>>n;
    i64 a[n],b[n];

    for(i=0;i<n;i++)
        {
            cin>>a[i]>>b[i];
            s1+=a[i];
            s2+=b[i];
        }

        if(s1==l)
        {
            for(i=0;i<n;i++)
                cout<<a[i]<<" "<<b[i]<<" ";
        }

        elif(s2==l)
        {
            for(i=0;i<n;i++)
                cout<<b[i]<<" "<<a[i]<<" ";
        }

        else
        {

        }

    return 0;
}
