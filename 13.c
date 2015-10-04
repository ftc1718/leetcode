int romanToInt(char* s) {
    int i, len, cur, pre, num;
    len = strlen(s);
    switch(s[len - 1])
    {
        case 'I': cur = 1; break;
        case 'V': cur = 5; break;
        case 'X': cur = 10; break;
        case 'L': cur = 50; break;
        case 'C': cur = 100; break;
        case 'D': cur = 500; break;
        case 'M': cur = 1000; break;
    }
    num = cur;
    for(i = len - 2; i >= 0; i--)
    {
        switch(s[i])
        {
            case 'I': pre = 1; break;
            case 'V': pre = 5; break;
            case 'X': pre = 10; break;
            case 'L': pre = 50; break; 
            case 'C': pre = 100; break;
            case 'D': pre = 500; break;
            case 'M': pre = 1000; break;
        }    
        if(pre < cur)
            num -= pre;
        else
            num += pre;
        cur = pre;
    }
    return num;
}