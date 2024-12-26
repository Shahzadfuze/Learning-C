#include <stdio.h>
#include <cstdlib>


int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
  int* final = (int*)malloc(sizeof(int) * 2);
      

  for(int i = 0; i < numsSize; i++){
    for(int j = i+1; j <numsSize; j++){
      if(nums[i]+nums[j] == target){
	final[0] = i;
	final[1] = j;
	*returnSize =2;
	return final;
      }
      
    }
  }
  free(final);
  *returnSize = 0;
  return NULL;
}




int main(int argc, char** argv){

  int fuze[] = {2,7,11,15};
  int f[2];
  int target = 9;
  int returnSize;
  int* result = twoSum(fuze, 4, target, &returnSize);
  if (result != NULL && returnSize == 2) {
        printf("Indices: [%d, %d]\n", result[0], result[1]);
        free(result); // Free allocated memory after use
    } else {
        printf("No solution found.\n");
  }
  return 0;
}
