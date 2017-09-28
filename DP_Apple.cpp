#include<iostream>
#include<algorithm>
using namespace std;

#define NAx_N 100
#define MAX_M 100
int apple[100][100]={0};
int sum[100][100]={0};
int main()
{
	int m,n;
	cin>>m>>n;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++){
			cin>>apple[i][j];
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(i==0&&j==0)
				sum[i][j]=apple[i][j];
			if(i==0&&j>=1)
				sum[i][j]=sum[i][j-1]+apple[i][j];
			if(i>=1&&j==0)
				sum[i][j]=sum[i-1][j]+apple[i][j];
			if(i>=1&&j>=1)
				sum[i][j]=max(sum[i-1][j],sum[i][j-1])+apple[i][j];
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<sum[i][j]<<" ";
		}
			cout<<endl;
	}
	cout<<endl;
	cout<<sum[m-1][n-1]<<endl;
}
