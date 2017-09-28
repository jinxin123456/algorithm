#include<iostream>
#include<algorithm>
using namespace std;

int p[11]={0,1,5,8,9,10,17,17,20,24,30};

int buttomupcutrod(int p[],int n)
{
	int *r=new int[n+1];
	r[0]=0;
	for(int i=1;i<=n;i++){
		int q=-1;
		for(int j=1;j<=i;j++){
				q=max(q,p[j]+r[i-j]);
		}
		r[i]=q;
	}
	return r[n];
}
int main()
{
	int n;
	cin>>n;
	cout<<buttomupcutrod(p,n)<<endl;
	return 0;
}
