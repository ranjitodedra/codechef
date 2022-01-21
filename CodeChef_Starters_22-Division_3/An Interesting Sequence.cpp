#include <iostream>
#define ll long long int
using namespace std;

ll powerOfTwo(ll n)
{
    if (n == 0)
    {
        return 0;
    }
    while (n != 1)
    {
        n = n / 2;
        if (n % 2 != 0 && n != 1)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int t, v,c,;
    ll k,temp;
    cin >> t;
    while (t--)
    {
        c = 0;
        cin >> k;
        temp = k/2;
        v = powerOfTwo(k);
        if (v == 1)
        {
            while (temp > 0)
            {
                c++;
                temp = temp / 2;
            }
            cout << c << endl;
        }
        else
            cout << "0" << endl;
    }
    return 0;
}