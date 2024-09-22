//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
    
    int missing=0,repeated=0;
        int p=arr.size()+1;
        for(int i=0;i<arr.size();i++)
        {
            int k=(arr[i]-1)%p;
            arr[k]+=p;  
        }
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]/p<1){missing=i+1;}
            if(arr[i]/p==2){repeated=i+1;}
        }
        return {repeated,missing};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends