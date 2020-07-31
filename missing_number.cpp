#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main(int argc, char **argv)
{
    int n = 0;
    vector<int> input_nbs;
    int t = 0;
 
    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> t;
        input_nbs.push_back(t);
    }
    sort(input_nbs.begin(), input_nbs.end());
    for (int i = 0; i < n; i++)
        if (input_nbs[i] != i + 1)
        {
            cout << i + 1;
            break;
        }
    return (0);
}
