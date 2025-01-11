#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;

    queue<string> q;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;

        if (val == 0)
        {
            string name;
            cin >> name;
            q.push(name);
        }
        else if (val == 1)
        {
            if (!q.empty())
            {
                cout << q.front() << endl;
                q.pop();
            }
            else
            {
                cout << "Invalid" << endl;
            }
        }
    }

    return 0;
}


/* Problem Statement

You will be given Q queries. In each query you will get a command. The command is of two types -

You will be given 0 and N of a person who stood in a line of a ticket counter.
You will be given only 1 which means the person in front of the line got the ticket and will be removed from the line. You need to print the name of that person who got that ticket. If there are no one in the line, print .Invalid
Note: There can be multiple person in the line with same name. You need to solve it using STL Stack or Queue only. */
