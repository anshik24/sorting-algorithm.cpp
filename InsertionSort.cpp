//IMPLEMENTATION OF INSERTION SORT USING C++!------------------------------------------------------------------------------------

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter value of n \n";
    cin>>n;
    int arr[n];
    cout<<"Enter the value of array\n";
for(int i = 0; i < n; i++)
{
    cin>>arr[i];
}
for(int i=0;i<n;i++)
{
    int current =arr[i];
    int j =i-1;
while(arr[j]>current && j>=0)
{
arr[j+1]=arr[j];
j--;
}
arr[j+1] = current;
}
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" "<<endl;
}
return 0;

}
