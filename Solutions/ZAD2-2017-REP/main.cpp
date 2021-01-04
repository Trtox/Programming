#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    string rijec[100],kont;
    int n,i,j,brojac[100];
    cin>>n;
    cin>>kont;
    for(i=0;i<n;i++) {
        cin>>rijec[i];
        brojac[i]=0;
    }
    for(char& c : kont)
    for(i=0;i<n;i++)
    for(char& x: rijec[i]) {
        if(c==x) {
            brojac[i]++;
        }

    }
    for(i=0;i<n;i++) {
        if(brojac[i]!=0) {
            cout<<"Broj dragulja u uzorku "<<i+1<<" je: "<<brojac[i]<<endl;
        }
        else {
            cout<<"Broj dragulja u uzorku "<<i+1<<" je :0 "<<endl;
        }
    }

    system("pause");
    return 0;
}
