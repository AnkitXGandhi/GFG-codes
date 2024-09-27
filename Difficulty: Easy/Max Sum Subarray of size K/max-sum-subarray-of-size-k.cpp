//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int k, vector<int> &nums , int n){
        // code here 
     long maxSum=0;
     long sum=0,i=0;
     while(i<n && i<k) sum+=nums[i++];
     maxSum=sum;
     for(int i=1;i<n-k+1;i++){
         sum=sum + nums[i+k-1]-nums[i-1];
         maxSum=max(sum,maxSum);
     }
    return maxSum;
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