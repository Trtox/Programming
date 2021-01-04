#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int o,k,brojac=0;
	cin>>o;
	for(int i=5;i<o/2;i++)
        for(int j=1;j<i;j++)
    {
        k=o-(i+j);
        if(k<j)
            break;

        if(i==sqrt(k*k+j*j))
        {
            brojac++;
            cout<<i<< " "<<" "<<k<< " "<<" "<<endl;
        }
    }



	cout << brojac<<endl;

	return 0;
}
