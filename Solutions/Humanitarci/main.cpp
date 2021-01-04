#include <bits/stdc++.h>

using namespace std;

int main()
{

    int v,n,c[100],t[100],i,j,sume[100],brojac=0,b[100],poz=0;
    cin>>v>>n;

    for(i=0;i<n;i++)
        cin>>c[i];

    for(i=0;i<n;i++)
        cin>>t[i];

   for(i=0;i<n;++i)
   {
       sume[i]=v/t[i]*c[i];
       if(sume[i]<v)
       {
           for(j=0;j<n;j++)
           {
               if(sume[i]+t[j]==v)
                sume[i]+=c[j];
           }
       }
   }

   sort(sume,sume+n);
   for(i=0;i<n;i++)
   {
       if(sume[i]==v)
        brojac++;

       if(sume[i]>v)
        sume[i]=0;

   }
   for(i=0;i<n;i++)
   {
       if(sume[i]!=0)
       {
           b[poz]=sume[i];
           poz++;
       }

   }

       if(brojac>=1)
        cout<<v;
       else
        cout<<b[poz-1];

    return 0;
}
