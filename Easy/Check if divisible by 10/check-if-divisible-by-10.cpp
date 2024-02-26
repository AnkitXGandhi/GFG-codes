//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int isDivisibleBy10(string bin) {
        // code here 
    int sum=0;
       for(int i=0;i<bin.size();i++)
       {
           sum=sum*2+(bin[i]-'0');
           sum=sum%10;
       }
       if(sum==0)
       return 1;
       else
       return 0;
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    while (t--) {
        string bin;
        cin >> bin;
        Solution ob;
        cout << ob.isDivisibleBy10(bin);
        cout << endl;
    }
}
// } Driver Code Ends