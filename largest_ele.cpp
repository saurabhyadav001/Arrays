#include<bits/stdc++.h>
using namespace std;
int sortArr(vector<int> & arr){
    sort(arr.begin(), arr.end());
    return arr[arr.size()-1];
}
int main(){
    vector<int> arr = {32,43,53,21,2};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<sortArr(arr);

return 0;
}