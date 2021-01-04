#include <iostream>
#include <cstdlib>
#define MAX 100
using namespace std;

int main()
{
 int n,a[MAX],b[MAX],i,j;
 float postotak=17/100;
 cin>>n;
 string proizvod[n];
 for(i=0;i<2* n;i++) {
    cin>>proizvod[i];
    cin>>a[i];
 }
for(i=0;i<n;i++) {
    cout<<proizvod[i]<<" "<<a[i]<<endl;
}










    system("pause");
    return 0;
}
