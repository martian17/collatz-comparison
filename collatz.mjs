const calculateCollatz = function(n){
    let cnt = 0;
    while(n !== 1){
        cnt++;
        if(n&1){
            n = 3*n+1;
        }else{
            n >>>= 1;
        }
    }
    return cnt;
}

const res = [];

for(let i = 2; i < 1e+7; i++){
    res.push(calculateCollatz(i));
}

console.log(res);
