// //add element at the beginning!
// #include<bits/stdc++.h>
// using namespace std;
// void insert_val_beg(int arr[], int n, int value){
//       for(int i=n-1; i>=0; i--){
//         arr[i+1] = arr[i];
//       }
//       arr[0]= value;
// }
// int main(){
//     int arr[8] = {1,2,3,4,5,6};
//     int n = 7;
//     int value = 40;
//     insert_val_beg(arr, n, value);
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }

// return 0;
// }



//************Ending********
// #include<bits/stdc++.h>
// using namespace std;
// void at_end(int arr[], int n, int val){
//     arr[n] = val;
// }
// int main(){
//     int arr[5]= {1,2,3,4,5};
//     int n=5;
//     int val = 8;
//     at_end(arr, n, val);
//     for(int i=0; i<=n; i++){
//         cout<<arr[i]<<" ";
//     }

// return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// void insert_posi(int arr[], int n, int val, int pos){
//     for(int i=n; i>=pos; i--){
//         arr[i] = arr[i-1];
//     }
//     arr[pos-1] = val;
// }
// int main(){
//     int arr[7]= {1,2,3,4,5};
//     int n = 6;
//     int pos = 2;
//     int val = 10;
//     insert_posi(arr,n ,val, pos);
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }

// return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int insert_at_end(int arr[], int n, int val, int pos){
      for(int i=n ; i>= pos; i--){
        arr[i] == arr[i-1];
      }
      arr[pos-1] = val;
    }

int main(){
    int arr[6]= {1,2,3,4,5};
    int n = 5;
    int pos = 2;
    int val = 10;
    insert_at_end(arr, n, val, pos);
    for(int i=0; i<=n; i++){
        cout<<arr[i]<<" ";
    }

return 0;
}