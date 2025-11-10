// function reverseString(s) {
//     let arr = s.split(""); // convert string to array of chars
//     let left = 0, right = arr.length - 1;

//     while(left < right){
//         console.log(left);
//         // swap charactersj
//         [arr[left], arr[right]] = [arr[right], arr[left]];
//         left++;
//         right--;
//     }

//     return arr.join(""); // convert back to string
// }

// console.log(reverseString("hello"));  // "olleh"
// console.log(reverseString("chatgptzaza")); // "tpgta hc"
// // 




function maxSubArray(nums){
    let currentSum = nums[0]
    let maxSum = nums[0]
for (let i = 1; i< nums.length; i++){
    currentSum = Math.max(nums[i], currentSum + nums[i]);
    maxSum = Math.max(maxSum, currentSum);
}
return maxSum;


}

console.log(maxSubArray([-2,1,-3,4,-1,2,1,-5,4])); // 6
console.log(maxSubArray([1,5,6,6,7,8,9])); // 1
console.log(maxSubArray([5,4,-1,7,8])); // 23