#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main() {
int i,j,n,a[100],b[100],brojac,brojac1;
brojac=0;
brojac1=0;
cout<< "Broj elemenata ";
cin>>n;
cout <<"Elementi niza A "<<endl;
for(i=0;i<n;i++) {
	cin>>a[i];
}
cout << "Elementi niza B "<<endl;
for(i=0;i<n;i++) {
	cin>>b[i];
}

for(i=0; i<n-1; i++) {
	for(j=i+1 ;j<n ;j++ ) {
		if(a[i]>a[j]) {
			brojac++;
		}
	}
}
for(i=0; i<n-1; i++) {
	for(j=i+1 ;j<n ;j++ ) {
		if(b[i]>b[j]) {
			brojac1++;
		}
	}
}
    if(brojac==0 && brojac1==0 ) {
	cout<<"Elementi niza C su: ";
	for(i=0;i<n;i++) {
		cout<<pow(a[i],3)-2*pow(b[i],3)<<" ,";
	}
}
	else {
		cout<<"Elementi niza C su: ";
		for(i=0;i<n;i++) {
			cout<<pow(a[i],2)-pow(b[i],2)<<" ,";
		}
	}
	system("pause");
	return 0;
}

