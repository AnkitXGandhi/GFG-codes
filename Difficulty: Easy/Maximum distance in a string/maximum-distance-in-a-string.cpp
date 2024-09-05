//{ Driver Code Starts
//Initial Template for C++



#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++



class Solution
{
	public:
	    
		int maximum_distance(string s)
		{
	int n=s.length();
            unordered_map<char,int> mp;
            for(int i=0;i<n;i++)
            {
                mp[s[i]]=i;
            }
          //  a-3
          //  b-6
          //  c-4
          char c=s[0]+1;
          int max=-1;
            
            for(int i=0;i<s.length();i++)
            {
                if(mp.find(c)==mp.end())
                {
                    break;
                    
                }
                if(mp[c]>max)
                {
                    max=mp[c];
                }
                if(s[i]==c)
                {
                    c=c+1;
                }
            }
            if(max==-1)
            {
                return -1;
            }
            return max+1;	    
		}
};

//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string s;
	    cin >> s;
	    int k;
	    Solution ob;
	    int ans = ob.maximum_distance(s);
	    cout<<ans<<"\n";
    }
	return 0;
}
// } Driver Code Ends