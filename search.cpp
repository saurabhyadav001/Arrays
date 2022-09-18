#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6};
    int size = 6;
    int search = 4;
    int ans =-1;
    for(int i=0; i<size; i++){
        if(arr[i]==size) {
             ans = i;
             break;
        }
    }
    cout<<ans;
}