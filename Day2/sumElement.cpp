//https://practice.geeksforgeeks.org/problems/sum-of-array-elements2502/1?page=1&difficulty[]=-2&sortBy=submissions

//{ Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

//Complete this function

int sumElement(int arr[],int n)
{
    //Your code herke
    int i=0,sum=0;
    for(i=0;i<n;i++)
    {
      
        sum=sum+arr[i];
    }
    return sum;
}




//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    
	    cout<<sumElement(arr,n)<<endl;
	    
	}
	return 0;
}
// } Driver Code Ends
