bool search(vector<int>& nums, int target) {
    int start = 0, end = nums.size() - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (nums[mid] == target) 
            return true;

        // Handle duplicates — key for LeetCode 81
        if (nums[start] == nums[mid] && nums[end] == nums[mid]) {
            start++;
            end--;
            continue;
        }

        // Left half is sorted
        if (nums[start] <= nums[mid]) {
            if (target >= nums[start] && target < nums[mid])
                end = mid - 1;
            else
                start = mid + 1;
        } 
        // Right half is sorted
        else {
            if (target > nums[mid] && target <= nums[end])
                start = mid + 1;
            else
                end = mid - 1;
        }
    }

    return false;
}




class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start=0, end = nums.size()-1,mid;
        while(start <= end){
            mid = start +(end-start)/2;
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] >= nums[0]){
                if(nums[start] <= target && nums[mid] >= target)
                end =mid-1;
                else
                start = mid+1;
                }
                
            else {
               if(nums[mid] <= target && nums[end] >= target){
                start = mid +1;
                 }
                else
                end = mid -1; 
            }
            
          
        }
        return -1;
    }
};