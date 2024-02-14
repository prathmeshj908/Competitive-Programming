int* sortArrayByParityII(int* nums, int numsSize, int* returnSize) {
    int* A=(int*)malloc(numsSize*sizeof(int));
    int* B=(int*)malloc(numsSize*sizeof(int));
    int* ans=(int*)malloc(numsSize*sizeof(int));
    int a=0;
    int b=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]%2==0){
            A[a]=nums[i];
            a+=1;
        }
        else{
            B[b]=nums[i];
            b+=1;
        }
    }
    for(int i=0;i<numsSize/2;i++){
        ans[2*i]=A[i];
        ans[2*i+1]=B[i];
    }
    *returnSize=numsSize;
    return ans;
}