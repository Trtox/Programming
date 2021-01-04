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

    string a,b;
    cin>>a;
    cin>>b;
    int c1[a.size()],c2[b.size()];
    int br1=0,br2=0,br=0;
    if(a==b)
        cout<<0;
    else
    {
        rep(0,a.size())
          {
              c1[i]=a[i]-'0';
              c2[i]=b[i]-'0';
              if(c1[i]!=c2[i])
                br++;
          }
        sort(c1,c1+a.size());
        sort(c2,c2+a.size());

        rep(1,a.size())
        {
            if(c1[i]!=c1[i+1])
                br1++;

            if(c2[i]!=c2[i+1])
                br2++;


        }

        if(br==a.size())
            cout<<br;
        elif(br1==br2)
            cout<<"1";
        elif(br1>br2)
            cout<<br1-br2+1;
        else
            cout<<br2-br1+1;


    }



    return 0;
}
