#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
    string rijec;
    int n,i,j,k,brojac,rezultat;
    char x;
    brojac =1;
    rezultat=0;
    cin>>n>>k;
    cin>>rijec;
   for(i=0;i<n-1;i++) {
    if(rijec[i]==rijec[i+1]) {
        brojac++;
    }
    else {
        rezultat=rezultat+brojac*brojac;
        brojac=1;
    }
   }
   rezultat=rezultat+brojac*brojac;
cout<<rezultat;




    system("pause");
    return 0;
}
