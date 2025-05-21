#include<bits/stdc++.h>

using namespace std;


int greaterr()
{
    int a,b,c;
    int larger;
    cout<<"enter the numbers="<<endl;
    cin>>a>>b>>c;
    if(a>b && a>c)
    {
        cout<<a<<" is larger"<<endl;
        larger=a;
        if(b>c)
        {
            cout<<b<<" is second largest"<<endl;
             cout<<c<<" is smallest"<<endl;
        }
        if(b<c)
        {
            cout<<b<<" is second largest"<<endl;
             cout<<c<<" is smallest"<<endl;
        }
       
    }
    else if(b>a && b>c)
    {
        cout<<b<<" is larger"<<endl;
        larger=b;
        if(a>c)
        {
            cout<<a<<" is second largest"<<endl;
             cout<<c<<" is smallest"<<endl;
        }
       if(a<c)
        {
            cout<<a<<" is second largest"<<endl;
             cout<<c<<" is smallest"<<endl;
        }
    else
    {
        cout<<c<<" is larger"<<endl;
        larger=c;
        if(b>a)
        {
            cout<<b<<" is second largest"<<endl;
             cout<<a<<" is smallest"<<endl;
        }
        if(b<a)
        {
            cout<<b<<" is second largest"<<endl;
             cout<<a<<" is smallest"<<endl;
        }
       
    }
    return larger;
}
}

int main()
{
    greaterr();
    // cout<<"enter a number="<<endl;
    // int num;
    // cin>>num;
    // if (num%2==0)
    // cout<<"even"<<endl;
    // else
    // cout<<"odd"<<endl;

    // char c;
    // cout<<"enter a character="<<endl;
    // cin>>c;
    // if(isupper(c))
    // {
    //     cout<<c<<" is upper case"<<endl;
    // }
    // else{
    //     cout<<c<<" is lower case"<<endl;
    // }
// (isupper(c))?cout<<"upper":cout<<"lower";




    return 0;
}