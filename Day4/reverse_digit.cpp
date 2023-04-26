https://practice.geeksforgeeks.org/problems/value-equal-to-index-value1330/1?page=1&difficulty[]=-2&status[]=unsolved&sortBy=submissions

//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
		long long int reverse_digit(long long int n)
		{
		    // Code here
		    long long int temp,res=0;
		    temp=n;
		    while(temp>0)
		    {
		        int rem=temp%10;
		        res=res*10+rem;
		        temp=temp/10;
		    }
		    return res;
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	long long int n;
    	cin >> n;
    	Solution ob;
    	long long int  ans = ob.reverse_digit(n);
    	cout << ans <<"\n";
    }
	return 0;
}
// } Driver Code Ends
