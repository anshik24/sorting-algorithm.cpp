// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to sort the array into a wave-like array.
    void swap(int *i,int *j){
    int temp=*i
        *i=*j;
       *j=temp;
    }
    void convertToWave(vector<int>& arr, int n){
        
        // Your code here
        for(int i=1;i<n;i+=2){
            if(arr[i]>arr[i-1]){
                swap(arr,i,i-1);
        }
        if(arr[i]>arr[i+1]&& i<=n-2){
            swap(arr,i,i+1);
        }
    }
    
};

// { Driver Code Starts.

int main()
{
    int t,n;
    cin>>t; //Input testcases
    while(t--) //While testcases exist
    {
        cin>>n; //input size of array
        vector<int> a(n); //declare vector of size n
        for(int i=0;i<n;i++)
            cin>>a[i]; //input elements of array
        Solution ob;
        ob.convertToWave(a, n);

        for(int i=0;i<n;i++)
            cout<<a[i]<<" "; //print array
            
        cout<<endl;
    }
}  // } Driver Code Ends
