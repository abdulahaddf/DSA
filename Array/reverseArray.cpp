#include <iostream>
using namespace std;


int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Original Array is: ";
    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    };
    cout<<endl;
    cout<<"Reversed Array is: ";
    for(int i = n-1; i>=0; i--){
        cout<<arr[i]<<" ";
    };
}





// int main(){
//     int arr[] = {1,2,3,4,5};
//     int reverse[]={};
//     int j = 0;
//     for(int i = 5; i <= 5; i--){
//         reverse[j] = arr[i];
//         j++;
//     }
// cout<<"Reversed Array is: ";
// for(int i =0; i<5; i++){
//     cout<<reverse[i]<<" ";
// };
// }

// int main(){
//     int arr[] = {1,2,3,4,5};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     cout<<"Original Array is: ";
//     for(int i =0; i<n; i++){
//         cout<<arr[i]<<" ";
//     };
//     cout<<endl;
//     cout<<"Reversed Array is: ";
//     for(int i = n-1; i>=0; i--){
//         cout<<arr[i]<<" ";
//     };
// }
