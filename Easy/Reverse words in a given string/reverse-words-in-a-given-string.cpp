//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { 
        // code here 
        for(int i=0;i<s.length();i++){
            if(s[i]!='.'){
            int j=i;
            while(j<s.length() && s[j]!= '.') j++;
            reverse(s.begin()+i,s.begin()+j);
            i=j;
                
            }
            
        }
        reverse(s.begin(),s.end());
        return s;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends