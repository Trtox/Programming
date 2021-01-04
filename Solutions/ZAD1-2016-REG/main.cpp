#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main() {
	int n,suma,i;
	cout<<"N = ";
	cin>>n;
	suma=0;
	for(i=1;i<=n;i++) {
		if(i ==1 || i==3 || i==9 || i==27 || i==81 || i==243 || i==729 ){
			suma-=i;
		}
		else {
			suma+=i;
		}
}
    cout<<"SUMA = "<<suma;

	system("pause");
	return 0;
}
