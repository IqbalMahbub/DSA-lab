#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define SQ(a) a *a
typedef long long ll;

#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int array[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(array[j+1]<array[j])
             swap(array[j],array[j+1]);
        }

    }
    for(int i=0;i<n;i++)
        cout<<array[i]<<" ";
}

int main()
{
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++)
        cin>>array[i];
    bubbleSort(array,n);
    int k=6;
    int arr[]={1,5,9,2,8,3};
    sort(arr,arr+k);
    for(int i=0;i<k;i++)
        cout<<arr[i];

}
