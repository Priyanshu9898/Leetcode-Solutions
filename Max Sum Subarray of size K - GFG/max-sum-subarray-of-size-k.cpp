//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here 
        int left = 0;
        int right = 0;
        
        int len = 0;
        
        long ans = 0;
        
        long sum = 0;
        
        while(right < N){
            
            sum += Arr[right];
            
            if(right - left + 1 < K){
                right++;
            }
            else if(right - left + 1 == K){
                ans = max(ans, sum);
                
                sum -= Arr[left];
                left++;
                right++;
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends