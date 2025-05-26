char* licenseKeyFormatting(char* s, int k) {
    int i=0,j=0;
    while(s[i]!='\0'){
        if(s[i]!='-'){
            s[j++]=s[i];
        }
        i++;
    }
    s[j]='\0';
    int fim=j-1;
    i=0;
    while(s[i]!='\0'){
        if(s[i]>='a' && s[i]<='z'){
            s[i]=s[i]-32;
        }
        i++;
    }
    int sep=(i-1)/k;
    int total=sep+i+1;
    char* nv=(char*)malloc(total*sizeof(char));
    if(!nv) return NULL;
    nv[total-1]='\0';
    j=0;
    int t=0;
    int count=0;
    int pos=total-2;
    for(int i=fim;i>=0;i--){
        nv[pos--]=s[i];
        count++;
        if(count==k && i !=0){
            nv[pos--]='-';
            count=0;
        }
    }
    if(pos!=-1){
        for(i=0;nv[fim+1+i]!='\0';i++){
            nv[i]=nv[pos+1+i];
        }
        nv[t]='\0';
    }
    return nv;
}