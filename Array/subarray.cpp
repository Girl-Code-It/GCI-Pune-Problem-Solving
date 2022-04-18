#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int arr[6]={3,7,3,7,9,6},i,j;
    for(i=0;i<5;i++){
        for(j=0; j<5;j++){
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }
    //Brute Force Approach:
    int maxsum2=INT_MIN;
    for(i=0;i<5;i++){
        for(j=0; j<5;j++){
            int sum=0;
            for(int k=i;k<j;k++){
                sum+=arr[k];
            }
            maxsum2=max(maxsum2,sum);
        }
    }
    cout<<"Max Sum is:"<<maxsum2<<endl;

    //Cumulative Sum Approach:
    int cumsum[6];
    cumsum[0]=0;
    for(i=1;i<6;i++){
        cumsum[i]=cumsum[i-1]+arr[i-1];
    }
    int maxsum=INT_MIN;
    for(i=0;i<=5;i++){
        int sum2=0;
        maxsum=max(maxsum,cumsum[i]);
        for(j=1;j<=i;i++){
            sum2=cumsum[i]-cumsum[j-1];
            maxsum=max(maxsum,sum2);
        }
    }

    return 0;
}