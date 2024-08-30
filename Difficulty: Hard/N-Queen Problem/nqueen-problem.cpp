//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<vector<int>> nQueen() {
        // code here
    }bool isVal(vector<vector<int>>& matrix, int i, int j) {
    int n = matrix.size();  // Number of rows

    // Check if there's a 1 in the same row `i`
    for (int col = 0; col < n; ++col) {
        if (matrix[i][col] == 1) {
            return false;
        }
    }

    // Check if there's a 1 in the same column `j`
    for (int row = 0; row < n; ++row) {
        if (matrix[row][j] == 1) {
            return false;
        }
    }

    // Check the top-left to bottom-right diagonal
    for (int x = 0; x < n; ++x) {
        if (i - x >= 0 && j - x >= 0 && matrix[i - x][j - x] == 1) {
            return false;
        }
        if (i + x < n && j + x < n && matrix[i + x][j + x] == 1) {
            return false;
        }
    }

    // Check the top-right to bottom-left diagonal
    for (int x = 0; x < n; ++x) {
        if (i - x >= 0 && j + x < n && matrix[i - x][j + x] == 1) {
            return false;
        }
        if (i + x < n && j - x >= 0 && matrix[i + x][j - x] == 1) {
            return false;
        }
    }

    return true;
}

void solve(vector<vector<int>>& mat, int n, int i, int j,
           vector<int>& temp, vector<vector<int>>& ans) {
    if (j >= n) {  // If j is out of bounds, a valid configuration is found
        ans.push_back(temp);
        return;
    }

    // Try placing a queen in each row of column `j`
    for (int row = 0; row < n; ++row) {
        if (isVal(mat, row, j)) {
            mat[row][j] = 1;  // Place queen
            temp.push_back(row + 1);  // Store queen position

            solve(mat, n, i, j + 1, temp, ans);  // Move to next column

            // Backtrack
            mat[row][j] = 0;
            temp.pop_back();
        }
    }
}
    vector<vector<int>> nQueen(int n) {
        // code here
         vector<vector<int>>ans;
         vector<vector<int>>mat(n,vector<int>(n,0));
         vector<int>temp;
        //  for(int i=0;i<n;i++){
              solve(mat,n,0,0,temp,ans);
        //  }
        
         
         return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<vector<int>> ans = ob.nQueen(n);
        if(ans.size() == 0)
            cout<<-1<<"\n";
        else {
            for(int i = 0;i < ans.size();i++){
                cout<<"[";
                for(int u: ans[i])
                    cout<<u<<" ";
                cout<<"] ";
            }
            cout<<endl;
        }
    }
    return 0;
}
// } Driver Code Ends