// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[] = {1,2,3,4,5};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int sum = 0;
//     cout<<accumulate(arr, arr+size, sum);

// return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    for(int i=0; i<=size; i++){
        sum = sum+i;
    }
    cout<<sum;

return 0;
}

