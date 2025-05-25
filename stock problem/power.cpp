#include <iostream>
using namespace std;

int main()
{

    int i, bit, ans = 1, x = 2;
    cout << "enter the power num=" << endl;
    cin >> i;
    // if (x == 0)
    // {
    //     return 1.0;
    // }
    // if (x == 1)
    //     return 1.0;
    // if (x == -1 && x % 2 == 0)
    //     return 1.0;
    // if (x == -1 && x % 2 != 0)
    //     return -1.0;

    while (i > 0)
    {

        bit = i % 2;
        if (bit == 1)
        {
            ans *= x;
        }
        x *= x;
        i /= 2;
        cout << bit << endl;
    }

    cout << " power " << " =" << ans << endl;
    return 0;
}