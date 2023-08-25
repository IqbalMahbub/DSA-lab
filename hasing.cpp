#include <bits/stdc++.h>
using namespace std;
int size,item;
void setvalue(int hash[])
{
    for(int i=0;i<size;i++)
            hash[i]=-1;
}
void display(int hash[]){
    for(int i=0;i<size;i++){
        if(hash[i]==-1)
            cout<<"None"<<" ";
        else
            cout<<hash[i]<<" ";  
    }

    cout<<endl;
}
void lenearProb(int hash[],int arr[],int n,int arr_size){
    setvalue(hash);
    int count=0;
    for(int i=0;i<arr_size;i++){
        int hash_value=arr[i]%size;
        if(hash[hash_value]==-1){
            hash[hash_value]=arr[i];
        }   
        else{
             if(count ==0){
                for(int j=hash_value+1; ;j++){
                    if(hash[j]==-1){
                      hash[j]=arr[i];
                      break;
                    }
                    if(j==size){
                       j=-1;
                       count=1;
                    }  
              }
            }
        }
    }

    display(hash);

    int v=n%size;
    for(int i=0;i<size;i++){
        int t=(n+i)%size;
        if(hash[t]==-1){
            cout<<"item doesn't exist"<<endl;
            break;
        }
        else if(hash[t]==n){
            cout<<"found at"<<t<<endl;
            break;
        }
        else
            continue;
    }
        


}

void Plas_3_Prob(int hash[],int arr[],int n,int arr_size){
      setvalue(hash);

    for(int i=0;i<arr_size;i++){
        int j=0;
        int count=0;
            while (count<size)
            {
                 int hash_value=(arr[i]+j)%size;
                if(hash[hash_value]==-1){
                   hash[hash_value]=arr[i];
                   break;
                } 
                j=j+3;
                if(j>=size){
                    j=j-size;
                    count++;
                }
                      
            }
              
        }
    
    display(hash);

    int v=n%size;
    for(int i=0;i<size;i=i+3){
        int t=(n+i)%size;
        if(hash[t]==-1){
            cout<<"item doesn't exist"<<endl;
            break;
        }
        else if(hash[t]==n){
            cout<<"found at"<<t<<endl;
            break;
        }
        else
            continue;
    }

}
 void QuadricProbvoid(int hash[],int arr[],int n,int arr_size){
      setvalue(hash);

    for(int i=0;i<arr_size;i++){
        int j=1;
        int count=0;
        if(hash[arr[i]%size]==-1){
                hash[arr[i]%size]=arr[i];
                continue;
        }
            while (count<size)
            {
                 int hash_value=(arr[i]+j)%size;
                if(hash[hash_value]==-1){
                   hash[hash_value]=arr[i];
                   break;
                }
                j=j+2;
                if(j>=size){
                    j=j-size;
                    count++;
                }
                      
            }
              
        }
    
    display(hash);

    int v=n%size;
     if(hash[v]==n){
        cout<<"found at"<<v<<endl;
        return;
     }           
    for(int i=1;i<size;i=i+2){
        int t=(n+i)%size;
        if(hash[t]==-1){
            cout<<"item doesn't exist"<<endl;
            break;
        }
        else if(hash[t]==n){
            cout<<"found at"<<t<<endl;
            break;
        }
        else
            continue;
    }

}

int main()
{
    int n;
    cin>>n>>size;
    int arr[n],hash[size];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Search the item"<<endl;
    int item;
    cin>>item;
  //  lenearProb(hash,arr,item,n);
   // Plas_3_Prob(hash,arr,item,n);
    QuadricProbvoid(hash,arr,item,n);

}
/*
9 11
54 26 93 17 77 31 44 55 20
*/