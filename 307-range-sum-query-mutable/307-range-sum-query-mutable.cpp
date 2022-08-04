
class NumArray {
public:
    int n;
    vector<int> arr;
    int sum;
    NumArray(vector<int>& nums) {
        n = nums.size();
        sum = 0;
        
        arr = nums;
        for(int i = 0; i < n ; i++){
            sum += nums[i];
        }
        
    }
    
    void update(int index, int val) {
        
        sum -= arr[index];
        arr[index] = val;
            
        sum += arr[index];

        
    }
    
    int sumRange(int left, int right) {
        
        int ans = 0;
        
        if((right - left) < n /2){
            ans =  accumulate(arr.begin() + left , arr.begin() + right +1 , 0);
        }
        else{
            ans = sum - accumulate(arr.begin(), arr.begin() + left , 0) - accumulate(arr.begin() + right +1 , arr.end(), 0);
        }
        
        return ans;
        
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */