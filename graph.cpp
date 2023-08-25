#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define SQ(a) a *a

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int mat[n][n];
    int mat1[n][n];
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    {
        cin>>mat[i][j];
       // mat1[i][j]=mat[i][j];
    }
    int w[n][n][n];
    int rslt[n][n];
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
        w[0][i][j]=mat[i][j];
    for(int p=1;p<n;p++)
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    {
         rslt[i][j]=0;
     for(int k=0;k<n;k++)
    {
        rslt[i][j] += mat[i][k] * w[0][k][j];  
    } 
     w[p][i][j]=rslt[i][j];
     mat[i][j]=rslt[i][j];   
    }

    for(int p=0;p<n;p++){
         for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        {
            cout<<w[p][i][j]<<"  ";
        }
        cout<<endl;
    }
    cout<<endl;
    }
   
    

}