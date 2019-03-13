#include <iostream>

using namespace std;
int main()
{

	int n;
	cout<<"Введите кол-во элментов:";
	cin>>n;
	int a[n];
	cout<<"Введите числа:";
	for(int i=0; i<n; i++) {
		cin>>a[i];
	}
	int sum=0;
	for(int i=0; i<n; i++) {
		cout<<a[i];
		if (a[i]==0)
			break;
		if (a[i] > 0)
			sum = sum + a[i];
	}
	
cout<<"\nСумма положительных чисел = "<< sum;
	return 0;
}
