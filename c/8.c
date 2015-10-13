int myAtoi(char* str) {
    long int ret = 0;
    int sign = 1;
    int num, len, i = 0;
    len = strlen(str);
    while(str[i] == ' ')
        i++;
    if(str[i] == '+' || str[i] == '-')
    {
        sign = str[i] == '+' ? 1 : -1;
        i++;
    }
    for(; i < len; i++)
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            num = str[i] - '0';
            ret = ret * 10 + sign * num;
            if(ret > INT_MAX)
                ret = INT_MAX;
            else if(ret < INT_MIN)
            ret = INT_MIN;
        }
        else
            break;
    }
    return ret;
}