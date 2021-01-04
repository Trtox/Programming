#include <iostream>
#define MAX 100
using namespace std;

int main()
{
  int i,a[MAX],n,k,p,poz;
  cin >> n;
  cin >> k;
  for(i=0;i<n;i++) {
    cin >> a[i];
  };
p=0;
for(i=0;i<n;i++) {
    if(a[i]>=k) {
       if(p==0) {
         poz = i + 1;
       p = p + 1;
       };
    };
};
    if(p==0) {
        cout << "Ne postoji element niza koji zadovoljava uslov!";

    }
   else {
        cout << "Trazeni element nalazi se na " <<poz<< ". mjestu u nizu." <<endl;}
}
