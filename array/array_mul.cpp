#include<iostream>
#include<math.h>
#include<algorithm>
#include<limits>
#include<typeinfo>
#include<vector>
using namespace std;

vector<int> arr(vector<int> a)
{
    int size=a.size();
    vector<int> n(size);
    
    for(int i=0;i<a.size();i++)
    {
        int res=1;
        for(int j=0;j<a.size();j++)
        {
            if(j==i)
            {
                continue;
            }
           res*=a[j];

        }
        n[i]=res;
    }
    return n;
}


int main()
{
    double a=3.6;
    cout<<floor(a)<<endl<<ceil(a)<<endl;
    cout<<typeid(a).name()<<endl;

    cout<<"vector implementation array multiply except self:"<<endl;
    vector<int> name={1,2,3,4};
    vector<int> res=arr(name);
    for(int i:res)
    {
        cout<<i<<endl;
    }

    return 0;
}