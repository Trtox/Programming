#include <iostream>
#include <stdlib.h>
#define MAX 100
using namespace std;

int main()
{
  int n,a[MAX],i,j,k,razlika,tr,b[MAX],t,br;
  razlika=50;
  cin >> n;
  for(t=0;t<n;t++) {
    b[t]=0;
  }
  for(i=0;i<n;i++) {
    cin >> a[i];
  }
  for(i=0;i<n;i++)
  for(j=i+1;j<n;j++) {
   if(a[i]>a[j]) {

    k=a[i];
    a[i]=a[j];
    a[j]=k;
   }
  }


  cout << abs(a[0]-a[1]);
 if(tr<razlika) {
    razlika=tr;
    b[0]=a[0];
    b[1]=a[1];
 }





  system("pause");
  return 0;
}
