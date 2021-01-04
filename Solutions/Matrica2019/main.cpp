#include <bits/stdc++.h>

using namespace std;

int main()
{
    char matrica[50][50];
    int n,nmatrica[50][50],brojacJ,brojacI,i,j,k;
    brojacI=0;
    brojacJ=0;
    cin>>n;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            cin>>matrica[i][j];
    for(i=0;i<n;i++)
       {
           for(j=0;j<n;j++)
           {
               for(k=0;k<n;k++)
               {
                   if(matrica[i][k]=='*')
                    brojacI++;
               }
               for(k=0;k<n;k++)
               {
                   if(matrica[k][j]=='*')
                    brojacJ++;
               }
               if(brojacI>brojacJ)
                nmatrica[i][j]=brojacI;
               else
                nmatrica[i][j]=brojacJ;

               brojacI=0;
               brojacJ=0;
           }
       }


    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
    {
      cout<<nmatrica[i][j]<<" ";
    }
    cout<<endl;
    }



    system("pause");
    return 0;
}
