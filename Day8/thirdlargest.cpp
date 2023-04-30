//https://practice.geeksforgeeks.org/problems/third-largest-element/1?page=1&difficulty[]=-1&status[]=unsolved&category[]=Arrays&sortBy=submissions

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    int thirdLargest(int a[], int n)
    {
         //Your code here
         int i,first=0,second=0,third=0;
         for(i=0;i<n;i++)
            {
                if(a[i]>first)
                first=a[i];
            }
            for(i=0;i<n;i++)
            {
                if(a[i]>second&&a[i]<first)
                second=a[i];
            }
            for(i=0;i<n;i++)
            {
                if(a[i]>third && a[i]<second)
                third=a[i];
               
            }
            return third;
            return -1;
    }

};

//{ Driver Code Starts.
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution obj;
	    cout<<obj.thirdLargest(a,n)<<endl;
    }
}   
// } Driver Code Ends
