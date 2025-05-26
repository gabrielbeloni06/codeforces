int missingNumber(int* nums, int numsSize) {
    for(int x=0;x<=numsSize;x++){
        int count=0;
        for(int i=0;i<numsSize;i++){
            if(nums[i]==x){
                count=1;
            }
        }
        if(!count){
            return x;
        }
    }
    return -1;
}