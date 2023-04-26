//https://practice.geeksforgeeks.org/problems/c-if-else-decision-making4138/1?page=2&difficulty[]=-2&sortBy=submissions

//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    string compareFive(int n){
        // code here 
        string str;
        if(n==5)
        {
          str="Equal to 5";
        }
        if(n<5)
        {
           str="Less than 5"; 
        }
        if(n>5)
        {
           str="Greater than 5"; 
        }
        return str;
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
        cout << ob.compareFive(N) << endl;
    }
    return 0; 
} 

// } Driver Code Ends
