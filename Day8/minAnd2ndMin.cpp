https://practice.geeksforgeeks.org/problems/find-the-smallest-and-second-smallest-element-in-an-array3226/1?page=1&difficulty[]=-1&status[]=solved&sortBy=submissions

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<int> minAnd2ndMin(int a[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++) 
            cin >> a[i];

        vector<int> ans = minAnd2ndMin(a, n);
        if (ans[0] == -1)
            cout << -1 << endl;
        else 
            cout << ans[0] << " " << ans[1] << endl;
    }
    return 0;
}
// } Driver Code Ends


vector<int> minAnd2ndMin(int a[], int n) {
            int i;
    int first=INT_MAX;
    int second=INT_MAX;
    int a1=-1;
    int b1=-1;
    for(i=0;i<n;i++)
        {
            if(a[i]<first)
            {
                first=a[i];
                 a1=a[i];
            }
           
        }
       
        for(int i=0;i<n;i++){
            if(a[i]>first && a[i]<second)
            {
                second=a[i];
                 b1=a[i];
            }
        }
       if(a1!=-1 && b1!=-1)
        return {a1,b1};
        else
        return {-1,-1};
    
}
