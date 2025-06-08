int myAtoi(char* s) {
    int i=0,neg=1;
    long extra=0;
    while(s[i]==' '){
        i++;
    }
    if(s[i]=='-' || s[i]=='+'){
        if(s[i]=='-'){
            neg=-1;
        }
        i++;
    }
    while(s[i]>='0' && s[i]<='9'){
        extra=extra*10+(s[i]-'0');
        if(neg * extra > INT_MAX) {
            return INT_MAX;
        } else if (neg * extra < INT_MIN) {
            return INT_MIN;
        }
        i++;
    }
    return (int)(neg*extra);
}