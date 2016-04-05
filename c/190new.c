uint32_t reverseBits(uint32_t n) {
    uint32_t m = 0;
    int i;
    for(i = 0; i < 32; i++){
        m <<= 1;
        m |= n & 1;
        n >>= 1;
    }
    return m;
}//  8ms




uint32_t reverseBits(uint32_t n) {
    int bit[32] = {0};
    int i = 0;
    uint32_t ret = 0;
    while(n != 0){
        if(n & 1) bit[i] = 1;
        n >>= 1;
        i++;
    }
    for(i = 0; i < 32; i++){
        ret <<= 1;
        if(bit[i]) ret += bit[i];
    }
    return ret;
}//  4ms
