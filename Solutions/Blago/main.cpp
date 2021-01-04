#include <bits/stdc++.h>
#define rep(a,n) for(int i = int(a); i<int(n); i++)
#define ll long long
#define elif else if
#define MAX 1000
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a[5][5],j,pi,pj,pistaro,pjstaro,ns[10000],p=0;

    rep(0,5)
        for(j=0;j<5;j++)
            cin>>a[i][j];

    pi=a[0][0]/10;
    pj=a[0][0]-pi*10;
    pi--;
    pj--;
    cout<<"posjetili "<<pi+1<<" "<<pj+1<<endl;


    while(1)
    {
        if(a[pi][pj]!=pi*10+pj+11)
        {
           pistaro=pi;
            pjstaro=pj;
            pi=a[pistaro][pjstaro]/10;
            pj=a[pistaro][pjstaro]-pi*10;
            pi--;
            pj--;
            for(int i=0;i<p;i+=2)
            {
                if(ns[i]==pi && ns[i+1]==pj)
                {
                    cout<<"blago je ukradeno";
                    return 0;
                }
            }
            cout<<"posjetili "<<pi+1<<" "<<pj+1<<endl;
            ns[p]=pi;
            ns[p+1]=pj;
            p+=2;



        }

        else if(a[pi][pj]==pi*10+pj+11)
        {


            cout<<"blago je u "<<pi+1<<" "<<pj+1;
            break;
        }
    }

    return 0;
}
