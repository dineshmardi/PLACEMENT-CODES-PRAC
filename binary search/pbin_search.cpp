#include<iostream>
#include<vector>
#include<algorithm>
using  namespace std;

int bin_search(int a[],int size,int target)
{
    sort(a,a+size);
    int start=0;
    int end=size-1;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(a[mid]==target)

        {
            cout<<"found:"<<a[mid]<<" at index:"<<mid<<endl;
            return mid;

        }
        else if(a[mid]<target)
        {
            start=mid+1;
        }
        else
        {
            end=end-1;
        }
    }
    cout<<"not found"<<endl;
    return -1;
}




void vbin_search(vector<int> &a, int target)
{
    sort(a.begin(), a.end()); // Ensure vector is sorted
    int start = 0, end = a.size() - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (a[mid] == target)
        {
            cout << "Found: " << a[mid] << " at index " << mid << endl;
            return;
        }
        else if (a[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    cout << "Not found" << endl;
}


//recursive apperoach

int bs(int a[],int target,int start,int end)
{
    if(start<=end)
    {
        int mid=start+(end-start)/2;
        if(a[mid]<target)
        {
            return bs(a,target,mid+1,end);
        }
        else if(a[mid]>target)
        {
            return bs(a,target,start,end-1);
        }
        else{
            return mid;
        }
    }
    cout<<"not found"<<endl;
    return -1;
}



int main()
{

    int binn[]={2,4,1,5,3};
    vector<int> name={3,2,6,4,5,1};
    vbin_search(name,2);

    bin_search(binn,sizeof(binn)/sizeof(int),4);
    int target=2;
    

    int a=bs(binn,target,0,sizeof(binn)/sizeof(int));

    cout<<"found at index="<<a<<endl;
// cout<<"another vector="<<endl;
//     for(int num:name)
//     {
//         cout<<num<<" ";
//     }

    return 0;
}