#include <iostream>
#include <string>
#include <vector>
 
using namespace std;
using ll = int64_t;

int main()
{
    string input;
    char last_c;
    ll ctr = 0;
    ll longest = 0;
    
    cin >> input;
    if (input.length() == 1)
        cout << 1;
    else
    {
        last_c = input[0];
        for (auto c : input)
        {
            if (c == last_c)
                ctr++;
            else
            {
                if (longest < ctr)
                    longest = ctr;
                ctr = 1;
            }
            last_c = c;
        }
        if (longest < ctr)
            longest = ctr;
        cout << longest << endl;
    }
    return (0);
}