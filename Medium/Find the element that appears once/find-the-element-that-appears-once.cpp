//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int search(int a[], int N){
	    //code
 unordered_map<int,int>fmap;
   
    // traverse the array for frequency
    for(int i = 0; i < N;i++)
    {
        fmap[a[i]]++;
    }
   
    // iterate over the map
    for(auto it:fmap)
    {
       
        // check frequency whether it is one or not.
        if(it.second == 1)
        {
           
            // return it as we got the answer
            return it.first;
        }
    }
    return -1;
}
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t,len;
    cin>>t;
    while(t--)
    {
        cin>>len;
        int arr[len];
        for(int i=0;i<len;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.search(arr, len)<<'\n';
    }
    return 0;
}

// } Driver Code Ends