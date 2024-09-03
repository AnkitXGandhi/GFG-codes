//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
		

	public:
	 int findlcs(string &str1,string &str2)
{
    int m=str1.size();
    int n=str2.size();
   // make a 2d dp for storing the lcs of different length between the 2 strings
   vector<vector<int>>dp(m+1,vector<int>(n+1,0));
   for(int i=1;i<=m;i++)
   {
       for(int j=1;j<=n;j++)
       {
           // if found the same then update the dp length 
           if(str1[i-1]==str2[j-1])
           {
               dp[i][j]=dp[i-1][j-1]+1;
           }
           else
           {
               //maximum of either of the strings 
               dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
           }
       }
   }
   // the last filling will tell the lcs of the 
   return dp[m][n];
   
}
 
public:
int minOperations(string str1, string str2) 
{ 
    int lcslength=findlcs(str1,str2);
    int insertion=str2.length()-lcslength;
    int deletion=str1.length()-lcslength;
    return insertion+deletion;
    
    // Your code goes here
    
} 
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

	    Solution ob;
	    cout << ob.minOperations(s1, s2) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends