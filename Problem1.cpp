#include <iostream>
#include <stack>
#include <queue>
using namespace std;
int main()
{
    int N,M;
    cin>>N>>M;

    stack<int>st;
    queue<int>q;
    //input in stack
    for (int i=0; i<N; i ++)
    {
        int val;
        cin>> val;
        st.push(val);
    }
    //input in queue;
    for (int i = 0; i<M; i++)
    {
        int val2;
        cin>>val2;
        q.push(val2);
    }
    // protomei check kore niteci j stack ar queue same ase kina
    // smae na thakle tara same na .
    if (st.size() != q.size())
    {
        cout << "NO" << endl;
        return 0;
    }

    bool TheyareSame = true;
    while(!st.empty() && !q.empty())
    {
        if (st.top() != q.front())
        {
            TheyareSame = false;
            break;
        }
        st.pop();
        q.pop();

        
    }
    if(TheyareSame == true )
        {
            cout << "YES" << endl;
        }
        else 
        {
            cout << "NO" << endl;
        }
    return 0;
}





/*Problem Statement

There is a list of N values that were inserted into a stack and a list of M values that were inserted into a queue. You need to determine whether the stack and queue are the same or not based on the order in which the elements are removed.

Note: You need to solve it using STL Stack and Queue only.*/
