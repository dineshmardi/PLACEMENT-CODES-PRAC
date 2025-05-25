#include<iostream>
#include<limits.h>
using namespace std;


int main()
{
    int diff=INT_MIN;
    int res;
    int max_profit=INT_MIN;
    int stock[]={7,1,5,3,6,4};
    int size=sizeof(stock)/sizeof(int);
    for(int i=0;i<size;i++)
    {
        diff=stock[i];
        for(int j=0;j<i;j++)
        {
            if(stock[j]<diff)
            {
                diff=stock[j];

            }
        }
        cout<<"min of ="<<stock[i]<<" is ="<<diff<<endl;
        res=stock[i]-diff;
        if(res>max_profit)max_profit=res;

    }

    cout<<"max profit="<<max_profit<<endl;
    return 0;
}