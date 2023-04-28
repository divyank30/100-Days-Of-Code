https://practice.geeksforgeeks.org/problems/largest-element-in-array4009/1?page=1&difficulty[]=-1&status[]=solved&sortBy=submissions

//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        int i,res=0;
        for(i=0;i<n;i++)
            {
                if(arr[i]>res){
                    res=arr[i];
                }
               
            }
            
            return res;
    }
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int>arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        cout << ob.largest(arr, n) << "\n";
    }
    return 0;
}

// } Driver Code Ends
