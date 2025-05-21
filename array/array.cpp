#include<bits/stdc++.h>
using namespace std;


void arrayy(int a[])
{
    a[5]={7};
    
}

void lar_min()
{
    
    int number[]={10,2,3,4,2,1,3,5,3,2,-9};
    arrayy(number);
    int mx=INT_MAX;
    int min=INT_MIN;;
    cout<<number[5]<<endl;

    for(int i=0;i<sizeof(number)/sizeof(int);i++)
    {
        if(number[i]<mx)
        {
            mx=number[i];
        }
        if(number[i]>min)
        {
            min=number[i];
        }
        cout<<number[i]<<endl;
    }
    cout<<"max="<<min;
    cout<<endl<<"min="<<mx<<endl;
}
int main()
{
    lar_min();

    return 0;
}