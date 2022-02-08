int findFinalValue(int* nums, int numsSize, int original){
    int count=1,time=1;
    while(count==1){
        count=0;
        if(time>1) original*=2; 
        for(int i=0;i<numsSize;i++){
            if(*(nums+i)==original){
                count++; 
                break;
            }
        }
        time++;
    }
    return original;
}