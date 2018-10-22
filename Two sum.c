/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target) {
 int i,j,sum,k=0;
    int *b = malloc(sizeof(int) * 2);
    for(i=0;i<numsSize;i++)
    {
        for(j=0;j<numsSize;j++)
        {
            if(i!=j&&k==0)
            {
                if(nums[i]+nums[j]==target)
                {
                    b[0]=j;
                    b[1]=i;
                   break;
                }
            }
        }
    }
    return a;
}
