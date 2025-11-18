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

        // Build frequency map for s1
        for (char ch : s1) {
            count1[ch - 'a']++;
        }

        // Initialize the first window in s2
        for (int i = 0; i < len1; ++i) {
            count2[s2[i] - 'a']++;
        }

        // Check first window
        if (areEqual(count1, count2)) return true;

        // Slide the window across s2
        for (int i = len1; i < len2; ++i) {
            count2[s2[i] - 'a']++;                     // Add new character
            count2[s2[i - len1] - 'a']--;              // Remove old character
            if (areEqual(count1, count2)) return true; // Check updated window
        }

        return false; // No permutation found
    }
}; 