//Determine whether an integer is a palindrome. Do this without extra space.

class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0) return false;
        int y=0, z=x;
        while (x!=0)
        {
            y=y*10+x%10;
            x/=10;
        }
        if (y==z) 
            return true;
        else
            return false;
    }
};