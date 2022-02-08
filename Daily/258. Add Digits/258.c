int addDigits(int num){
    int temp,result;
    while(num/10!=0){
        temp=num;
        result=0;
        while(temp!=0){
            result+=temp%10;
            temp/=10;
        }
        num=result;
    }
    return num;
}
