#include <bits/stdc++.h>

using namespace std;

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   unsigned long long n,i,br=0,c=1,b;
   cin>>n;
   string s=to_string(n);
   unsigned long long k=s.size();
   while(k--)
    c*=10;
    c/=10;

    for(i=c;i>=1;i/=10)
      {
          b=n/i;
          if(b%to_string(b).size()==0)
            br++;
      }

   if(br==s.size())
    cout<<"Broj je magican!";
   else
    cout<<"Broj nije magican!";

    return 0;
}
