//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/* The function returns 1 if
IP string is valid else return 0
You are required to complete this method */
class Solution {
    bool check(string str){
        int n = str.length();
        if(n == 0 || n > 3) return false;
        if(n > 1 && str[0] == '0') return false; 
        long long num = 0;
        for(int i = 0 ; i < n ; i++){
            if(!(str[i] >= '0' && str[i] <= '9')) return false;
            num = num*10 + (str[i]-'0');
        }
        if(num > 255) return false;
        
        return true;
    }

    public:
        int isValid(string s) {
        int n = s.length();
        if(n > 15) return 0; 
        string str = "";
        int dotcount = 0;
        
        for(int i = 0 ; i < n ;i++){
            if(s[i] == '.'){
                dotcount++;
                bool ans = check(str);
                if(!ans) return 0;
                str.clear();
            }
            else
                str += s[i];
        }
        if (!check(str)) return 0;
        
        if(dotcount != 3) return 0;
        
        return 1;
        }
};

//{ Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isValid(s) << endl;
    }
    return 0;
}
// } Driver Code Ends