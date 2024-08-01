//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b) {
        unordered_map<char,int>mpp1,mpp2;
        for(int i=0;i<a.length();i++) mpp1[a[i]]++;
        for(int i=0;i<b.length();i++) mpp2[b[i]]++;
        return mpp1==mpp2;
        // Your code here
    }
};

//{ Driver Code Starts.

int main() {

    int t;

    cin >> t;

    while (t--) {
        string c, d;

        cin >> c >> d;
        Solution obj;
        if (obj.isAnagram(c, d))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}

// } Driver Code Ends