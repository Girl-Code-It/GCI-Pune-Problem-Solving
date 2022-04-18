#include<bits/stdc++.h>
using namespace std;
//While giving the size add +1, as null value also needs to be counted.
void maxlen(char arr[], int n){
    int i=0;
    int currlen=0;
    int maxlen=0;
    int st=0, maxst=0;
    while(i<n+1){
        if(arr[i] ==' ' || arr[i]=='\0'){
            if(currlen>maxlen){
                maxst = st;
                maxlen = currlen;
            }
            st = i+1;
            currlen = 0;
        }
        else{
            currlen++;
        }
        if(arr[i]=='\0'){
                break;
        }
        i++;
    }
    cout<<"\n"<<arr<<endl;
    cout<<maxlen<<endl;

    for(i=0;i<maxlen;i++){
        cout<<arr[maxst+i];
    }
    cout<<endl;
}
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
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int n, i, maxl;
    cout<<"Enter the size of your character array:";
    cin>>n;
    char arr[n+1];
    cout<<"Enter the elements of your array:"<<endl;
    cin.ignore();
    cin.getline(arr,n+1);
    cin.ignore();
    cout<<"Your array is:"<<endl;
    for(i=0;i<n;i++){
        cout<<arr[i];
    }
    bool flag = palindrome(arr,n);
    if (flag){
        cout<<"\nArray is a Palindrome!"<<endl;
    }
    else{
        cout<<"\nArray is not a Palindrome!"<<endl;
    }
    maxlen(arr, n);
    return 0;
}