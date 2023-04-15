#include <iostream>
using namespace std;

string intRoman(int n)
{

    string str_romans[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

    string result = "";

    for (int i = 0; i < 13; ++i)
    {
        while (n - values[i] >= 0)
        {
            result += str_romans[i];
            n -= values[i];
        }
    }

    return result;
}

int main()
{
    int n = 999;
    cout << "Integer " << n << " : Roman " << intRoman(999) << endl;

    return 0;
}
