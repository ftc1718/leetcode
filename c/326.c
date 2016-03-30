bool isPowerOfThree(int n) {
    if(n == 0) return false;
    while(n % 3 == 0) n /= 3;
    
    if(n == 1) return true;
    else return false;
}//136ms


bool isPowerOfThree(int n) {
    if(n == 0) return false;
        
        while(n != 1){
            if(n % 3 != 0) return false;
            n /= 3;
        }
        return true;
}//124ms