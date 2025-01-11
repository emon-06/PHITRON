#include <iostream>
#include <vector>
using namespace std;

class Stack
{
public:
    vector<int> v;

    void push(int val)
    {
        v.push_back(val);
    }

    int pop()
    {
        if (!v.empty())
        {
            int val = v.back();
            v.pop_back();
            return val;
        }
        return -1;
    }

    int size()
    {
        return v.size();
    }

    bool empty()
    {
        return v.empty();
    }

    int top()
    {
        if (!v.empty())
        {
            return v.back();
        }
        return -1;
    }
};

class Queue
{
public:
    vector<int> v2;

    void push(int val)
    {
        v2.push_back(val);
    }

    int pop()
    {
        if (!v2.empty())
        {
            int val = v2.front();
            v2.erase(v2.begin());
            return val;
        }
        return -1;
    }

    int size()
    {
        return v2.size();
    }

    bool empty()
    {
        return v2.empty();
    }

    int front()
    {
        if (!v2.empty())
        {
            return v2.front();
        }
        return -1;
    }
};

int main()
{
    int N, M;
    cin >> N >> M;

    Stack st;
    Queue q;

    for (int i = 0; i < N; i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }

    for (int i = 0; i < M; i++)
    {
        int val2;
        cin >> val2;
        q.push(val2);
    }

    if (st.size() != q.size())
    {
        cout << "NO" << endl;
        return 0;
    }

    bool TheyRsame = true;
    while (!st.empty() && !q.empty())
    {
        if (st.pop() != q.pop())
        {
            TheyRsame = false;
            break;
        }
    }

    if (TheyRsame == true)
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

There is a list of N values that were inserted into a stack and a list of M  values that were inserted into a queue. You need to determine whether the stack and queue are the same or not based on the order in which the elements are removed.

Note: You cannot use any STL here. You need to implement the stack and queue by yourself. You can use linked list or array as you want.*/
