#define MAX_INT 2147483647
#define MIN_INT -2147483648
int reverse(int x) {
    long ret = 0;
    int sign = x >= 0 ? 1 : -1;
    x = abs(x);
    while(x > 0)
    {
        ret = ret * 10 + x % 10;
        if(ret > MAX_INT || sign * ret < MIN_INT)
            return 0;
        x /= 10;
        
    }
    return sign * ret;
    
}