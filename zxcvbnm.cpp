#include<bits/stdc++.h>
using namespace std;
 int minimu(vector <long long int> a,int n){
        int sum=0;
            vector<long long int>::iterator i;
        for( i=a.begin()+2;i<a.end();i++)
        {
            sum=sum+*i;
        }
        return sum;
 }
 int maximu(vector <long long int> a,int n) {
    int sum=0;
        vector<long long int>::iterator i;
        for( i=a.begin();i<a.end()-1;i++)
        {
            sum=sum+*i;
        }
        return sum;
 }

void solve()
{
    int n,k;
    cin>>n;cin>>k;
    vector<long long int>a;
    for(int i=0;i<n;i++)
    {   long long int x;
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    int sum_min; int sum_max;
    while (k--)
    {
         sum_min=minimu(a,n);
         sum_max=maximu(a,n);
        if(sum_max>sum_min){
            a.pop_back();
        }
        else{
            reverse(a.begin(),a.end());
            a.pop_back();
            a.pop_back();
            reverse(a.begin(),a.end());
        }
    }
    if(sum_max>sum_min)
        cout<<sum_max<<endl;
        else
        cout<<sum_min<<endl;

}
int main()
{
    int t;
    while (t--)
    {
        solve();
    }

}
