#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    int s = 0, e = n-1;
    for(int i=0; i<n; i++){
        int mid = s+e/2;
        if(key==arr[mid]){
            cout<<mid<<endl;
            return 0;
        }
        else if(key>arr[mid]){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
    }
    cout<<-1;
    return 0;

}