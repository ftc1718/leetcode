class Solution {
public:
    bool isPalindrome(int x) {
        int reverseX = 0;
        int originX = x;
        while(x > 0){
            reverseX = reverseX * 10 + x % 10;
            x /= 10;
        }
        return reverseX == originX;
    }
};  //96ms





class Solution {
public:
    bool isPalindrome(int x) {
        int half = 0;
        int fast, slow;
        fast = slow = x;
        while(fast > 0){
            half = half * 10 + slow % 10;
            slow /= 10;
            fast /= 100;
        }
        return half == slow || half / 10 == slow;
    }
};  //92ms