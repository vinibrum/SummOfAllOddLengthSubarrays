// Source : https://leetcode.com/problems/sum-of-all-odd-length-subarrays/
// Author : Vinícius Brum
// Date   : 31-01-2021

#include <stdio.h>

//Given an array of positive integers arr, calculate the sum of all possible odd-length subarrays.
/*
   Ex.: Input: [10,11,12]
        [10] = 10
        [11] = 11
        [12] = 12
        [10,11,12] = 10 + 11 + 12 = 33
        Total = 10 + 11 + 12 + 33 = 66
*/
int sumOddLengthSubarrays(int* arr, int arrSize){
    int i,j,subArrayLength,sumAux,total;
    sumAux = total = 0;

    for(i = 0; i < arrSize; i++){
        subArrayLength = 1;
        for(j = i; j < arrSize; j++){
            sumAux += arr[j];
            if(subArrayLength & 1)  total += sumAux;
            subArrayLength++;
        }
        sumAux = 0;
    }

    return total;
}

int main(){
    int positiveIntegers[] = {1,4,2,5,3};
    int positiveIntegers2[] = {1,2};
    int positiveIntegers3[] = {10,11,12};
    int sumSubarrays;

    sumSubarrays = sumOddLengthSubarrays(positiveIntegers, 5);
    printf("Sum of all odd-length subarrays of \"positiveIntegers\": %d\n", sumSubarrays);

    sumSubarrays = sumOddLengthSubarrays(positiveIntegers2, 2);
    printf("Sum of all odd-length subarrays of \"positiveIntegers2\": %d\n", sumSubarrays);

    sumSubarrays = sumOddLengthSubarrays(positiveIntegers3, 3);
    printf("Sum of all odd-length subarrays of \"positiveIntegers3\": %d\n", sumSubarrays);

    return 0;
}
