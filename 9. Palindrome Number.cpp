class Solution {
public:
    bool isPalindrome(int x) {
 stringstream ss ;
 ss<<x;
 string s ;
 ss>>s;
 string s1 = s;
 reverse(s.begin(),s.end());
 if(s1==s) return true ;
 else return false ;
    }
};
