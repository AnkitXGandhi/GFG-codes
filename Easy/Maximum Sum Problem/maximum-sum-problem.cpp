//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        int maxSum(int n)
        {
            //code here. 
            int m=n/2;
            int p=n/3;
            int r=n/4;
            int ans=m+p+r;
            if(ans>n){
              ans+=maxSum(m)+maxSum(p)+maxSum(r);
            }
            else
                return n;
        }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution ob;
        cout<<ob.maxSum(n)<<"\n";
    }
    return 0;
}
// } Driver Code Ends