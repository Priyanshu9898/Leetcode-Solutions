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
                e = mid - 1;
            }
            
            else if(nums[mid] > target){
                e = mid - 1;
            }
            else{
                s = mid + 1;
            }
        }
        
        ans.push_back(first);
        int second = first;
        s = 0;
        e = nums.size() - 1;
        
        while(s <= e){
            int mid = (s +e)/2;
            
            // cout << mid << endl;
            if(nums[mid] == target){
                second = mid;
                s = mid + 1;
            }
            
            else if(nums[mid] > target){
                e = mid - 1;
            }
            else{
                s = mid + 1;
            }
        }
        ans.push_back(second);
        
        
        return ans;
    }
};