//link: https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/description/

#include <stdio.h>
#include <stdbool.h>

int numberOfSteps(int num) {
    int contador = 0;
    while(num != 0){
        if(num % 2 == 0) num = num>>1;
        else num--;
        
        contador++;
    }
    
    return contador;
}
