#include<bits/stdc++.h>
using namespace std;
int kadane(int arr[], int size){
    int max_till = arr[0];
    int curr_max = arr[0];
    for(int i=1; i<size; i++){
        curr_max = max(arr[i], curr_max+arr[i]);
        max_till = max(max_till, curr_max);
    }
    return max_till;
}
int main(){
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int max_sum = kadane(arr, size);
    cout<<max_sum<<endl;

return 0;
}