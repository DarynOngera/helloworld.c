#include <stdlib.h>
#include <stdio.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
  *returnSize = 2;
  int* result = malloc(2 * sizeof(int));

  for (int i = 0; i < numsSize; i++)
    for (int j = i + 1; j < numsSize; j++)
       if (nums[i] + nums[j] == target) {
        result[0] = i;
        result[1] = j;

        return result;
      }
  return result;
}

int main() {
  int nums[] = {2,3,4,5,6,7,8,9};
  int target = 9;
  int numsSize = 8;
  int returnSize;

  int *result = twoSum(nums, numsSize, target, &returnSize);

  printf("indices: [%d, %d]", result[0], result[1]);

  free(result);
  return 0;

}
