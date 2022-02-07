char findTheDifference(char * s, char * t){
    char a[26]={0};
    int j;
    for(int i=0;*(s+i)!=NULL;i++){
        a[*(s+i)-97]++;
    }
    for(int i=0;*(t+i)!=NULL;i++){
        a[*(t+i)-97]++;
    }
    for( j=0;j<26;j++){
        if(a[j]%2==1) break;  
    }
    return j+97;
}