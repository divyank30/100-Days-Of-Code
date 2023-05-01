https://practice.geeksforgeeks.org/problems/product-sum3012/1?page=1&difficulty[]=-1&status[]=unsolved&category[]=Numbers&sortBy=submissions

//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution {
  public:
    long long int countDigits(long long int a, long long int b) { 
        // code here
        int count=0;
        long long int product=0,res=0;
        product=a*b;
        while(product!=0)
        {count++;
       product= product/10;}
        return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int a,b;
        cin >> a >> b;
        Solution ob;
        cout << ob.countDigits(a, b) << endl;
    }
    return 0;
}

// } Driver Code Ends
