class MyCalendar {
public:
    
    vector<pair<int , int>> v;
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        
        if(v.size() == 0){
            v.push_back(make_pair(start , end));
            return true;
        }
        else{
            
            bool ans = true;
            for(auto &it: v){
                if(start >= it.first && start < it.second){
                    ans = false;
                    break;
                }
                
                if(start < it.first && end > it.first){
                    ans = false;
                    break;
                }
            }
            
            if(ans){
                v.push_back(make_pair(start , end));
            }
            
            return ans;
        }
        
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */