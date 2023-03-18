//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    
    int solve(int arr1[], int arr2[], int n, int m, int k){
        int i= 0;
        int j = 0;
        int res[n+ m];
        
        int temp = n-1;
        int l = 0;
        while(i < n && j < m){
            if(arr1[i] <= arr2[j]){
                res[l] = arr1[i];
                l++;
                i++;
            }
            else{
                res[l] = arr2[j];
                j++;
                l++;
            }
        }
        
        
        // cout << i << " " << j << endl;
        
        while(i < n){
            res[l] = arr1[i];
            l++;
            i++;
        }
        
        while(j < m){
            res[l] = arr2[j];
            l++;
            j++;
        }
        
        //  cout << i << " " << j << endl;
        
        // for(int i = 0; i < (n + m); i++){
        //     cout << res[i] << " ";
        // }
        
        // cout << endl;
        
        return res[k-1];
        
    }
    
    
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {

        
        return solve(arr1, arr2, n , m , k );
        

    }
};

//{ Driver Code Starts.
 
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int arr1[n],arr2[m];
		for(int i=0;i<n;i++)
			cin>>arr1[i];
		for(int i=0;i<m;i++)
			cin>>arr2[i];
		
		Solution ob;
        cout << ob.kthElement(arr1, arr2, n, m, k)<<endl;
	}
    return 0;
}
// } Driver Code Ends