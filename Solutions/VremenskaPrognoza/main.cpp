#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  long long int n,i,d,j,s=0;
  long long int p[100];
  long long int t[100999]={0};
  long long int dt[100999]={0};
  long long int broj=0;
  long long poz=0;
  cin>>n;

  for(i=0;i<n;i++)
  {
    cin>>p[i];
    s+=p[i];
  }

  if(s==0)
  {
      cout<<"0";
      return 0;
  }

   for(i=0;i<n;i++)
    {
     dt[i]=p[poz];
     poz++;
     if(poz==n)
        poz=0;
    }


    for(i=1;i<n;i++)
        t[i]=t[i-1]+dt[i-1];

sort(t,t+n);

   for(i=1;i<n-1;i++)
    for(j=i+1;j<n;j++)
    if(t[i]==t[j])
    cout<<t[i];

//cin.ignore();
//cin.get();
return 0;
}
