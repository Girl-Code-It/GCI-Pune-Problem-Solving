#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,i,j,f;
    cout<<"Enter the size of the array:";
    cin>>n>>m;
    int arr[n][m];
    cout<<"Enter the elements of the array:"<<endl;
    for(i=0;i<n;i++){
        cout<<"\nEnter row "<<i+1<<"-";
        for(j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int row_start=0, row_end=n-1, col_start=0, col_end=m-1;
    while(row_start<=row_end && col_start<=col_end){
        for(i=col_start;i<=col_end;i++){
            cout<<arr[row_start][i]<<"\t";
        }
        row_start+=1;
        for(i=row_start;i<=row_end;i++){
            cout<<arr[i][col_end]<<"\t";
        }
        col_end-=1;
        for(i=col_end;i>=col_start;i--){
            cout<<arr[row_end][i]<<"\t";
        }
        row_end-=1;
        for(i=row_end;i>=row_start;i--){
            cout<<arr[i][col_start]<<"\t";
        }
        col_start+=1;
    }
    return 0;
}