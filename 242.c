int cmp(const void* a, const void *b){
    return *(char*)a - *(char*)b;
}
bool isAnagram(char* s, char* t) {
    int slen, tlen;
    char *p, *q;
    slen = strlen(s);
    tlen = strlen(t);
    if(slen != tlen)
        return false;
    qsort(s, slen, sizeof(char), cmp);
    qsort(t, tlen, sizeof(char), cmp);
    p = s;
    q = t;
    while(*p && *q){
        if(*p == *q){
            p++;
            q++;
        }
        else
            return false;
    }
    return true;
}