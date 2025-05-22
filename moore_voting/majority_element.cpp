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
    int freq=0, ans =a[0];
    for(int i=1;i<size;i++)
    {
        // int freq=0;
        // for(int j=0;j<size;j++)
        // {
        //     if(a[i]==a[j])
        //     {
        //         freq++;
        //     }
           
            
        // }
        if(a[i]==a[i-1])
        {
            freq++;
        }
        else{
            freq=1;
            ans=a[i];
        }
        if(freq>(size/2))
        {
            res.push_back(ans);
            return res;
        }
        
    }
    return res;

}


vector<int> majo_moore(vector<int> a)

{
    vector<int> res;
    int freq=0,ans=0;
    for(int i=0;i<a.size();i++)
    {
        if(freq==0)
        {
            ans=a[i];
        }
        if(ans==a[i])
        {
            freq++;
        }
        else{
            freq--;
        }
    }
    res.push_back(ans);
   
    return  res;
}

int main()
{
    vector<int> a={2,2,3,2,2,1,2,1,1,2,1,2};
    vector<int> res=majority(a);
      vector<int> res1=majority(a);
    cout<<"result measurity elements="<<res[0]<<"majority by moore="<<res1[0]<<endl;



    return 0;
}