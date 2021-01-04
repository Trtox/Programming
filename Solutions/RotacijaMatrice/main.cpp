#include <bits/stdc++.h>
#define rep(a,n) for(int i = int(a); i<int(n); i++)
#define repd(a,n) for(int i = int(n); i>=int(a); i--)
#define ll long long
#define elif else if

using namespace std;
// Written by Trtox
int main()
{

   ll n,m;
   cin>>n;
   cin>>m;
   ll t,b1,b2,i,j,br=1,temp,pos1,pos2,pos3,pos4,gr;
   char s;
   vector<vector<long long>> a(n,vector<long long>m);

   for(i=0;i<n;++i)
   {
        for(j=0;j<n;++j)
       {
         a[i][j]=br;
         br++;
       }
   }

    if(n%2==0)
        gr=n/2;

     else if(n%2!=0)
        gr=n/2+1;

    while(m--)
    {
        cin>>s;
        if(s=='R')
        {
          cin>>t;
          if(t==1)
          {
                 for(i=0;i<gr;i++)
                    for(j=0;j<n;j++)
                 {
                     temp=a[i][j];
                     a[i][j]=a[n-i-1][j];
                     a[n-i-1][j]=temp;
                 }
          }

          else if(t==2)
          {
              for(i=0;i<n-1;i++)
                    for(j=i+1;j<n;j++)
              {
                  temp=a[j][i];
                  a[j][i]=a[i][j];
                  a[i][j]=temp;
              }
          }

          else if(t==3)
          {

            for(i=0;i<n;i++)
              for(j=0;j<gr;j++)
              {
                  temp=a[i][j];
                  a[i][j]=a[i][n-j-1];
                  a[i][n-j-1]=temp;
              }

          }

          else if(t==4)
          {
             for(i=0;i<n-1;i++)
                for(j=0;j<n-i-1;j++)
             {
                temp=a[i][j];
               a[i][j]=a[(n-1)-(i+j)+i][(n-1)-(i+j)+j];
                 a[(n-1)-(i+j)+i][(n-1)-(i+j)+j]=temp;

             }

          }
        }

        else
        {
           cin>>b1>>b2;
           if(b1==b2)
            continue;
           else
           {
               for(i=0;i<n;i++)
               {
                    for(j=0;j<n;j++)
                   {
                       if(a[i][j]==b1)
                       {
                         pos1=i;
                         pos2=j;
                       }
                       else if(a[i][j]==b2)
                       {
                           pos3=i;
                           pos4=j;
                       }
                   }
               }
               temp=a[pos1][pos2];
               a[pos1][pos2]=a[pos3][pos4];
               a[pos3][pos4]=temp;


        }


    }
    }

     for(i=0;i<n;i++)
     {
         for(j=0;j<n;j++)
            cout<<a[i][j]<<" ";

         cout<<endl;
     }


    return 0;
}
