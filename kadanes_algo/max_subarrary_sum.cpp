#include<iostream>
#include<limits.h>
using namespace std;


void maxsum(int a[],int size)
{
    int maxx=INT_MIN;
    for(int i=0;i<size;i++)
    {
        int sum=0;
        for(int j=i;j<size;j++)
        {
           sum+=a[j];
           maxx=max(sum,maxx);
        }
        cout<<endl;
    }
    cout<<"max sum="<<maxx<<endl;

}

int main()
{

    cout<<"printing all sub array="<<endl;
    int a[]={1,2,3,-1,5};
    for(int start=0;start<5;start++)
    {
        
        for(int end=start;end<5;end++)
        {
            for(int i=start;i<=end;i++)//to print from start to end;
            {
                cout<<a[i]<<" ";
            }
            cout<<" ";
        }
        cout<<endl;
    }
    cout<<"new array="<<endl;
    maxsum(a,5);
    return 0;
}