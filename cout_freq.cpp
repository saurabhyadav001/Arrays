// #include<bits/stdc++.h>
// using namespace std;
// void frequency(int arr[], int size){
//     unordered_map<int, int> map;
//     for(int i=0; i<size; i++){
//         map[arr[i]]++;
//     }
//     for(auto x:map){
//         cout<<x.first<<" "<<x.second<<endl;
//     }
// }
// int main(){
//     int arr[] = {21,32,43,53,32,32,32};
//     int size = sizeof(arr)/ sizeof(arr[0]);
//     frequency(arr, size);

// return 0;
// }
#include<bits/stdc++.h>
using namespace std;
void frequency(int arr[], int size){
    
    map<int,int> mp;
    for(int i=0; i<size ;++i){
        mp[arr[i]]++;
    }
    for(auto x: mp){
        cout<<x.first<<" "<<x.second<<" "<<endl;
    }
}
int main(){ 
    int arr[] = {1,1,1,2,2,5,5,5,5,5,9};
    int size = sizeof(arr)/ sizeof(arr[0]);
    frequency(arr, size);

return 0;
}