#include <stdlib.h>
#include <stdio.h>
#include "sort_times.h"

int main(){
    int range;

    printf("Digite a quantidade de números a serem ordenados: ");
    scanf("%d", &range);

    printf("1 - Quick sort %lld ms\n", quicksort_time(range));
    printf("2 - Merge sort %lld ms\n", mergesort_time(range));
    printf("3 - Insertion sort %lld ms\n", insertionsort_time(range));
    printf("4 - Bublle sort %lld ms\n", bublesort_time(range));

    return 0;
}
