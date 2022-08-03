class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        
        int first = -1;
        
        int s = 0;
        int e = nums.size() - 1;
        
        while(s <= e){
            int mid = (s +e)/2;
            
            // cout << mid << endl;
            if(nums[mid] == target){
                first = mid;
                break;
            }
            
            else if(nums[mid] > target){
                e = mid - 1;
            }
            else{
                s = mid + 1;
            }
        }
        
      
        
        if(first == -1){
            return {-1, -1};
        }
        
        else{
            
            
            while(first > 0 && nums[first-1] == target){
                first--;
            }
            
            ans.push_back(first);
            
            while(first < nums.size()-1 && nums[first+1] == target){
                first++;
            }
            
            ans.push_back(first);
            
        }
        
        return ans;
    }
};