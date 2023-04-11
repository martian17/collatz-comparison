const calculateCollatz = function(n){
    let cnt = 0;
    while(n !== 1){
        cnt++;
        const rem0_flg = (n&1)-1;
        n = ((n+n+n+1)&~rem0_flg)|((n>>>1)&rem0_flg);
    }
    return cnt;
}

const res = [];

for(let i = 2; i < 1e+7; i++){
    res.push(calculateCollatz(i));
}

console.log(res);
