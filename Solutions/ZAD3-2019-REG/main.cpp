#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main()
{
    float n,m,stanje1,stanje2;
    cin>>n>>stanje1;
    cin>>m>>stanje2;
    if(n<1||m<1||n==m) {
        cout<<"Greska!";
        exit(EXIT_SUCCESS);
    }
    if(m<n) {
        cout<<fixed<<setprecision(2)<<(stanje2-stanje1)/(m+365-n);
    }
    else {
        cout<<fixed<<setprecision(2)<<(stanje2-stanje1)/(m-n);
    }

    system("pause");
    return 0;
}
