#include <bits/stdc++.h>
using namespace std;
int tp = 0;
double stk[1000];
class my_stk
{
public:
    void push(double item)
    {
        tp = tp + 1;
        stk[tp] = item;
    }
    void pop()
    {
        tp = tp - 1;
    }
    double top()
    {
        return stk[tp];
    }
};
void display()
{
    for (int i = 0; i < tp; i++)
        cout << stk[i] << endl;
}
int main()
{
    my_stk st; // declar object

    // insert in stack
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int item;
        cin >> item;
        st.push(item);
    }
    display();
}