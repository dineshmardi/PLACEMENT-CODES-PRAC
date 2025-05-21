#include<bits/stdc++.h>
using namespace std;


void linear_search(int arrayy[],int target,int size)
{
    for(int i=0;i<size;i++)
    {
        if(target==arrayy[i])
        {
            cout<<arrayy[i]<<" "<<"at index="<<i+1;
        }
    }



}
int bi_inear_search(int arrayy[],int target,int size)
{
    int left=0;
    int right=size-1;
    while(left <= right)
    {
        if(arrayy[left]==target)
        {return left+1;}
        if(arrayy[right]==target)
        {return right+1;}
        left++;
        right--;

    }
    return -1;



}


void reverse_array(int arrayy[],int size)
{
    int left=0;
    int right=size-1;
    while(left <= right)
    {
        if(left==right)
        {
            arrayy[left]=arrayy[right];
        }
        swap(arrayy[left],arrayy[right]);
        left++;
        right--;

    }
    

}

void sum_product(int arrayy[],int size)
{
    int sum=0,mul=1;
    for(int i=0;i<size;i++)
    {
        sum+=arrayy[i];
        mul*=arrayy[i];
    }
    cout<<"sum="<<sum<<endl<<"mul="<<mul<<endl;
}



void swap_minmax(int a[],int size)
{
    int min_index,max_index,max=INT_MIN,min=INT_MAX;
    for (int i=0;i<size;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
            min_index=i;
        }
        else if(a[i]>max)
        {
            max=a[i];
            max_index=i;
        }

        
    }
    swap(a[min_index],a[max_index]);

    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }

}




void unique(int a[], int size) {
    cout<<endl;
    for (int i = 0; i < size; i++) {
        int count = 0;
        for (int j = 0; j < size; j++) {
            if (a[i] == a[j]) {
                count++;
            }
        }

        // If count is 1, it's unique
        if (count == 1) {
            cout << a[i] << " ";
        }
    }
}


int main()
{
    int arrayy[]={2,4,33,6,5,7,54,56,4};
    linear_search(arrayy,56,9);
    int size=9;

    cout<<endl<<"bi="<<bi_inear_search(arrayy,56,9)<<endl;

    reverse_array(arrayy,size);

    for(int i=0;i<size;i++)
    {
        cout<<arrayy[i]<<" ";
    }

    sum_product(arrayy,size);
    swap_minmax(arrayy,size);
    unique(arrayy,size);

    return 0;
}