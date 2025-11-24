

class Solution {
  public:
  bool isPossible(vector<int> &arr, int m, int n,int mid){
    int studentCount =1;
    int pageSum =0;
    for(int i =0; i<n; i++){
        if(pageSum + arr[i]<= mid){
            pageSum += arr[i];
        }
        else{
            studentCount ++;
            if(studentCount> m || arr[i]>mid){
                return false;
            }
            else{
                pageSum = arr[i];
            }
        }
    }
    return true;
}

    int findPages(vector<int> &arr, int m) {
        int n = arr.size();
        int s=0; 
        int sum=0;
        if(n < m) return -1;
        for(int i= 0;i<n; i++){
            sum += arr[i];
        }
        int e = sum, ans =-1;
        int mid = s + (e-s)/2;
        while(s<=e){
            if(isPossible(arr,m,n,mid)){
                ans = mid;
                e=mid -1;
            }
            else{
                s= mid+1;
            }
            mid = s+(e-s)/2;
        }
        return ans;
        
        
    }
};