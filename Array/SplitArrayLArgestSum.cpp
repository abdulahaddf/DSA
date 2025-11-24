class Solution {
public:
    bool isPossible(vector<int>& arr,int n, int k,int mid){
        int countSum =0;
        int newArray =1;
        for(int i=0; i<n; i++){
            if(countSum + arr[i]<= mid){
                countSum += arr[i];
            }
            else{
               newArray ++;
               if(newArray > k || arr[i]> mid){
                return false;
               } 
               else{
                countSum = arr[i];
               }
            }
        }
        return true;
    }


    int splitArray(vector<int>& arr, int k) {
        int n = arr.size();
        int sum = 0;
        int start = 0;
        int ans =-1;
        for(int i = 0; i<n; i++){
            sum += arr[i];
            start = max(start, arr[i]); 
        }
        int end = sum;
        while(start <= end){
            int mid = start + (end-start)/2;
            if(isPossible(arr,n,k,mid)){
                ans = mid;
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        return ans;
    }
};