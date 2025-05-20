#include<bits/stdc++.h>
using namespace std;


int square()
{
    int n;cout<<"enter the number="<<endl;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}

int Asquare()
{
    int n;cout<<"enter the number="<<endl;
    cin>>n;
    for (int i=1;i<=n;i++)
    { char a='A';
        for(int j=1;j<=n;j++)
        {
            cout<<a<<" ";
            a+=1;
        }
        cout<<endl;
    }
    return 0;
}
void continuous()

{
    int n;cout<<"enter the number="<<endl;
    cin>>n;
    int a=1;
    for (int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<a<<" ";
            a++;
        }
        cout<<endl;
    }
   
    
}
void triangle()
{
    int n;cout<<"enter the number="<<endl;
    cin>>n;
    
    for (int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"* ";
            
        }
        cout<<endl;
    }

}
void Ntriangle()
{
    int n;cout<<"enter the number="<<endl;
    cin>>n;
    
    for (int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i<<" ";
            
        }
        cout<<endl;
    }

}
void ctriangle()
{
    int n;cout<<"enter the number="<<endl;
    cin>>n;
    
    for (int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
            
        }
        cout<<endl;
    }

}
void Rtriangle()
{
    int n;cout<<"enter the number="<<endl;
    cin>>n;
    
    for (int i=1;i<=n;i++)
    {
        for(int j=i;j>=1;j--)
        {
            cout<<j<<" ";
            
        }
        cout<<endl;
    }

}
void Ftriangle()
{
    int n;cout<<"enter the number="<<endl;
    cin>>n;
    int a=1;
    for (int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<a<<" ";
            a++;
        }
        cout<<endl;
    }

}

void Itriangle()
{
    int n;cout<<"enter the number="<<endl;
    cin>>n;
   
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<n-i;j++)
        {
            cout<<i+1;

            
        }
        
       
        cout<<endl;
    }

}

void Pytriangle()
{
    int n;cout<<"enter the number="<<endl;
    cin>>n;
    for( int i=0;i<n;i++)
    {
        for (int j=i;j<n-1;j++)

        {
            cout<<" ";
        }
        for(int j=1;j<=i+1;j++)
        {
            cout<<j;
        }
        for(int j=i;j>=1;j--)
        {
            cout<<j;
        }
        

        cout<<endl;
    }
}

void hollow_rect()
{
    int n;cout<<"enter the number="<<endl;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        for(int j=i;j<n-1;j++)
        {
            cout<<" ";
        }
        cout<<"*";
        for(int j=0;j<2*i;j++)
        {
            cout<<" ";
        }
        
        cout<<"*";
        
        
        cout<<endl;
    }
    for (int i=n;i>0;i--)
    {
        for(int j=i;j<n-1;j++)
        {
            cout<<" ";
        }
        cout<<"*";
        for(int j=0;j<2*i;j++)
        {
            cout<<" ";
        }
        
        cout<<"*";
        
        
        cout<<endl;
    }


}








int main()
{
    hollow_rect();
    return 0;
}