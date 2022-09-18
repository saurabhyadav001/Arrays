#include<bits/stdc++.h>
using namespace std;
int e_qui(int arr[], int size){
    int sum=0;
    int leftsum =0;
    for(int i=0; i<size; i++){
      sum = sum+arr[i];
    }
    for(int i=0; i<size; i++){
        sum = sum-arr[i];
    if(leftsum == sum)
        return i;
    leftsum = leftsum+arr[i];
    }
    return -1;
}
int main(){
    int arr[] = {-7,1,5,2,-4,3,0};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<e_qui(arr, size);

return 0;
}