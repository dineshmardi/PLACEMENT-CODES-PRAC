#include<iostream>

using namespace std;


void arrayy(int a[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<*a<<endl;
        a++;
    }
}
void change(int &value)
{
    value=20;
}
int main()
{
int a[4]={2,4,3,1};
arrayy(a,4);

    int s=10;
    change(s);
    cout<<&s<<endl;//print address of s

    int *ptr=&s;
    cout<<ptr<<endl;//pointer


    //pointer to pointer
    int **ptr1=&ptr;
    cout<<ptr1<<" "<<&ptr<<endl;

    //value agt

    cout<<*&s<<" "<<*ptr<<" "<<*ptr1<<" "<<**ptr1<<endl;


    //null pointer
    int *ptr2=NULL;
    cout<<ptr2<<endl;


    return 0;
}