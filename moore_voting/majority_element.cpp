#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;


vector<int> majority(vector<int> a)
{
    int size=a.size();
    vector<int> res;
    //sort the array
    sort(a.begin(),a.end());
    for(int i=0;i<size;i++)
    {
        int freq=0;
        for(int j=0;j<size;j++)
        {
            if(a[i]==a[j])
            {
                freq++;
            }
           
            
        }
        if(freq>(size/2))
        {
            res.push_back(a[i]);
            return res;
        }
        
    }
    return res;

}

int main()
{
    vector<int> a={1,2,3,1,2,1,1,1,1,2,1,1};
    vector<int> res=majority(a);
    cout<<"result measurity elements="<<res[0]<<endl;



    return 0;
}