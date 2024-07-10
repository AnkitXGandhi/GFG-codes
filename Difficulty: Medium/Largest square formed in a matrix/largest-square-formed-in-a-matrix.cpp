//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    // int maxSquare(int n, int m, vector<vector<int>> mat) {
        // code here
        int solve(int i, int j, vector<vector<int>> &mat, vector<vector<int>> &dp){
        int n = mat.size();
        int m = mat[0].size();
        
        if(i == n || j == m) return 0;
        
        if(mat[i][j] == 0) return 0;
        
        if(dp[i][j] != -1) return dp[i][j];
        
        int down = solve(i + 1, j, mat, dp) + 1;
        int right = solve(i, j + 1, mat, dp) + 1;
        int diagonal = solve(i + 1, j + 1, mat, dp) + 1;
        
        return dp[i][j] = min(min(down,right),diagonal);
    }
    int maxSquare(int n, int m, vector<vector<int>> &mat) {
        // code here
        int ans = 0;
        vector<vector<int>> dp(n, vector<int>(m,-1));

        for(int i = 0 ; i < n; i++){
            for(int j = 0; j < m; j++){
                ans = max(ans,solve(i,j,mat,dp));
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
        int n, m;
        cin >> n >> m;
        vector<vector<int>> mat(n, vector<int>(m, 0));
        for (int i = 0; i < n * m; i++)
            cin >> mat[i / m][i % m];

        Solution ob;
        cout << ob.maxSquare(n, m, mat) << "\n";
    }
    return 0;
}
// } Driver Code Ends