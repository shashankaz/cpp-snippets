#include <bits/stdc++.h>
using namespace std;

string decimalToBinary(int n)
{
    string binary = "";
    while (n > 0)
    {
        binary = to_string(n % 2) + binary;
        // binary += to_string(n % 2);
        // binary.push_back(n % 2 + '0');
        n /= 2;
    }
    // Run these lines to reverse the string if using 10 or 11 line
    // reverse(binary.begin(), binary.end());
    // binary = string(binary.rbegin(), binary.rend());
    return binary;
}

int main()
{
    int n;
    cout << "Enter a decimal number: ";
    cin >> n;
    cout << "Binary equivalent: " << decimalToBinary(n) << endl;
    return 0;
}
