#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
 
using namespace std;
using ll = int64_t;
 
int main()
{
    ll n;
    ll t;
    ll ctr = 0;
    vector<ll> array;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        array.push_back(t);
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (array[i + 1] < array[i])
        {
            ll diff = array[i] - array[i + 1];

            array[i + 1] += diff;
            ctr += diff;
        }
    }
    cout << ctr << endl;
    return (0);
}