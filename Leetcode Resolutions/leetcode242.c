bool isAnagram(char* s, char* t) {
    int i=0;
    int *letras=(int*)malloc(26*sizeof(int));
    for(int i=0;i<26;i++){
        letras[i]=0;
    }
    for(i=0;s[i]!='\0';i++){
        letras[s[i]-'a']++;
    }
    for(i=0;t[i]!='\0';i++){
        letras[t[i]-'a']--;
    }
    for(i=0;i<26;i++){
        if(letras[i]!=0){
            free(letras);
            return false;
        }
    }
    free(letras);
    return true;
}