#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
        cin >> array[i];
    int kye;
    cin >> kye;
    cout << binariSearch(array, n, kye) << endl;
}