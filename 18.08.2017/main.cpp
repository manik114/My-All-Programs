#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int* solve(int a0, int a1, int a2, int b0, int b1, int b2, int *result_size){
    // Complete this function
    result_size[0]=0;
    result_size[1]=0;
    if(a0>b0) result_size[0]++;
    else if(a0<b0) result_size[1]++;
    if(a1>b1) result_size[0]++;
    else if(a1<b1) result_size[1]++;
    if(a2>b2) result_size[0]++;
    else if(a2<b2) result_size[1]++;
    return result_size;
}


int main() {
    int a0;
    int a1;
    int a2;
    scanf("%d %d %d", &a0, &a1, &a2);
    int b0;
    int b1;
    int b2;
    scanf("%d %d %d", &b0, &b1, &b2);
    int result_size;
    int* result = solve(a0, a1, a2, b0, b1, b2, &result_size);
    for(int result_i = 0; result_i < 2; result_i++) {
        if(result_i) {
            printf(" ");
        }
        printf("%d", result[result_i]);
    }
    puts("");


    return 0;
}
