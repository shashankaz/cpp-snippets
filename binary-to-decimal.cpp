#include <bits/stdc++.h>
using namespace std;

int binaryToDecimal(string binary)
{
    int decimal = 0;
    int base = 1;
    for (int i = binary.length() - 1; i >= 0; i--)
    {
        if (binary[i] == '1')
        {
            decimal += base;
        }
        base *= 2;
    }
    return decimal;
}

int main()
{
    string binary;
    cout << "Enter a binary number: ";
    cin >> binary;
    cout << "Decimal equivalent: " << binaryToDecimal(binary) << endl;
    return 0;
}