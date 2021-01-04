#include <bits/stdc++.h>

using namespace std;

int main()
{
    char AB,AC,AD,BC,BD,CD,cniz[4],temp1;
    int A,B,C,D,temp,i,j;
    A=0;
    B=0;
    C=0;
    D=0;
    cin>>AB>>AC>>AD>>BC>>BD>>CD;
    switch(AB)
    {
    case 'P' :
        A+=3;
        break;
    case 'G' :
        B+=3;
        break;
    case 'N' :
        A++;
        B++;
    }
    switch(AC)
    {
    case 'P' :
        A+=3;
        break;
    case 'G' :
        C+=3;
        break;
    case 'N' :
        A++;
        C++;
    }
    switch(AD)
    {
    case 'P' :
        A+=3;
        break;
    case 'G' :
        D+=3;
        break;
    case 'N' :
        A++;
        D++;
    }
    switch(BC)
    {
    case 'P' :
        B+=3;
        break;
    case 'G' :
        C+=3;
        break;
    case 'N' :
        B++;
        C++;
    }
    switch(BD)
    {
    case 'P' :
        B+=3;
        break;
    case 'G' :
        D+=3;
        break;
    case 'N' :
        B++;
        D++;
    }
    switch(CD)
    {
    case 'P' :
        C+=3;
        break;
    case 'G' :
        D+=3;
        break;
    case 'N' :
        C++;
        D++;
    }
    int n=4;
    int niz[n];
    niz[0]=A;
    niz[1]=B;
    niz[2]=C;
    niz[3]=D;
    cniz[0]='A';
    cniz[1]='B';
    cniz[2]='C';
    cniz[3]='D';

    for(int i=0;i<4;i++)
        for(j=i+1;j<4;j++)
    {
        if(niz[i]<niz[j])
        {
            temp=niz[i];
            niz[i]=niz[j];
            niz[j]=temp;

            temp1=cniz[i];
            cniz[i]=cniz[j];
            cniz[j]=temp1;
        }

    }
    for(i=0;i<4;i++)
        cout<<"Tim "<<cniz[i]<<" br.poena "<<niz[i]<<endl;
/*    if(niz[0]==A)
        cout<<"Tim A br.poena "<<niz[0]<<endl;
    if(niz[0]==B)
        cout<<"Tim B br.poena "<<niz[0]<<endl;
    if(niz[0]==C)
        cout<<"Tim C br.poena "<<niz[0]<<endl;
    if (niz[0]==D)
        cout<<"Tim B br.poena "<<niz[0]<<endl;
    if(niz[1]==A)
        cout<<"Tim A br.poena "<<niz[1]<<endl;
    if(niz[1]==B)
        cout<<"Tim B br.poena "<<niz[1]<<endl;
    if(niz[1]==C)
        cout<<"Tim C br.poena "<<niz[1]<<endl;
    if(niz[1]==D)
        cout<<"Tim D br.poena "<<niz[1]<<endl;
    if(niz[2]==A)
        cout<<"Tim A br.poena "<<niz[2]<<endl;
    if(niz[2]==B)
        cout<<"Tim B br.poena "<<niz[2]<<endl;
    if(niz[2]==C)
        cout<<"Tim C br.poena "<<niz[2]<<endl;
    if(niz[2]==D)
        cout<<"Tim D br.poena "<<niz[2]<<endl;
    if(niz[3]==A)
        cout<<"Tim A br.poena "<<niz[3]<<endl;
    if(niz[3]==B)
        cout<<"Tim B br.poena "<<niz[3]<<endl;
    if(niz[3]==C)
        cout<<"Tim C br.poena "<<niz[3]<<endl;
    if(niz[3]==D)
        cout<<"Tim D br.poena "<<niz[3]<<endl;
*/

    system("pause");
    return 0;
}
