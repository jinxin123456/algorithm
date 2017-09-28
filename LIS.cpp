#include<iostream>
using namespace std;

int lis(int A[],int n){
	int *result=new int[n+1]();
	int len=1;
	for(int i=0;i<n;i++)
	{
		result[i]=1;
		for(int j=0;j<i;j++)
			if(A[j]<A[i]&&result[i]<result[j]+1)
				result[i]=result[j]+1;
		if(result[i]>len)
			len=result[i];
	}
	delete []result;
	return len; 
}
int main(){
	int A[]={5,3,4,8,6,7};
	cout<<lis(A,6)<<endl;
	return 0;
}
