char* multiply(char* num1, char* num2) {
    
    if(*num1 == '0' || *num2 == '0'){
        return "0";
    }
    int la, lb;
    int i, j;
    la = strlen(num1);
    lb = strlen(num2);
    int *s = (int *)malloc(sizeof(int) * (la + lb));
    memset(s, 0, sizeof(int) * (la + lb));
    
    for(i = 0; i < la; i++){
        for(j = 0; j < lb; j++){
            s[i + j + 1] += (num1[i] - '0') * (num2[j] - '0');
        }
    }
    
    for(i = la + lb - 1; i >= 0; i--){
        if(s[i] >= 10){
            s[i - 1] += s[i] / 10;
            s[i] %= 10;
        }
    }
    
    char *ret = (char *) malloc(sizeof(char) * (la + lb + 1));
    i = 0;
    
    if(s[i] == 0){// only 1 bit pass
        i++;
    }
    for(j = 0; i < la + lb; i++, j++){
        ret[j] = s[i] + '0';
    }
    ret[j] = '\0';
    
    return ret;
}