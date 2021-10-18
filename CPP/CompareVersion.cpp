class Solution {
public:
    int compareVersion(string version1, string version2) {
        vector<long> v1, v2;
        string s = "";
        for(char x: version1) {
            if(x == '.') {
                v1.push_back(stol(s));
                s = "";
            } else {
                s += x;
            }
        }
        v1.push_back(stol(s));
        s = "";
        for(char x: version2) {
            if(x == '.') {
                v2.push_back(stol(s));
                s = "";
            } else {
                s += x;
            }
        }
        v2.push_back(stol(s));
        int i=0;
        while(i<v1.size() && i<v2.size()) {
            if(v1[i]>v2[i]) {
                return 1;
            } else if(v1[i] < v2[i]) {
                return -1;
            }
            i++;
        }
        while(i < v1.size()) {
            if(v1[i] != 0) {
                return 1;
            }
            i++;
        }
        while(i < v2.size()) {
            if(v2[i] != 0) {
                return -1;
            }
            i++;
        }
        return 0;
    }
};
