#include <bits/stdc++.h>
#define rep(a,n) for(int i = int(a); i<int(n); i++)
#define ll long long
#define elif else if

using namespace std;

ll solve(long long n)
{

  if(n==12 || (n>1 && n<12))
    return 1;
  else
  {
    if(n%12==0)
        return n/12;
    else
        return n/12+1;


  }

}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    int j,sum1=12,sum2=12;
    cin>>n;

    cout<<solve(n);





    return 0;
    system("pause");
}
