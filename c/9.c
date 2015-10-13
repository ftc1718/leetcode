bool isPalindrome(int x) {
    int m = 0;
    int tmp = x;
    if(x < 0)
        return false;
    while(x)
    {
        m += x % 10;
        x /= 10;
        if(x)
            m *= 10;
    }
    if(m == tmp)
        return true;
    else
        return false;
}