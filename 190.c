uint32_t reverseBits(uint32_t n) {
    uint32_t ans = 0;
    uint32_t i;
    for(i = 1; i > 0; i <<= 1){
        ans <<= 1;
        if(n & 1)
            ans |= 1;
        n >>= 1;
    }
    return ans;
}