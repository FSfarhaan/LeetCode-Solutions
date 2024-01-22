#include <stdio.h>
#include <stdlib.h>

int * sum(int * nums[]){

}
 
int main() {
    int * nums[] = {15, 7, 11, 2};
    int target = 9;
    int numsSize = 4;

    int * returnArray = (int *) malloc (2 * sizeof(int));
    

    for(int i = 0; i < numsSize; i++) {
        for(int j = 1; j < numsSize; j++) {
            if(nums[i] + nums[j] == target) {
                returnArray[++top] = i;
                returnArray[++top] = j;
            } 
        }
    }

    for (int k = 0; k < 2; k++) {
        printf("%d", returnArray[k]);
    }
    
    int * a = sum(&nums);
    return 0;
}