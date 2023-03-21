//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

    int leftMost(vector<int> arr,  int n){
        int start = 0;
        int end = n - 1;
        
        int idx = -1;
        
        while(start <= end){
            int mid = start + (end - start) /2;
            
            if(arr[mid] == 1){
                idx = mid;
                end = mid - 1;
            }
            else if(arr[mid] < 1){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        
        return idx;
    }
    
    int rightMost(vector<int> arr,  int n){
        int start = 0;
        int end = n - 1;
        
        int idx = -1;
        
        while(start <= end){
            int mid = start + (end - start) /2;
            
            if(arr[mid] == 1){
                idx = mid;
                start = mid + 1;
            }
            else if(arr[mid] < 1){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        
        return idx;
    }

	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    
	    int maxLen = 0;
	    int index = -1;
	    
	    for(int i = 0; i < arr.size(); i++){
	        int left = leftMost(arr[i] , m);
	        int right = rightMost(arr[i] , m);
	        
	       // cout << left  << " " << right << endl;
	        
	        if((left != -1 && right != -1) && ((right - left) + 1) > maxLen){
	            maxLen = (right - left) + 1;
	            index = i;
	        }
	    }
	    
	    return index;
	}

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends