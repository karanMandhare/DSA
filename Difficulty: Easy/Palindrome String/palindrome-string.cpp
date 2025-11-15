class Solution {
  public:
    bool isPalindrome(string& s) {
      int start=0;
      int e=s.size()-1;
      while(start<=e){
          if(s[start]!=s[e]){
              return false;
          }
          start++;
              e--;
    }
    return true;
}
        
    };