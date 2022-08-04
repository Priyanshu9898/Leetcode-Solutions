
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
        
        int temp = sum;
        
        for(int i = 0 ; i < left ; i++){
            temp -= arr[i];
        }
        
        for(int i = right+ 1; i < n ; i++){
            temp -= arr[i];
        }
        
        return temp;
        
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */