#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define SQ(a) a *a

#include <bits/stdc++.h>
using namespace std;
int mat[4][4];
void display(int arr[][m]){
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++)
             cout<<arr[i][j]<<" ";
             cout<<endl;
    }
}

//void pathMatrix()
int main(){

    
     for(int i=0;i<m;i++)
        for(int j=0;j<m;j++)
            cin>>mat[i][j];

    display(mat);


}