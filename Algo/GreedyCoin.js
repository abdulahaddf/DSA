function findMin(n) {
    
    // Traverse through all denomination
    const denomination = [1, 2, 5, 10];
    let count =0;
    for (let i = denomination.length - 1; i >= 0; i--) {
       
        // Find denominations
            count+= Math.floor(n/denomination[i]);
            n=n%denomination[i];
    }
    return count;
    
}
// Driver Code
const n = 39;
console.log(findMin(n));