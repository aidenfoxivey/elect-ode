class Solution {
public:
    bool isPalindrome(string s) {
        // Strip the string for non alphanumeric characters.
        string stripped;
        for (auto it = s.begin(); it != s.end(); ++it) {
            if (isalnum(*it))
                stripped += tolower(*it);
        }

        std::cout << stripped << std::endl;

        for (int i = 0; i < stripped.size() / 2; i++) {
            if (stripped[i] != stripped[stripped.size()-i-1]) {
                return false;
            }
        }

        return true;
    }
};
