int titleToNumber(char* s) {
    int ch, i, res = 0;
    int len = strlen(s);
    for(i = len - 1; i >= 0; i--){
        ch = toupper(s[i]) - 64;
        res += ch * pow(26, len - i - 1);
    }
    return res;
}