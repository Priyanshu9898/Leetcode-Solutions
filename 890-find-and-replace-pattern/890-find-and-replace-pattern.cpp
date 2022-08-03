class Solution {
public:
    
    vector<int> getPattern(string s){
        
        int idx = 0;
        unordered_map<char , int> m;
        
        vector<int> ans;
        for(int i = 0 ; i < s.length(); i++){
            char ch = s[i];
            
            if(m.find(ch) == m.end()){
                m[ch] = idx + 1;
                ans.push_back(m[ch]);
                idx++;
            }
            else{
                ans.push_back(m[ch]);
            }
            
        }
        
        return ans;
    }
    
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> ans;
        
        vector<int> mainP = getPattern(pattern);

        for(int i = 0 ; i < words.size(); i++){
            vector<int> s = getPattern(words[i]);

            if(s == mainP){
                ans.push_back(words[i]);
            }
        }
        
        return ans;
    }
};