#include <bits/stdc++.h>
using namespace std;

string decimalToBinary(int n)
{
    string binary = "";
    while (n > 0)
    {
        binary = to_string(n % 2) + binary;
        n /= 2;
    }
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