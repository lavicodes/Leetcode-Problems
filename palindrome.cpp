// https://leetcode.com/problems/palindrome-number/ 
class Solution {
public:
    bool isPalindrome(int x) {
      unsigned long long int r,m=0,k;
      k=x;
      if(x<0)
          return false;
      else
      {
       while(x!=0)
      {
          r=x%10;
          m=m*10+r;
          x=x/10;
      }
        if(m==k)
            return true;
        else
            return false;
      }
    }
};
