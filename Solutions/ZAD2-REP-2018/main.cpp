#include <iostream>

using namespace std;

int main()
{
    int n,i,pkh[100],pkm[100],pk[100],kkh[100],kkm[100],kk[100],iph,ipm,ip,ikh,ikm,ik,brojac;
    brojac=0;
    cin>>n;
    for(i=0;i<n;i++) {
        cin>>pkh[i]>>pkm[i];
        pkh[i]=pkh[i]+24;
        pk[i]=pkh[i]*60+pkm[i];

    }
    for(i=0;i<n;i++) {
    cin>>kkh[i]>>kkm[i];
    kkh[i]=kkh[i]+24;
    kk[i]=kkh[i]*60+kkm[i];
 }
    cin>>iph>>ipm;
    iph=iph+24;
    ip=iph*60+ipm;
    cin>>ikh>>ikm;
    ikh=ikh+24;
    ik=ikh*60+ikm;
    for(i=0;i<n;i++) {
        if(pk[i]>=ip && kk[i]<=ik ) {
            brojac++;

        }
     else if(pk[i]>=ip && pk[i]<=ik) {
        brojac++;

    }
     else  if(pk[i]<=ip && kk[i]>=ik) {
            brojac++;

        }
    else if(pk[i]<ik && kk[i]>=ip) {
        brojac++;
    }
}
cout<<brojac<< " ";


    system("pause");
    return 0;
}
