class Solution {
public:

bool backtrack(vector<vector<char>>&board,int i,int j,string word,int pos){
    
     
    if(pos==word.length()){
        return true;
    }
    
    if(i<0||j<0||i>=board.size()||j>=board[0].size()||board[i][j]!=word[pos]){
        return false;
    }
   
    
    char temp=board[i][j];
    board[i][j]='*';
    
    bool curr=(backtrack(board,i+1,j,word,pos+1) || backtrack(board,i-1,j,word,pos+1) || backtrack(board,i,j+1,word,pos+1) || backtrack(board,i,j-1,word,pos+1));
        
        
    
    board[i][j]=temp;
    
    return curr;
    
}

bool exist(vector<vector<char>>& board, string word) {
    
    int m=board.size();
    int n=board[0].size();
    
    for(int i=0;i<m;i++){
        
        for(int j=0;j<n;j++){
            
            if(board[i][j]==word[0]){
                
                if(backtrack(board,i,j,word,0)==true){
                    return true;
                }
                
            }
            
        }
        
    }
    
    return false;
    
}
