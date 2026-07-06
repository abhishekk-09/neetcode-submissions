class Solution {
public:
    int characterReplacement(string s, int k) {

        int l = 0;
        int max_len = 0;
        vector<int> freq(26, 0);

        for (int r = 0; r < s.size(); r++) {

            freq[s[r] - 'A']++;

            while ((r - l + 1) - *max_element(freq.begin(), freq.end()) > k) {
                freq[s[l] - 'A']--;
                l++;
            }

            max_len = max(max_len, r - l + 1);
        }

        return max_len;
    }
};