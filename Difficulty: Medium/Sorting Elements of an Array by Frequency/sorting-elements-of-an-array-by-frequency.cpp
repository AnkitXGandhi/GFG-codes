//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    static bool func(pair<int,int>p1, pair<int,int>p2){
        if(p1.second==p2.second){
            return p1.first < p2.first;
        }
        return p1.second > p2.second;
    }
    vector<int> sortByFreq(vector<int>& arr) {
        // Your code here
        unordered_map<int,int> mpp;
        for(int it: arr){
            mpp[it]++;
        }
        
        vector<pair<int,int>> vec;
        
        for(auto it: mpp){
            vec.push_back({it.first,it.second});
        }
        
        sort(vec.begin(),vec.end(),func);
        
        vector<int> ans;
        
        for(auto it: vec){
            int cnt=it.second;
            while(cnt--){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string input;
        int num;
        vector<int> arr;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution obj;
        vector<int> v;
        v = obj.sortByFreq(arr);
        for (int i : v)
            cout << i << " ";
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends