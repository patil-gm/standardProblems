//  Given a string s, find the length of the longest substring without repeating characters.

int lengthOfLongestSubstring(string s) {
        int left = 0;
        int right = 0;
        int maxlen = 0;
        if(s.length()==0) return 0;
        if(s.length() == 1) return 1;
        while(right < s.length() - 1 && left <= right) {
            int ptr = left;
            while(ptr <= right) {
                if(s[ptr] == s[right+1]) {
                    left = ptr + 1;
                }
                ptr += 1;
            }
            right += 1;
            if(right-left + 1 > maxlen) {
                maxlen = right - left + 1;
            }
        }
        return maxlen;
    }
