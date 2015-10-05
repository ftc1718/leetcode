int lengthOfLastWord(char* s) {
    int len = strlen(s);
    int i;
    while(s[len - 1] == ' ')
        len--;
    for(i = len - 1; i >= 0 && s[i] != ' '; i--)
        continue;
    return len - i - 1;
}