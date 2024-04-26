//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
     void solve(int r, int c, vector<vector<int>>& matrix, vector<int>& ans, int n, int m, string dir ){
        // Code her
        if(r<0){
          ans.push_back(r+1);
          ans.push_back(c);
          return;
      }
      if(r>n-1){
          ans.push_back(r-1);
          ans.push_back(c);
          return;
      }
      if(c<0){
          ans.push_back(r);
          ans.push_back(c+1);
          return;
      }
      if(c>m-1){
          ans.push_back(r);
          ans.push_back(c-1);
          return;
      }
      //Recursive Call
      if(matrix[r][c] == 0){ //move in same direction
          if(dir == "E"){
              solve(r, ++c, matrix, ans, n, m, dir);
          }
          else if(dir == "W"){
              solve(r, --c, matrix, ans, n, m, dir);
          }
          else if(dir == "S"){
              solve(++r, c, matrix, ans, n, m, dir);
          }
          else{
              solve(--r, c, matrix, ans, n, m, dir);
          }
      }
      else{
          if(dir == "E"){ //move South
              matrix[r][c] = 0;
              solve(++r, c, matrix, ans, n, m, "S");
          }
          else if(dir == "W"){ // move North
              matrix[r][c] = 0;
              solve(--r, c, matrix, ans, n, m, "N");
          }
          else if(dir == "S"){ //move West
              matrix[r][c] = 0;
              solve(r, --c, matrix, ans, n, m, "W");
          }
          else{ //move East
              matrix[r][c] = 0;
              solve(r, ++c, matrix, ans, n, m, "E");
          }
      }
      return;
  }
    vector<int> FindExitPoint(int n, int m, vector<vector<int>>& matrix) {
        // Code here
        vector<int> ans;
        solve(0, 0,matrix, ans, n, m,"E");
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> matrix(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> matrix[i][j];
        Solution obj;
        vector<int> ans = obj.FindExitPoint(n, m, matrix);
        for (auto i : ans)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends