#ifndef TEST_H_INCLUDED
#define TEST_H_INCLUDED

void sortiraj(int a[],int n)
{
    int temp;
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
    {
        if(a[i]<a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}

#endif // TEST_H_INCLUDED
