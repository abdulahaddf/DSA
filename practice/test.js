

const arr = [15, 20, 35, 20, 27, 60, 32, 30];
let n = arr.length;
let sum = 0;

for(let i = 0; i < n; i++){
    for(let j = i+1; j < n; j++){
        for(let k = j+1; k < n; k++){
            let sum = arr[i] + arr[j] + arr[k];
    if(sum == 125){
        console.log("Three elements index are", i, j , k , "and their values are", arr[i], arr[j], arr[k]);
    };
  
}
}
}