// #include<bits/stdc++.h>
// using namespace std;
// int remove_dup(int arr[], int n){
//     int i=0;
//     for(int j=1; j<n; j++){
//         if(arr[i]!= arr[j]){
//             i++;
//             arr[i] = arr[j];
//         }
//     }
//     return i+1;
// }
// int main(){
//     int arr[] = {1,1,2,2,3,3,5,5,3,4,4};
//     int n=9;
//     sort(arr, arr+n);
//     int k = remove_dup(arr,n);
//     cout<<"duplicates are : ";
//     for(int i=0; i<k; i++){
//         cout<<arr[i]<<" ";
//     }

// return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int duplicates(int arr[], int size){
    int i=0;
    for(int j=1; j<size; j++){
        if(arr[i]!=arr[j]){
            i++;
            arr[i] = arr[j];
        }
    }
    return i+1;
}
int main(){
    int arr[] = {1,1,2,2,3,3,4,5,21,3};
    int size = sizeof(arr)/ sizeof(arr[0]);
    sort(arr, arr+size);
    int ans = duplicates(arr,size);
    cout<<"unique values are: "<<endl;
    for(int i=0; i<ans ; i++){
        cout<<arr[i]<<" ";
    }

return 0;
}