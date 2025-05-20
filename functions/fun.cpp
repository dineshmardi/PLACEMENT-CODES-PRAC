#include<bits/stdc++.h>
using namespace std;
int sum(int n)
{
    int i=0;
    int sum=0;
    while(i!=n+1)
    {
        sum+=i;
        i++;
        cout<<sum<<" ";
    }
    return sum;
}

int fact(int n)
{
    if(n==1)
    {
        
        return 1;
    }
    return n*fact(n-1);

}


int sumofdigit(int n)
{
    int sum=0;
    while(n%10!=0)
    {
        sum+=n%10;
        n/=10;

    }
    return sum;

}

int ncr(int n,int r)
{
    return (fact(n)/(fact(r)*fact(n-r)));
}
int main()
{
    cout<<ncr(5,2)<<endl;
    // cout<<fact(5);
    return 0;
}