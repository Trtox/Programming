#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n,i;
  cin>>n;
  int a[n],b[n]={0},c[n]={0};
  for(i=0;i<n;i++) cin>>a[i];

  for(i=1;i<n;i++)
  {
      if(a[i]<a[0])
        b[i]=a[i];

      else if(a[i]>a[0])
        c[i]=a[i];
  }

  for(i=1;i<n;i++)
    if(b[i]!=0)
    cout<<b[i]<<" ";

  cout<<a[0]<< " ";

  for(i=1;i<n;i++)
    if(c[i]!=0)
    cout<<c[i]<<" ";









  return 0;
}
