class Solution {
public:
    vector<vector<string>>result;
    bool check(int row, int col, vector<string>&temp){
        int a=row-1;
        int b=col+1;
        int c=col-1;
        while(a>=0){
            if(temp[a][col]=='Q')return false;
            else if(b<temp.size() and temp[a][b]=='Q')return false;
            else if(c>=0 and temp[a][c]=='Q')return false;
            a--;
            b++;
            c--;
        }
        return true;
    }
    bool solver(int row, vector<string>&temp){
        int n=temp.size();
        if(row==n){
            return true;
        }
        for(int i=0;i<n;i++){
            if(!check(row,i,temp))continue;
            temp[row][i]='Q';
            if(solver(row+1,temp)){
                result.push_back(temp);
            }
            temp[row][i]='.';
        }
        return false;
    }
    vector<vector<string>> solveNQueens(int n) {
        string s;
        for(int i=0;i<n;i++){
            s+='.';
        }
        vector<string>temp(n,s);
        bool i=solver(0,temp);
        return result;
    }
};
