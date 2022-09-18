#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {21,4,353,23,1,3};
    int size = arr.size();
    sort(arr.begin(), arr.end());
    for(int i=0; i<size/2; i++){
        cout<<arr[i]<<" ";
    }
    for(int i=size-1; i>size/2; i--){
        cout<<arr[i]<<" ";
    }
}