#include<bits/stdc++.h>
using namespace std;
void reverse(char arr[], int n, char b[]){
    int i=0;
    while(i<n){
        b[i]=arr[n-i-1]; //0 6, 1 5, 2 4, 3 3, 4 2, 5 1, 6 0
        i++;
    }
    b[i]='\0';
}
bool palindrome(char arr[], int n){
    char b[n];
    reverse(arr,n,b);
    int i=0;
    while(i<n){
        if(b[i]!=arr[i]){
            return 0;
        }
        i++;
    }
    return 1;
}
int main(){
    int n, i;
    cout<<"Enter the size of your character array:";
    cin>>n;
    char arr[n];
    cout<<"Enter the elements of your array:"<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Your array is:"<<endl;
    for(i=0;i<n;i++){
        cout<<arr[i];
    }
    bool flag = palindrome(arr,n);
    if (flag){
        cout<<"Array is a Palindrome!"<<endl;
    }
    else{
        cout<<"Array is not a Palindrome!"<<endl;
    }
    return 0;
}