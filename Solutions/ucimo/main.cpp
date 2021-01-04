#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,ce=0,co=0,i,b=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
       cin>>a[i];
       if(a[i]%2==0)
        ce++;
        else if(a[i]%2!=0)
            co++;

    }
    if(ce>co)
    {
        for(i=0;i<n;i++)
        {
            if(a[i]%2!=0)
            {
                cout<<i+1;
                break;
            }
        }

    }
     else
     {
         for(i=0;i<n;i++)
         {
             if(a[i]%2==0)
             {
                 cout<<i+1;
                 break;
             }
         }
     }





}
