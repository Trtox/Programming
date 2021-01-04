#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{

    int n,i,j,k,a[100];
    vector<int> niz(100,0);
    cin>>n;

    for(i=0;i<n;i++)
        cin>>a[i];

    sort(a,a+n,greater<int>());

    for(i=0;i<n;i++)
        for(j=1;j<n;j++)
          for(k=2;k<n;k++)
    {
       if(a[i]+a[j]+a[k]==100)
       {
           niz.push_back(a[i]);
           niz.push_back(a[j]);
           niz.push_back(a[k]);
       }
    }

   for(size_t i=0;i<niz.size();i++)
    if(i%4==0)
    cout<<endl;
   else
    cout<<niz[i]<<" ";





    return 0;
}
