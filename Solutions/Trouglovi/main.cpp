#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b,c;
    float a1,b1,O,O2;
    int brojac=0;
    cin>>O;
    O2=O/2;

   for(b=1;b<int(O2);b++)
   {
       b1=float(b);
       a1 =(O2*((O -2*b1)/(O - b1)));
       a=int(a1);
       c=int(O)-(a+b);
       if(a==a1 && c*c==a*a+b*b)
        brojac++;
   }

    cout<<brojac/2;
    return 0;
}
