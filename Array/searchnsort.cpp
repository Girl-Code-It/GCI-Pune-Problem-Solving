#include<bits/stdc++.h>
using namespace std;
int linearsearch(int arr[],int n, int key){
    int i,pos;
    for(i=0;i<n;i++){
        if(arr[i]==key){
            return i+1;
        }
    }
    return -1;
}
int binarysearch(int arr[],int n, int key){
    int s = 0;
    int e = n-1;
    while(s<=e){
        int mid = (s+e)/2;
        if(key==arr[mid]){
            return mid+1;
        }
        else if(key>arr[mid]){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    return -1;
}
void selectionsort(int arr[],int n){
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
}
void bubblesort(int arr[], int n){
    int counter = 0,i;
    while(counter<n-1){
        for(i=0;i<n-counter-1;i++){
            if(arr[i]>arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        counter++;
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
}
void insertionsort(int arr[], int n){
    int i;
    for(i=1;i<n;i++){
        int current = arr[i];
        int j = i-1;
        while(arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
}
int main(){
    int n,i;
    char sort, search;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n],key;
    cout<<"Enter the elements of the array:"<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"To find a number in the array, enter it:"<<endl;
    cin>>key;
    cout<<"Which sorting technique do you want\nBubble-'B'\nInsertion-'I'\nSelection='S'?-";
    cin>>sort;
    if(sort=='B'){
        cout<<"This is bubble sort:"<<endl;
        bubblesort(arr,n);
    }
    else if(sort=='I'){
        cout<<"This is insertion sort:"<<endl;
        insertionsort(arr,n);
    }
    else if(sort=='S'){
        cout<<"This is selection sort:"<<endl;
        selectionsort(arr,n);
    }
    else{
        cout<<"Sorry! This option does not exist:"<<endl;
    }
    cout<<"\nSorting Process is completed, please tell your searching choice:";
    cin>>search;
    if(search=='L'){
        cout<<"This is linear search:"<<endl;
        cout<<linearsearch(arr,n,key)<<endl;
    }
    else if(search=='B'){
        cout<<"This is binary search:"<<endl;
        cout<<binarysearch(arr,n,key);
    
    }

    return 0;
}