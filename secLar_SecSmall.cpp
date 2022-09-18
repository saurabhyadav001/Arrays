#include<bits/stdc++.h>
using namespace std;
int Element(vector<int> & arr , int size){
    sort(arr.begin(), arr.end());
    cout<<"second smallest element is : "<<arr[1];
    cout<<"second largest element is: "<<arr[arr.size()-2];   //TC: NlogN;
}
int main(){
    vector<int> arr = {32,43,13,53,5,222};
    int size = sizeof(arr) / sizeof(arr[0]);
    Element(arr, size);

return 0;
}