//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int maximumProfit(vector<int> &price) {
        // code here
       int i = 0, buy = 0, sell = 0, profit = 0,n=price.size();
        while (i < n - 1) {
            // Find next local minima
            while (i < n - 1 && price[i + 1] <= price[i])
                i++;
            buy = i++;
            // Find next local maxima
            while (i < n && price[i] >= price[i - 1])
                i++;
            sell = i - 1;
            // Add profit
            profit += price[sell] - price[buy];
        }
        return profit;
    }
};


//{ Driver Code Starts.
int main() {
    int t;

    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int n = arr.size();
        Solution ob;
        int res = ob.maximumProfit(arr);
        cout << res;

        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends