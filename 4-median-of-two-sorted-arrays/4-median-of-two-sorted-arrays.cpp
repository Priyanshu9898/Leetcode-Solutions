// class Node{
//     public:
//         int data;
//         int col;
//         int row;
    
//         Node(int data , int row , int col){
//             this -> data = data;
//             this -> row = row;
//             this -> col = col;
//         }
// };

// class compare{
//     public:
//         bool operator()(Node* a , Node* b){
//             return a -> data > b -> data;
//         }
// };



class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
     
        
        vector<int> arr;
        
        for(int i = 0; i  < nums1.size(); i++){
            arr.push_back(nums1[i]);
        }
        
        for(int i = 0; i  < nums2.size(); i++){
            arr.push_back(nums2[i]);
        }
        
        sort(arr.begin(), arr.end());
        
        if(arr.size()  % 2 == 0){
            return ((double)arr[arr.size()/2 - 1] + (double)arr[arr.size()/2]) / 2;
        }
        else{
            return (double)arr[arr.size() / 2];
        }
    }
};