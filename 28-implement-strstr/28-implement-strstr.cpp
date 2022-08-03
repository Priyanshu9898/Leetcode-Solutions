class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = needle.length();
        int m = haystack.length();
        
        if(n > m){
            return -1;
        }
        
        if(n == m){
            if(haystack == needle){
                return 0;
            }
            else{
                return -1;
            }
        }
        
        for(int i = 0 ; i < m ; i++){
            
            if(haystack.substr(i , n) == needle){
                return i;
            }
        }
        
        
        return -1;
    }
};