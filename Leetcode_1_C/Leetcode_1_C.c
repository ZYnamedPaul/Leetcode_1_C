#include<stdio.h>
#include<stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
	int*result = malloc(2 * sizeof(int));
	for (int m = 0; m < numsSize; m++) {
		for (int n = m + 1; n < numsSize; n++) {
			if (nums[m] + nums[n] == target) {
				result[0] = m;
				result[1] = n;
				return result;
			}
		}
	}
	return NULL;
}

int main(void) {
	int numsSize, target;
	int*nums;
	int*returnSize = 2;
	scanf("%d", &numsSize);
	nums = (int*)malloc(numsSize * sizeof(int));
	if (nums != NULL) {
		printf("Input: nums = [");
		for (int i = 0; i < numsSize - 1; i++) {
			scanf("%d", &nums[i]);
			printf(",");
		}
		scanf("%d", &nums[numsSize - 1]);
		printf("], target = ");
		scanf("%d", &target);
	}
	int* Output = twoSum(nums, numsSize, target, returnSize);
	printf("Output: [%d,%d]", Output[0], Output[1]);
	free(nums);
	free(Output);
	return 0;
}