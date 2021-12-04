#include <iostream>
#include <string>

#define endl "\n"
using namespace std;

int main()
{
    string s;
    int sum = 0;
    int tmp = 0;
    bool minus = false;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '-' || s[i] == '+')
        {
            if (minus == true)
                sum -= tmp;
            else
                sum += tmp;

            tmp = 0;

            if (s[i] == '-' && minus != true)
                minus = true;
        }
        else
        {
            tmp *= 10;
            tmp += s[i] - '0';
            if (i == s.size() - 1)
            {
                if (minus == true)
                    sum -= tmp;
                else
                    sum += tmp;
            }
        }
    }

    cout << sum << endl;

    return 0;
}