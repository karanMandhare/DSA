class Solution {
private:
   
    bool areEqual(int a[26], int b[26]) {
        for (int i = 0; i < 26; ++i) {
            if (a[i] != b[i]) return false;
        }
        return true;
    }

public:
    bool checkInclusion(string s1, string s2) {
        int len1 = s1.length(), len2 = s2.length();
        if (len1 > len2) return false; 

        int count1[26] = {0}, count2[26] = {0};

        for (char ch : s1) {
            count1[ch - 'a']++;
        }

   
        for (int i = 0; i < len1; ++i) {
            count2[s2[i] - 'a']++;
        }

        if (areEqual(count1, count2)) return true;

        for (int i = len1; i < len2; ++i) {
            count2[s2[i] - 'a']++;                     
            count2[s2[i - len1] - 'a']--;                      if (areEqual(count1, count2)) return true; 
        }

        return false; 
    }
}; 