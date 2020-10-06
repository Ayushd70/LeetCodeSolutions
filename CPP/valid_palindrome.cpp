class Solution {
public:
bool isPalindrome(string s) {
int l = 0, h = s.length(); 

for (int i = 0; i < h; i++) 
    s[i] = tolower(s[i]); 
while (l <= h)
{ 
    if (!(s[l] >= 'a' && s[l] <= 'z')) 
		l++; 
	else if (!(s[h] >= 'a' && s[h] <= 'z')) 
    	h--; 
	else if (s[l] == s[h]) 
		l++, h--; 
	else
		return false; 
	} 
	return true;   
    }
};
