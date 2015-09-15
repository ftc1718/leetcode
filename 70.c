/* you can climb the last stair by 1 step or 2 steps, so f(n) = f(n - 1)+ f(n - 2) */

/* int climbStairs(int n) {
    if(n == 1)
        return 1;
    else if(n == 2)
        return 2;
    else
        return climbStairs(n - 1) + climbStairs(n - 2);
}   out of time*/

int climbStairs(int n){
    int stairs = 1;
    int step1 = 0, step2 = 1;
    int ways;
    while(stairs <= n){
        ways = step1 + step2;
        step1 = step2;
        step2 = ways;
        stairs++;
    }
    return ways;
}