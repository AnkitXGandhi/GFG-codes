//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
      if(n==1)return 0;
        if(arr[0]==0)return -1;
        int ans=0;
        int i=0;
        if(arr[0]>=n-1)return 1;
        while(i<n){
            int maxi=0;
            int nextstep=0;
            for(int j=1;j<=arr[i];j++){
                if(arr[i+j]>=n-1-(i+j)){
                    return ans+2;
                }
                if(arr[i+j]==0)continue;
                if(arr[i+j]-(arr[i]-j)>maxi){
                    maxi=arr[i+j]-(arr[i]-j);
                    nextstep=j;
                }
            }
            if(nextstep==0)return -1;
            i+=nextstep;
            ans++;
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
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends