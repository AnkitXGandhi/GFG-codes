//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
//  Class Solution to contain the method for solving the problem.
class Solution {
    public:
    vector<int> findSplit(vector<int>& arr) {
        int sm= accumulate(arr.begin(),arr.end(),0); // function for the sum of  array elements
        if(sm%3!=0) return {-1,-1};
        sm= sm/3; //(required sum for each subarray)
        int cur=0;
        vector<int>ans;
        for(int i=0;i<arr.size();i++){
            if(cur+arr[i]<=sm){
                
                cur+=arr[i];
                if(cur==sm){
                    ans.push_back(i);
                cur=0;
                }
            }
            else return {-1,-1};
            
        }
        ans.pop_back();  // Remove last extra index from the answer
        return ans;
   // code here
    }
};

//{ Driver Code Starts.

int main() {
    int test_cases;
    cin >> test_cases;
    cin.ignore();
    while (test_cases--) {
        string input;
        vector<int> arr;

        // Read the array from input line
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        // Solution instance to invoke the function
        Solution ob;
        vector<int> result = ob.findSplit(arr);

        // Output result
        if (result[0] == -1 && result[1] == -1) {
            cout << "false" << endl;
        } else {
            cout << "true" << endl;
        }
    }
    return 0;
}

// } Driver Code Ends