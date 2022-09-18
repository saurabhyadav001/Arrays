#include<bits/stdc++.h>
using namespace std;
void median(int arr[], int n){
    sort(arr, arr+n);
    if(n%2==0){
        int ind1 = (n/2)-1;
        int ind2 = (n/2);
        cout<<arr[ind1] + arr[ind2];
    }
    else{
        cout<<arr[(n/2)];
    }
}
int main(){
    int arr[] = {21,4,3,2,5,9};
    int n = 6;
    median(arr,n);

return 0;
}