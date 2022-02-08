int countElements(int* nums, int numsSize){
    int max=*nums,min=*nums,count=0;
    for(int i=0;i<numsSize;i++){
        if(max<*(nums+i)){
            max=*(nums+i);
        }
        if(min>*(nums+i)){
            min=*(nums+i);
        }
    }
    for(int i=0;i<numsSize;i++){
           if(*(nums+i)<max&&*(nums+i)>min) count++; 
    }
    return count++;
}
