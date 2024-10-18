class Solution {
public:
    bool isPalindrome(string s) {
        string result = "";
        for (char c : s) {
            if (isalnum(c)) {
                result += c;
            }
        }
        transform(result.begin(), result.end(), result.begin(), ::tolower);
        int ss = result.size();
        bool ans = true;
        for (int i = 0; i < ss / 2; i++) {
            if (result[i] != result[ss - i - 1]) {
                ans = false;
                break;
            }
        }
        return ans;
    }
};