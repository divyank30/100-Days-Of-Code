//https://practice.geeksforgeeks.org/problems/print-alternate-elements-of-an-array/1?page=1&difficulty[]=-2&sortBy=submissions

//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;




// } Driver Code Ends
//User function Template for C++

// ar[] is the array 
// n is the number of elements in array.
void print(int ar[], int n)
{
    
    // code here
    int i=0;
    for(i=0;i<n;i=i+2)
    {
        printf("%d ",ar[i]);
    }
    
}

//{ Driver Code Starts.
int main()
{
   int t;
   cin>>t;
  while(t--)
   {
     int ar[100001]={0};
     int n;
     cin>>n;
     for(int i=0;i<n;i++)
      cin>>ar[i];
      print(ar,n);
      cout<<endl;
     }

return 0;
}

// } Driver Code Ends
