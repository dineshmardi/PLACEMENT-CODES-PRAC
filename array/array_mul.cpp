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



vector<int> o_arr(vector<int> a) {
    int n = a.size();
    vector<int> result(n, 1);

    int leftProduct = 1;
    for (int i = 0; i < n; i++) {
        result[i] = leftProduct;
        leftProduct *= a[i];
    }

    int rightProduct = 1;
    for (int i = n - 1; i >= 0; i--) {
        result[i] *= rightProduct;
        rightProduct *= a[i];
    }

    return result;
}




int main()
{
    double a=3.6;
    cout<<floor(a)<<endl<<ceil(a)<<endl;
    cout<<typeid(a).name()<<endl;

    cout<<"vector implementation array multiply except self:"<<endl;
    vector<int> name={1,2,3,4};
    vector<int> res=o_arr(name);
    for(int i:res)
    {
        cout<<i<<endl;
    }
    cout<<"new one:"<<endl;
    for(int i:res)
    {
        cout<<i<<endl;
    }

    return 0;
}