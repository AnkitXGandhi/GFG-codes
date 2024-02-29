//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	
	long long sumBitDifferences(int arr[], int n) {
	    // code here
	      long long sum=0;
        int cnt[18] = {0};
        for(int i=0;i<n;i++){
            for(int j=0;j<18;j++){
                int bit = 1<<j;
                int ans = bit&arr[i];
                if(ans>0){
                    sum+=(2*(i-cnt[j]));
                    cnt[j]++;
                }
                else sum+=(2*cnt[j]);
            }
        }
        return sum;
        
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.sumBitDifferences(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends