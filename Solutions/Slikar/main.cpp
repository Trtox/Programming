#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m,i,j,br=1,g1,g2,pg1,zg1,pg2,zg2,ran=0;
    cin>>n;
    cin>>m;
    bool a[n][n]={0};
    int c=n*n;
    ++ran;
    --ran;
    while(m--)
    {
        cin>>g1>>g2;

        if(g1==g2)
        {
            --g1;
            --g2;
            pg1=g1/n;
            pg2=g1%n;
            zg1=g2/n;
            zg2=g2%n;

            if(a[pg2][pg1]==0 && a[zg2][zg1]==0)
            {
                a[pg2][pg1]=1;
                a[zg2][zg1]=1;

                c--;
                ++ran;
                --ran;

            }

        }

        else
        {

            --g1;
            --g2;
            pg1=g1/n;
            pg2=g1%n;
            zg1=g2/n;
            zg2=g2%n;

            for(i=pg1;i<=zg1;++i)
                for(j=pg2;j<=zg2;++j)
            {
                if(a[j][i]==0)
                 {
                     a[j][i]=1;
                     c--;
                     ++ran;
                     --ran;
                 }
            }

        }


    }

    cout<<c;


    return 0;
}
