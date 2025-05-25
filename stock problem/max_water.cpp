#include<iostream>
#include<limits.h>
#include<algorithm>
using namespace std;


int most_water(int a[],int size)
{
    int max_water=INT_MIN;
    int area;

    int left=0;int right=size-1;
    while(left<right)
    {
        area=min(a[left],a[right])*(right-left);
        if(area>max_water)max_water=area;
        if(min(a[left],a[right])==a[left])
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    return max_water;
}
int main()
{
    int a[]={1,8,6,2,5,4,8,3,7};
    int size=sizeof(a)/sizeof(int);
    cout<<"most water content="<<most_water(a,size)<<endl;


    return 0;
}