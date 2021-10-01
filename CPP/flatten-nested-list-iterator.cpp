// https://leetcode.com/problems/flatten-nested-list-iterator/

class NestedIterator {
public:
    vector<int>res;
    NestedIterator(vector<NestedInteger> &nestedList) {
        for(auto i:nestedList){
            stack<NestedInteger>st;
            st.push(i);
            while(!st.empty()){
                auto j =st.top();
                st.pop();
                if(j.isInteger())
                    res.push_back(j.getInteger());
                else{
                    vector<NestedInteger>tmp = j.getList();
                    for(int i=tmp.size()-1;i>-1;--i)
                        st.push(tmp[i]);
                }
            }
        }
        
    }
    
    int next() {
        int i=res[0];
        res.erase(res.begin());
        return i;
    }
    
    bool hasNext() {
        return !res.empty();
    }
};