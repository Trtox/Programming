#include <iostream>

using namespace std;

bool prost(int n){
	int brojac = 0;
	for(int i = 1; i <= n; i++){
	     if(n % i == 0)
		   brojac++;
      }
      if (brojac == 2)
         return true;
            else
               return false;
}

int obrni(int x){
	if(x/100 == 0)
		return (x%10)*10 + (x/10);
            else
               return (x%10)*100 + ((x/10) % 10)*10 + x/100;
           }

int main() {
	int n;
	cin >> n;
	int niz[1000];
	int k=0;
	for(int i=n+1; i<=2*n; i++){
	   if(prost(i)){
	    niz[k] = i;
	    k++;
	}
	}
	for(int i = 0; i<k; i++)
	    if(prost(obrni(niz[i]))){
	        cout<< niz[i] << endl;
	        break;
	    }
	return 0;
}
