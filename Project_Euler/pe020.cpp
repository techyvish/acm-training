#include<iostream>
#include<cmath>

using namespace std;

int a[200]={0};

int multiply(int x, int l1)
{
	int l=l1;
	if (x==0)
	{
		l=0;
		a[0]=0;
		return l;
	}
	a[0]=a[0]*x;
	for (int i=1;i<=l;i++)
	{
		a[i]=a[i]*x;
		a[i]=a[i]+a[i-1]/10;
		a[i-1]=a[i-1]%10;
	}
	while (a[l]>=10)
	{
		l++;
		a[l]=a[l-1]/10;
		a[l-1]=a[l-1]%10;
	}

	return l;
}

int main(void)
{
	a[0]=1;
	int l=1;
	for (int i=2;i<=100;i++)
	{
		l=multiply(i,l);
	}

	int sum=0;
	for (int i=0;i<=l;i++)
		sum+=a[i];

	cout << sum << endl;

	cin >> sum;

	return 0;
}