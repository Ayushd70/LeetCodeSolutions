class Solution {
public:
    int lengthOfLastWord(string s)
    {
        int wordlen=0;
        for (int i = 0; i < s.length(); i++)  
        { 
        if (s.at(i) == ' ') 
            wordlen = 0; 
        else
            wordlen++; 
        } 
    return wordlen; 
    }
};
