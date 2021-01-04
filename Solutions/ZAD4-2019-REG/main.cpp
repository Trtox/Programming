#include <iostream>

using namespace std;

int main()
{
    int k,n,i;
    cin>>k>>n;
    cout<<"0"<<" ";
    for(i=k;i<n;i++) {
        if(i%k==0) {
            cout<<i<<" ";
        }
    }

    system("pause");
    return 0;
}
