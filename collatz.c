#include <stdio.h>
#include <stdlib.h>

typedef unsigned int uint;

uint collatz(uint n){
    uint cnt = 0;
    while(n != 1){
        cnt++;
        if(n&1){
            n = 3*n+1;
        }else{
            n >>= 1;
        }
    }
    return cnt;
}

int main(){
    uint limit = 10000000;
    //uint limit = 10;
    uint* result = malloc(limit*sizeof(uint));
    for(uint i = 2; i < limit; i++){
        result[i] = collatz(i);
        //printf("%u\n",result[i]);
    }
    printf("%u\n",result[limit-1]);
}


