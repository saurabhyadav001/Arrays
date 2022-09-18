#include<bits/stdc++.h>
using namespace std;
void swap(int arr[], int a, int b, int k){
    for(int i=0 ;i<k; i++){
        int temp = arr[a+i];
        arr[a+i] = arr[b+i];
        arr[b+i] = temp;
    }
}
void Swap(int arr[], int n , int k){
    if(k==0 || k==n)
    return;
    if(k == n-k){
        swap(arr, 0, n-k, k);
        return;
    }
    else if(k < n-k){
        swap(arr, 0, n-k, k);
        Swap(arr,k,n-k);
    }
    else{
        swap(arr,0,k,n-k);
        Swap(arr+n-k, 2*k-n, k);
    }
}
int main(){
    int arr[] = {32,53,53,75,43,21,3};
    int n = 7;
    int k=2;
    Swap(arr, k, n);
    cout<<"rotated array is"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

return 0;
}