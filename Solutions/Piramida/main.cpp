#include <bits/stdc++.h>
#define rep(a,n) for(int i = int(a); i<int(n); i++)
#define ll long long

using namespace std;


int main()
{
  int n,i,j,br=1,p=1,l=1,k=1,be=0;
  cin>>n;
  int brelem=3;
  int a[n],s[n]={0};
  rep(0,n)
    cin>>a[i];
  sort(a,a+n);
  s[0]=a[0];

  //main dio koda

  while(k<n)
  {
    for(j=l;j<brelem;j++)
        s[p]+=a[j];

    if(s[p]>s[p-1])
    {
        br++;
        l=brelem;
        brelem+=brelem-1;

    }
    else
        break;

    if(brelem>n)
        break;

    p++;
    k++;
  }
  cout<<br;










    return 0;
}
