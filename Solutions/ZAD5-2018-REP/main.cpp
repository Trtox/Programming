#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int main()
{
    int matrica[100][100],i,j,n,b[100][100];
    cin>>n;
    for(i=0;i<n;i++)
    for(j=0;j<n;j++) {
        cin>>matrica[i][j];
    }
    for(i=0;i<n;i++)
    for(j=0;j<n;j++) {
        b[i][j]=pow(matrica[i][j],2);
    }
    for(i=0;i<n;i++) {
    for(j=0;j<n;j++) {
       cout<<b[i][j]<<" ";
    }
    cout<<endl;
    }
    system("pause");
    return 0;
}
