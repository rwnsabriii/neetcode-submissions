
class Solution {
public:
    bool isPalindrome(string s) {
        int len = s.length();
        vector<char> c;

        for (int i = 0; i < len; i++) {
            if (isalnum(s[i])) {
                s[i] = toupper(s[i]);
                c.push_back(s[i]);
            }
        }

        vector<char> c2;

        int n = c.size();

        for (int i = 0; i < n; i++) {
            c2.push_back(c[i]);
        }

        reverse(c2.begin(), c2.end());

        for (int i = 0; i < n; i++) {
            if (c2[i] != c[i]) {
                return false;
            }
        }

        return true;
    }
};
