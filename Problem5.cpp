#include <iostream>
#include <queue>
#include <string>

using namespace std;

bool elimination(string s)
{
    queue<char> q;
    for (char c : s)
    {
        if (!q.empty())
        {
            if (c == '1')
            {
                if (q.front() == '0')
                {
                    q.pop();
                }
                else
                {
                    q.push(c);
                }
            }
            else
            {
                q.push(c);
            }
        }
        else
        {
            q.push(c);
        }
    }
    return q.empty();
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (elimination(s) == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
/*Problem Statement

You will be given a binary string S (A binary string is a string which contains only 0 and 1) in which every 1 will eliminate its previously adjacent 0 and itself. After an elimination, if another elimination is possible, it will continue until no further eliminations can be made.

For example, if the sequence is 100110110 , then the  and  elements, as well as the  6th and 7th elements, will be eliminated, resulting in the string  10110(10 01 1 01 10 - Bold values are eliminated). After that, the 2nd and 3rd elements will be eliminated, resulting in the string 110 (1 01 10 - Bold values are eliminated). After that, no further eliminations can occur.

You need to determine whether the string will be empty after all eliminations.

Note: You need to solve it using STL Stack or Queue only.*/
