#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
   int n,i,suma;
   cin>>n;
   suma=0;
   for(i=1;i<=n;i++)
   {
       suma+=(1-(1/(i+1)));

   }
   cout<<suma;






    return 0;
}
