// #include<bits/stdc++.h>
// using namespace std;
// int find_rep(int arr[], int n){
//      for(int i=0; i<n; i++){
//         if(arr[i]==arr[i+1]){
//             cout<<arr[i]<<" ";
//         }
//      }
// }
// int main(){
//     int arr[] = {1,1,2,3,4,4,5,5};
//     int n = 8;
//     int ans = find_rep(arr,n);

// return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int rep_ele(vector<int> & vec, int size){
    for(int i=0; i<size; i++){
        // if(vec[i]= vec[i+1]) cout<<vec[i]<<" ";
        if(vec[i-1] != vec[i] && vec[i] != vec[i+1]) cout<<vec[i]<<" ";
       
    }
}
int main(){
    vector<int> vec = {1,2,2,3,3,4,4,5,6};
    int size = 9;
    int ans = rep_ele(vec, size);
}