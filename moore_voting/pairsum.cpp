#include<iostream>
#include<vector>

using namespace std;

vector<int> pairsum(vector<int> a,int size,int target)
{
    vector<int> p;
    int sum=0;
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<=size;j++)
        {
            sum=a[i]+a[j];
            if(sum==target)
            {
                p.push_back(i);
                p.push_back(j);
                return p;
            }
        }
        
    }
    return p;


}

int main()
{
    vector<int> a={2,7,11,15};
    int size=a.size();
   vector<int>ans= pairsum(a,size,22);
   cout<<ans[0]<<" "<<ans[1]<<endl;



    return 0;
}