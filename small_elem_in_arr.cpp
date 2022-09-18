#include<bits/stdc++.h>
using namespace std;
int sortArr(vector<int> & vec){
    sort(vec.begin(), vec.end());
    return vec[0];
}
int main(){
    vector<int> vec= {43,23,12,1,59,3};
    int size = sizeof(vec)/sizeof(vec[0]); 
    cout<<sortArr(vec);

return 0;
}







// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[] = {47,2,43,112,3,48};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     sort(arr, arr+size);
//     for(int i=0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl<<arr[0];

// return 0;
// }