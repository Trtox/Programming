#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n1,m,n2,i,j,p=0;
   cin>>n1>>m;
   cin>>n2>>m;
   float a[n1][m],b[n2][m],max1[m],max2[m],temp;

   for(i=0;i<n1;++i)
    for(j=0;j<m;++j)
        cin>>a[i][j];
    max1[0]=a[0][0];

   for(i=0;i<n2;++i)
    for(j=0;j<m;++j)
        cin>>b[i][j];
    max2[0]=a[0][0];


   for(j=0;j<m;j++)
   {
        for(i=0;i<n1;i++)
       {
          if(a[i][j]>max1[p])
              max1[p]=a[i][j];

       }
       p++;
       max1[p]=a[0][j+1];
   }

   p=0;
   for(j=0;j<m;j++)
   {
        for(i=0;i<n2;i++)
       {
          if(b[i][j]>max2[p])
              max2[p]=b[i][j];

       }
       p++;
       max2[p]=b[0][j+1];
   }




   cout<<"Najbolji rezultat u prvom odjeljenu:"<<endl;
   for(i=0;i<m;i++)
       cout<<max1[i]<<" ";
   cout<<endl;

   cout<<"Najbolji rezultat u drugom odjeljenju:"<<endl;
   for(i=0;i<m;i++)
        cout<<max2[i]<<" ";
   cout<<endl;


   cout<<"Najbolji rezultat u oba odjeljenja:"<<endl;
   for(i=0;i<m;i++)
   {
       if(max1[i]>max2[i])
        cout<<max1[i]<<" ";

       else
        cout<<max2[i]<<" ";
   }
    return 0;
}
