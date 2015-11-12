void reverse(char *s, int len)
{
    int first = 0;
    int last = len;
    while(first != last && first != --last)
    {
        char tmp = s[first];
        s[first++] = s[last];
        s[last] = tmp;
    }
}
void delSpace(char *s)
{
    int cnt = 0;
    int space = 1;
    int len = strlen(s);
    int i;
    for(i = 0; i < len; i++)
    {
        if(s[i] != ' ')
        {
            s[cnt++] = s[i];
            space = 0;
        }
        else
        {
            if(!space)
            {
                s[cnt++] = s[i];
                space = 1;
            }
        }
    }
    if(cnt >= 1 && s[cnt - 1] == ' ')
        s[cnt - 1] = '\0';
    else
        s[cnt] = '\0';
}
void reverseWords(char *s) {
    delSpace(s);
    int len = strlen(s);
    reverse(s, len);
    int i = 0;
    int pre = 0;
    while(i <= len)
    {
        if(s[i] == ' ' || s[i] == '\0')
        {
            reverse(s + pre, i - pre);
            pre = i + 1;
        }
        i++;
    }
}