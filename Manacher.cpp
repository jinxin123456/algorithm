#include<iostream>
#include<string> 
using namespace std;

string deal_str(string str)
{
	string des(2*str.size()+1,'#');
	for(int i=0;i<str.size();i++)
		des[2*i+1]=str[i];
	return des;
}
int Manacher(string str)
{
	int id;
	int p[1000]={0};
	int mx=0;
	int max_len=-1;
	for(int i=1;i<str.size();i++)
	{
		if(i<mx)
			p[i]=min(p[2*id-i],mx-i);
		else
			p[i]=1;
		while(str[i-p[i]]==str[i+p[i]])
			p[i]++;
		if(mx<i+p[i])
		{
			id=i;
			mx=i+p[i];
		}
		max_len=max(max_len,p[i]-1);
	}
	return max_len;
}
int main(){
	string s;
	cin>>s;
	string str=deal_str(s);
	cout<<Manacher(str)<<endl;
	cout<<deal_str(s)<<endl;
	return 0;
}
