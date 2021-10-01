//https://leetcode.com/problems/complex-number-multiplication/
class Solution {
public:
    int realpart(string str){
        int i = 0 ;
        string realpart = "" ;
        
        while(str[i]!='+'){
            realpart += str[i] ;
            i++ ;
        }
        return stoi(realpart) ;
    }
    
    int complex(string str){
        int i = 0 ;
        string complex = "" ;
        
        while(str[i]!='+'){
            i++ ;
        }
        
        i++ ;
        
        while(str[i]!='i'){
            complex += str[i] ;
            i++ ;
        }
        
        return stoi(complex) ;
    }
    
    string complexNumberMultiply(string a, string b) {
        string result = "" ;
        int a1 = realpart(a) ;
        int a2 = realpart(b) ;
        int b1 = complex(a) ;
        int b2 = complex(b) ;
        
        result = result + to_string(a1*a2-b1*b2)+'+'+to_string(a1*b2+a2*b1)+'i' ;
        
        return result ;
    }
};