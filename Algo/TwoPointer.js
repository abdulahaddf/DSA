let arr = [15, 20, 35, 60, 30];
let size = arr.length;
const target = 125;
let sortedArray = arr.sort((a, b) => a - b);

for (let i = 0; i < size; i++) {
    let left = i+1;
    let right = size -1;
    const currSum = arr[i] + arr[left] + arr[right];
    if(currSum == target){
        console.log("The elements are:", arr[i] , arr[left] , arr[right]);
    }
    else {
        if (currSum > target) right --;
        left++;
    }
    
}


