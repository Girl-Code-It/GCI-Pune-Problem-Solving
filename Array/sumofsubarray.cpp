#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, i, j;
    cout<<"Enter the size of an array:";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i ];
    }
    int s;
    cout<<"Enter the sum:";
    cin>>s;

    for(i=0;i<n;i++){
        int sum=0;
        for(j=i;j<n;j++){
            sum+=arr[j];
        }
        if(sum==s){
            cout<<(i+1)<<j;
        }
    }
    return 0;
}