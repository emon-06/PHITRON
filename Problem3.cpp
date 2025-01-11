#include <iostream>
#include <stack>

using namespace std;

bool validORNot(string s)
{
    stack<char>st;
    for(char c:s)
    {
        if(!st.empty () && ((c=='0' && st.top()== '1') || (c=='1' && st.top()=='0')))
        {
            st.pop();
        }
        else{
            st.push(c);
        }
    }
    return st.empty();
}
int main()

{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(validORNot(s)==true )
        {
            cout<<"YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    
    return 0;
}

/*Problem Statement

Given a string S containing just the characters 0 and 1, determine if the input string is valid.

An input string is valid if the string is empty after doing some operatios. The available operations are:

0 can delete its previous available character 1 along with itself. If there is no 1 available to delete, it will not delete itself.
1 can delete its previous available character 0 along with itself. If there is no 0 available to delete, it will not delete itself.
Note: You need to solve it using STL Stack or Queue only.*/
