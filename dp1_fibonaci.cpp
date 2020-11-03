#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int n;
	cin>>n;
   
    int arr[n];
    arr[0]=1;
    arr[1]=1;
    for(int i=2;i<n;i++)
    {
    	arr[i]=arr[i-1]+arr[i-2];
    }
    cout<<arr[n-1]<<endl;
    for(int i=0;i<n;i++)
    {
    	cout<<arr[i]<<",";
    }

}