//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    /*You are required to complete this method */
    int findMaxDiff(vector<int> &arr) {
        // Your code here
        int n=arr.size();
       int maxi=0;
      stack<int>a,b;
      vector<int>x(n,0),y(n,0);
      
      for(int i=0;i<n;i++){
         
          while(!a.empty()&&a.top()>=arr[i])
          a.pop();
         
          if(!a.empty())
          x[i]=a.top();
          
          a.push(arr[i]);
      }
      
        for(int i=n-1;i>=0;i--){
         
          while(!b.empty()&&b.top()>=arr[i])
          b.pop();
         
          if(!b.empty())
          y[i]=b.top();
          
          b.push(arr[i]);
      }
      
    
      for(int i=0;i<n;i++){
          
          if(abs(x[i]-y[i])>maxi)
          maxi=abs(x[i]-y[i]);
      }
      
      return  maxi;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string input;
        int num;
        vector<int> arr;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }

        Solution ob;
        cout << ob.findMaxDiff(arr) << endl;
    }
    return 0;
}

// } Driver Code Ends