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
    cout<<"\nEnter the number you are searching for:";
    cin>>f;
    bool flag = false;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(arr[i][j]==f){
                cout<<i+1<<j+1<<endl;
                flag=true;
            }
        }
    }
    if(flag){
        cout<<"Element is found!\n";
    }
    else{
        cout<<"Element not found!\n";
    }
    return 0;
}