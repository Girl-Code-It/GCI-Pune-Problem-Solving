#include<bits/stdc++.h>
using namespace std;

void swap(int *m, int *n){
    int temp = *m;
    *m = *n;
    *n = temp; 
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int a,b;
    cin>>a>>b;
    cout<<"a = "<<a;
    cout<<"\nb = "<<b;
    swap(&a,&b);
    cout<<endl<<"After swapping:";
    cout<<"\n\na = "<<a;
    cout<<"\nb = "<<b;
}