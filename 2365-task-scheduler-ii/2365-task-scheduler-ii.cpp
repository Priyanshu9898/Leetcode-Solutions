class Solution {
public:
    long long taskSchedulerII(vector<int>& tasks, int space) {
        long long count = 0;
        
        unordered_map<long long , long long> m;
        
        for(int i = 0; i < tasks.size() ; i++){
            
            long long ele = tasks[i];
            
            if(m[ele] == 0){
                m[tasks[i]] = 1+ space + count;
            }
            
            else{
                if(m[ele] > count){
                    count = m[ele];
                }
                
                m[ele] = 1+ space + count;
                
            }
            
            
            count++;
        }
        
        return count;
    }
};