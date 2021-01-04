#include <iostream>
#include <cstdlib>
#include <string>
#include <algorithm>
#define MAX 100
using namespace std;

int main() {

 int n,i,brojac[MAX];
 int maxBr=-1;
for(i=0;i<=n;i++) {
    brojac[i]={0};
}
 cout<<"N=";
 cin>>n;
string rijec[MAX];
 for(i=0;i<=n;i++) {
    getline(cin,rijec[i]);
}
    for(i=0;i<=n;i++){
        for(char& c : rijec[i])
    if(c=='e') {
        brojac[i]++;
    }
    else if(c!='e') {
        cout<<"Izdvojeni string je: Ne postoji string";
        exit(EXIT_SUCCESS);
    }
    }
for(i=1;i<=n;i++) {
    if(brojac[i]>maxBr) {
        maxBr=brojac[i];
    }
}

for(i=1;i<=n;i++) {
    if(maxBr==brojac[i]) {
        replace(rijec[i].begin(),rijec[i].end(),'e','*');
        cout<<"Izdvojeni string je: "<<rijec[i]<<endl;
    }
}

    system("pause");
    return 0;
}
