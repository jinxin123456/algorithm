#include<iostream>  
using namespace std;

void FindMin(int money, int *coin, int n)
{
	int *coinNum = new int[money + 1]();
	int *coinValue = new int[money + 1](); 
	coinNum[0] = 0;

	for (int i = 1; i <= money; i++)
	{
		int minNum = i;  
		int usedMoney = 0;
		for (int j = 0; j<n; j++)
		{
			if (i >= coin[j])  
			{

			}
		}
		coinNum[i] = minNum;
		coinValue[i] = usedMoney;
	}


	if (coinValue[money] == 0)
		cout << "-1" << endl;
	else
	{
		cout  << coinNum[money] << endl;
		while (money>0)
		{
			cout << coinValue[money] << ",";
			money -= coinValue[money];
		}
	}
	delete[]coinNum;
	delete[]coinValue;
}
int main()
{
	int money;
	cin >> money;
	int coin[] = { 1, 2, 5, 10 };
	FindMin(money, coin, 4);
	system("pause");
}
