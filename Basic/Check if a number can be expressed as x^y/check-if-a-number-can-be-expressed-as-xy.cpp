//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    int checkPower(int n){
        // code here 
        if(n==1) return 1;
        if (n < 1) {
        return 0; // Numbers less than or equal to 1 cannot be expressed in the form of x^y
    }
    for (int x = 2; x <= sqrt(n); ++x) {
        int y = 2;
        int power = pow(x, y);
        while (power <= n && power > 0) {
            if (power == n) {
                return 1; // Found x^y = n
            }
            ++y;
            power = pow(x, y);
        }
    }
    return 0;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.checkPower(N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends