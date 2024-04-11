//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    string deci(int n){
        string ans="";
        while(n!=0){
            int x = n%2;
            if(x==1){
                ans+="1";
            }
            else{
                ans+='0';
            }
            n/=2;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
    public:
    // function to convert a given Gray equivalent n to Binary equivalent.
    int grayToBinary(int n)
    {
        
        // Your code here
        string x = deci(n);
        string ans = "";
        ans+=x[0];
        for(int i=1;i<x.length();i++){
            if((x[i]=='1' && ans[i-1]=='0') || (x[i]=='0' && ans[i-1]=='1')){
                ans+='1';
            }
            else if((x[i]=='1' && ans[i-1]=='1') || (x[i]=='1' && ans[i-1]=='0')){
                ans+='0';
            }
            else{
                ans+='0';
            }
        }
        int ans1 = 0;
        int y = ans.length()-1;
        for(int i=0;i<ans.length();i++){
            if(ans[i]=='1'){
                ans1+=pow(2,y);
            }
            --y;
        }
        return ans1;
        
    }
};

//{ Driver Code Starts.

// Driver code
int main()
{
    int t,n;
    cin>>t;//testcases
    while(t--)
    {
        cin>>n;//initializing n
        
        Solution ob;
        //calling function grayToBinary()
       cout<< ob.grayToBinary(n)<<endl;
    }
}

// } Driver Code Ends