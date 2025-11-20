# include <iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n-1; i++){
        int minIndex = i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }
        }
        // Swap the found minimum element with the first element
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;

        // Printing the array after each pass
        cout<<"Array after pass "<<i+1<<": ";
        for(int k=0; k<n; k++){
            cout<<arr[k]<<" ";
        }
        cout<<endl;
        

    }

}