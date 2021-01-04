#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main()
{
   int kp;
   float uk,ostalo,provizija;
   provizija=0.5;
   cin>>kp>>uk;
   if(kp>uk) {
    cout << "Novac se ne moze podici jer ne postoji dovoljno sredstava";
   }
   else if(kp%5!=0) {
    cout << "Novac se ne moze podici jer iznos nije djeljiv sa 5";
   }
   else if((uk-kp-provizija)<0) {
    cout << "Novac se ne moze podici jer ne postoji dovoljno sredstava";
   }
   else {
    ostalo=uk-kp-provizija;
    cout << setprecision(8) << ostalo <<"KM";
   }

    system("pause");
    return 0;
}
