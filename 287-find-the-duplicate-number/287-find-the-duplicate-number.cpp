class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int , int> m;
        
        for(int i = 0 ; i < nums.size(); i++){
            
            if(m[nums[i]] == 1){
                return nums[i];
            }
            else{
                m[nums[i]] = 1;
            }
        }
        
        return -1;
    }
};