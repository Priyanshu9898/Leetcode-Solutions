//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	    int ans = 0;
	    
	    int left = 0;
	    int right = 0;
	    
	    int n = txt.size();
	    
	    int k = pat.size();
	    
	    
	    if(k > n){
	        return 0;
	    }
	    
	    vector<int> arr(26, 0);
	    
	    
	    for(int i = 0; i < k; i++){
	        arr[pat[i] - 'a']++;
	    }
	    
	    vector<int> arr2(26, 0);
	    

	    
	    while(right < n){
	        
	        arr2[txt[right] - 'a']++;
	        
	        if(right - left + 1 < k){
	            right++;
	        }
	        else if(right - left + 1 == k){
	            if(arr == arr2){
	                ans++;
	            }
	            arr2[txt[left] - 'a']--;
	            left++;
	            right++;
	        }
	        
	        
	    }
	    
	    return ans;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends