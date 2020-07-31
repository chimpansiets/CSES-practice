#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main(int argc, char **argv)
{
    int64_t n = 0;
    string output;
 
    cin >> n;
    output += to_string(n);
    while (n != 1)
    {
        if (n % 2 == 0)
            n /= 2;
        else
            n = (n * 3) + 1;
        output += " ";
        output += to_string(n);
    }
    cout << output;
    cout << endl;
    return (0);
}
