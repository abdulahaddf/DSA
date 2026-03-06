#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



vector<int> ThreeSum(vector<int> &arr,int target ){
    sort(arr.begin(), arr.end());
    int n = arr.size();
    // 15, 20, 30, 35, 60
    for (int i =0; i< n; i++){
        int left = i+1;
        int right = n-1;
        while(left < right){
            int currSum = arr[i] + arr[left] + arr[right];
            if(currSum == target){
                return {arr[i] , arr[left] , arr[right]};
            }
            else {
                if (target > currSum){
                    left++;
                }
                else right -- ;
            };
        };
    };
};




int main(){
vector<int> arr = {15, 20, 35, 60, 30};
int target = 125;

vector<int> result = ThreeSum(arr,target);

 if(!result.empty()) {
        cout << "Found: " << result[0] << ", " << result[1] << ", " << result[2] << endl;
    } else {
        cout << "No triplet found" << endl;
    }

}