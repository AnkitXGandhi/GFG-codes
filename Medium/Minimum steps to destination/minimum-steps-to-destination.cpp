//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    
        // code here
        int minSteps(int d) {
        int num=0;
        for(int i=1;i<=d;i++){
            if( (i * (i+1))/2 > d ) break;
            num  = i;
        }
        if( (num*(num+1))/2 ==  d  ) return num;
        num++;
        if( (d % 2) == 0 ){
            // even
            while( (((num*(num+1))/2) % 2 ) != 0 )num++;
        }
        else {
            // odd
            while( (((num*(num+1))/2) %2) == 0 ) num++;
        }
        return num;
    
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int d;
        cin >> d;

        Solution ob;
        cout << ob.minSteps(d) << "\n";
    }
    return 0;
}
// } Driver Code Ends