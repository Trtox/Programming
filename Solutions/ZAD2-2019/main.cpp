#include <iostream>
#include <stdlib.h>
#define MAX 100
using namespace std;

int main() {
int n,a[MAX],i;
cin >>n;
for(i=0;i<n;i++) {
    cin >> a[i];
};
for(i=0;i<n;i=i+2) {
    cout << a[i]-a[i+1] << " " <<endl;
}

system("pause");
return 0;
}
