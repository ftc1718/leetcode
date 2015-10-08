int strStr(char* haystack, char* needle) {
    int l1, l2;
    int i, j, tmp = 0;
    int flag = 1;
    l1 = strlen(haystack);
    l2 = strlen(needle);
    if(l1 < l2)
        return -1;
    for(i = 0, j = 0; i < l1 && j < l2; i++)
        if(haystack[i] != needle[j])
        {
            if(!flag)
            {
                i = tmp;
                flag = 1;
            }
            j = 0;
            
        }
        else
        {
            if(flag)
            {
                tmp = i; 
                flag = 0;
            }
            j++;
        }
    if(j == l2)
        return tmp;
    else
        return -1;
}