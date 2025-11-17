class Solution {
private:
    bool valid(char ch) {
        // Return true if character is alphanumeric
        if ((ch >= 'a' && ch <= 'z') || 
            (ch >= 'A' && ch <= 'Z') || 
            (ch >= '0' && ch <= '9')) {
            return true;
        }
        return false;
    }

    char tolowercase(char ch) {
        // Convert uppercase to lowercase
        if (ch >= 'A' && ch <= 'Z') {
            return ch - 'A' + 'a';
        }
        return ch;
    }

    bool checkpalindrome(string a) {
        int s = 0;
        int e = a.length() - 1;
        while (s <= e) {
            if (a[s] != a[e]) {
                return false;
            } else {
                s++;
                e--;
            }
        }
        return true;
    }

public:
    bool isPalindrome(string s) {
        string temp = "";
        for (int j = 0; j < s.length(); j++) {
            if (valid(s[j])) {
                temp.push_back(tolowercase(s[j]));
            }
        }
        return checkpalindrome(temp);
    }
};