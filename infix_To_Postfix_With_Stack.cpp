#include <bits/stdc++.h>
using namespace std;
char stk[100];
int top;
class my_stack
{
public:
    void push(char item)
    {
        top = top + 1;
        stk[top] = item;
    }
    void pop()
    {
        top = top - 1;
    }
    bool empty()
    {
        if (top == 0)
            return 1;
        else
            return 0;
    }
    char topp()
    {
        return stk[top];
    }
};
int precedence(char op)
{
    switch (op)
    {
    case '+':
    case '-':
        return 1;
    case '*':
    case '/':
        return 2;
    case '^':
        return 2;
    default:
        return -1;
    }
}
int main()
{
    my_stack st;
    string s;
    cin >> s;
    s.push_back(')');

    st.push('(');
    vector<char> p;
    int i = 0;
    while (!st.empty())
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            p.push_back(s[i]);

        else if (s[i] == '(')
            st.push(s[i]);
        else if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' ||s[i] == '^'||s[i]=='~')
        {
            while (st.topp() != '(')
            {
                if (precedence(st.topp()) >= precedence(s[i]))
                {
                    p.push_back(st.topp());
                    st.pop();
                }
            }
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            while (st.topp() != '(')
            {
                p.push_back(st.topp());
                st.pop();
            }
            st.pop();
        }
        i++;
    }
    for (int k = 0; k < p.size(); k++)
        cout << p[k];
}
