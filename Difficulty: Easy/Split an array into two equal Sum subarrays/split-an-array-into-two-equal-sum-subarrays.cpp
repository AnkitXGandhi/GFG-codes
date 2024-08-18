//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        // code here
        int sum = 0,n = arr.size();
         for(int i = 0 ; i < n; i++){
             sum+= arr[i];
         }
         if(sum & 1) return false;
         int k = sum /2;
         
         for(int i = 0 ; i < n;i++){
             k -= arr[i];
             if(k== 0) return true;
             else if(k < 0) return false;
         }
         return false;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t-- > 0) {
        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> arr;
        string temp;
        while (ss >> temp) {
            arr.push_back(stoi(temp));
        }

        Solution obj;
        bool res = obj.canSplit(arr);
        cout << (res ? "true" : "false") << endl;
    }
    return 0;
}
// } Driver Code Ends