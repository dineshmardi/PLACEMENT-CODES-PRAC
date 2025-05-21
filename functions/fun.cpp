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


bool prime(int n)
{
    for(int i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}


void primes(int n)
{
    cout << "Prime numbers up to " << n << " = ";
    
    if (n >= 2)
        cout << 2 << " ";  // 2 is the first prime

    for (int i = 3; i <= n; i++)
    {
        bool isPrime = true;
        for (int j = 2; j <= i - 1; j++)
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
            cout << i << " ";
    }

    cout << endl;
}

void fibo(int n)
{
    int prev=0;
    int next=1;
    int sum=0;
    cout<<prev<<"  "<<next<<"  ";
    for(int i=0;i<n;i++)
    {
        sum=prev+next;
        prev=next;
        next=sum;
        cout<<sum<<"  ";

    }
}




int main()
{
    fibo(10);
    // cout<<fact(5);
    return 0;
}