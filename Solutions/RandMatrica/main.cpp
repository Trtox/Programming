#include <bits/stdc++.h>
#define rep(a,n) for(int i = int(a); i<int(n); i++)
#define repj(o,l) for(int j = int(o); j<int(l); j++)
#define ll long long
#define elif else if
#define MAX 1000
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n>>m;
    int a[n][m],nm[n]={1000},nv=0,p1=0,p2=0;
    rep(0,n)
        repj(0,m)
            cin>>a[i][j];


    rep(0,n)
        repj(0,m)
            if(a[i][j]<nm[i])
                nm[i]=a[i][j];

    nv=nm[0];
    rep(0,n)
    cout<<nm[i]<<" ";
    rep(0,n)
        if(nm[i]>nv)
            {
                nv=nm[i];
                p1=i;
            }

        repj(0,m)
            if(a[p1][j]==nv)
            {
                p2=j;
                break;
            }



    cout<<"Trazeni broj je "<<nv<<",nalazi se u "<<p1+1<<" redu i "<<p2+1<<" koloni, "<<endl;

    rep(0,n)
        repj(0,m)
         if(a[i][j]==nv && p1!=i && p2!=j)
            cout<<"u "<<i+1<<" redu i "<<j+1<<" koloni,"<<endl;








    return 0;
}
