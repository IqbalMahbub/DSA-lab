#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void towerOfHanoi(int n, char from, char to, char aux)
{
    if (n == 0)
        return;
    towerOfHanoi(n - 1, from, aux, to);
    cout << from << "---" << to << "   ";
    towerOfHanoi(n - 1, aux, to, from);
}

int main()
{
    int n;
    cin >> n;
    towerOfHanoi(n, 'A', 'C', 'B');
}