#include<bits/stdc++.h>
using namespace std;
void findsize(int arr[]){
    cout<<sizeof(arr)<<endl;
}
void findsize2(int (&arr)[10]){
    cout<<sizeof(arr)<<endl;
}
template <size_t n>
void findsize3(int (&arr)[n]){
    cout<<sizeof(int)*n<<endl;
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int a[10];
    cout<<sizeof(a)<<endl;
    findsize(a);
    cout<<endl;
    findsize2(a);
    cout<<endl;
    findsize3(a);
    return 0;
}