#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
  int a,b,n,c,d,i,veci,manji;

  cin >>a>>b>>n;
  c=a;
  d=b;
if(a==0||b==0) {
    cout << "Greska!";
    exit(EXIT_FAILURE);
}
else {
  for(i=1;i<n+1;i++) {
    if(i%2==0) {
     d=d*2;
    }
    else {
      c=c*2;
    }
  }
 if(c>d) {
    veci=c;
    manji=d;
 }
 else {
    veci=d;
    manji=c;

 }
cout <<veci/manji;
}















    system("pause");
    return 0;
}
