#include<bits/stdc++.h>
using namespace std;

bool check(int num){
    int r=0,n=num,x=num;
    while(num>0){
        x%=10;
        r+=x*x*x;
        num/=10;
    }
    return n==r;
}
int main(){
    int p,q,s=0;
    cin>>p>>q;
    for(int i=p;i<q+1;i++){
        if(check(i)){
            s+=1;
        }
    }
    cout<<s;
    return 0;
}