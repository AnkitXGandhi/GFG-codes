//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to return the minimum cost of connecting the ropes.
    long long minCost(vector<long long>& arr) {
        // Your code here


    sort(arr.begin(), arr.end());

    long long totalCost = 0;

    while (arr.size() > 1) {
        long long first = arr[0];
        long long second = arr[1];
        long long currentCost = first + second;

        totalCost += currentCost;

        arr.erase(arr.begin());
        arr.erase(arr.begin());

        auto position = lower_bound(arr.begin(), arr.end(), currentCost);
        arr.insert(position, currentCost);
    }

    return totalCost;
    }
};


//{ Driver Code Starts.

int main() {
    long long t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        long long num;
        vector<long long> a;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            a.push_back(num);
        }
        Solution ob;
        cout << ob.minCost(a) << endl;
    }
    return 0;
}

// } Driver Code Ends