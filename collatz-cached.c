#include <stdio.h>
#include <stdlib.h>

typedef unsigned int uint;

uint collatz(uint n0, uint* cache){
    uint n = n0;
    uint cnt = 0;
    while(n != 1){
        if(n < n0)return cnt+cache[n];
        cnt++;
        if(n&1){
            n = 3*n+1;
        }else{
            n >>= 1;
        }
    }
    return cnt;
}

int main(int argc, char** argv){
    uint limit = atoi(argv[1]);
    uint* result = malloc(limit*sizeof(uint));
    for(uint i = 2; i < limit; i++){
        result[i] = collatz(i,result);
        //printf("%u\n",result[i]);
    }
    printf("%u\n",result[limit-1]);
}


