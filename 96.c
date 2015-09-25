// n node can creat h(n) = C(2n, n) / (n + 1)  unique BST
//C(2n, n) = (2n)! / (n! * (2n - n)!) = (2n * ... *(n+1)) / n!
int numTrees(int n) {
    long ans = 1;
    int i;
    for(i = 1; i <= n; i++)
    {
        ans = ans * (i + n) / i;
//        ans *= (i + n) / i; the division cut the answer off
    }
    return ans / i;
}