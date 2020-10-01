class Solution {
public:
    int strStr(string haystack, string needle) {
        string subhaystack;
        char tmp;
        int result;
        if(needle.length()==0)
            return 0;
        for(int i=0;i<haystack.length();i++)
        {
            tmp = haystack.at(i);
            if(needle.at(0)==tmp && haystack.length()-i>=needle.length())
            {
                if(memcmp(&haystack[i], &needle[0], needle.length()) == 0)
                    return i;
            }
        }
        return -1;
    }
};
