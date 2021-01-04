#include <bits/stdc++.h>
using namespace std;


void prviDuplikat(int niz[], int n)
{
    set<int> k;
    unordered_set<int> intSet;
    unordered_set<int> duplicate;

    for (int i = 0; i < n; i++)
    {

        if (intSet.find(niz[i]) == intSet.end())
            intSet.insert(niz[i]);

        else
            duplicate.insert(niz[i]);
    }


    unordered_set<int> :: iterator itr;
     if(duplicate.empty())
     {
         cout<<"Nema";
     }
     else
     {
         for(itr = duplicate.begin(); itr!=duplicate.end();itr++)
         {
            cout<<*itr<<" ";
            break;
         }


     }
}
int main()
{
    int n,i,poz=1,p[1000],t[100000];

    cin>>n;
    for(i=0;i<n;i++)
        cin>>p[i];

    t[0]=p[0];

    for(i=1;i<100000;i++)
    {
        t[i]=t[i-1]+p[poz];
        poz++;
        if(poz==n)
            poz=0;

    }

     prviDuplikat(t,100000);

    return 0;
}
