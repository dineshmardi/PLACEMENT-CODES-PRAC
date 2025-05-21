#include<bits/stdc++.h>
using namespace std;

void dtob(int decimal)
{
    if (decimal == 0) {
        cout << "0 ";
        return;
    }

    string binary = "";
    while (decimal > 0)
    {
        binary = to_string(decimal % 2) + binary;
        decimal /= 2;
    }
    cout << binary << " ";
}



int main()  
{  


dtob(4);
return 0;

}