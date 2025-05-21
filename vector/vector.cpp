#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

int unique(vector<int> &name)
{
    int a = 0;
    for (int i : name)
    {
        a = a ^ i;
    }

    return a;
}

void vec(vector<int> &b)
{
    b.push_back(1);
    cout << "size=" << b.size() << " capacity=" << b.capacity() << endl; // size=6 and capacity=10 because 5*2
}

int search(vector<int> &a, int target)
{

    int left = 0;
    int right = a.size() - 1;
    while (left <= right)
    {
        if (a[left] == target)
            return left;
        if (a[right] == target)
            return right;
        left++;
        right--;
    }

    return -1;
}

void reversee(vector<int> &a)
{
    int left = 0;
    int right = a.size() - 1;

    while (left < right)
    {
        swap(a[left], a[right]);
        left++;
        right--;
    }
}

int main()
{
    vector<int> num = {1, 2, 1, 2, 8};

    cout << unique(num) << endl;

    vec(num);

    cout << "item=" << num[search(num, 8)] << endl;
    

    cout << num.front();
    cout << endl
         << num.back() << endl;
    
    for (int i : num)
    {
        cout << i << " ";
    }
    cout << endl;
    reversee(num);
    for (int i : num)
    {
        cout << i << " ";
    }

    reverse(num.begin(), num.end());
    cout<<endl;
    for (int i : num)
    {
        cout << i << " ";
    }


    return 0;
}