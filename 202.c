bool isHappy(int n) {
    int sum;
    int r;
    while(n != 1)
    {
        sum = 0;
        while(n)
        {
            r = n % 10;
            n /= 10;
            sum += r * r;
        }
        if(sum > 1 && sum < 10)
            return false;
        n = sum;
    }
    return true;
}