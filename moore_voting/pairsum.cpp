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

vector<int> opt_pairsum(vector<int> a,int size,int target)
{
    int sum=0;
    vector<int> p;
    int left=0;
    int right=size-1;
    
    while(left<=right)
    {
        sum=a[left]+a[right];
        if(sum==target)
        {
            p.push_back(left);
            p.push_back(right);
            return p;
        }
        else if(sum<target)
        {
            left++;
        }
        else{
            right--;
        }

    }
    return p;
    
}



int main()
{
    vector<int> a={2,7,11,15};
    int size=a.size();
   vector<int>ans= opt_pairsum(a,size,9);
   cout<<ans[0]<<" "<<ans[1]<<endl;



    return 0;
}