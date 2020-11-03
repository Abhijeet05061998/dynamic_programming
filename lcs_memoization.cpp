#include<bits/stdc++.h>
using namespace std;

int arr[100][100];

int lcs(string s1,string s2,int m,int n)
{
	

	if(arr[m][n]!=-1)
	{
		return arr[m][n];
	}
	if(m==0||n==0)
	{
		arr[m][n]=0;
	}
	else
	{
		if(s1[m-1]==s2[n-1])
		{
			arr[m][n]=1+lcs(s1,s2,m-1,n-1);
		}
		else
		{
			arr[m][n]=max(lcs(s1,s1,m-1,n),lcs(s1,s2,m,n-1));
		}
	}
	return arr[m][n];
}




int main()
{
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	string s1,s2;
	cin>>s1>>s2;
	int m=s1.size();
	int n=s2.size();
memset(arr,-1,sizeof(arr));
	cout<<lcs(s1,s2,m,n)<<endl;
}