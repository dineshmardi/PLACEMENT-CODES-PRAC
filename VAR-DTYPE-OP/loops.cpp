#include<bits/stdc++.h>
using namespace std;
int main()
{
    // int sum=0;
    // for (int i =1;i <=50; i++)
    // {
    //     if(i%2!=0)
    //     {
    //         sum+=i;
    //     }
        
    // }
    // cout<<sum;
cout<<"enter a number="<<endl;
int num;
cin>>num;
bool isprime=true;
for(int i=2;i<=num-1;i++)

{
    if(num%i==0)
    {
        isprime=false;
    }
}
cout<<isprime<<endl;

    return 0;
}