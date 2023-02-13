//#include <bits/stdc++.h>
#include<stdio.h>
//using namespace std;
 
int main() {

	double a, temp;
	int result;
	double notes[12] = {100.0, 50.0, 20.0, 10.0, 5.0, 2.0, 1.0, 0.50, 0.25, 0.10, 0.05, 0.01};
	scanf("%lf", &a);
	//cin >> a;
	a += 0.000000001;
	printf("NOTAS:\n");
	//cout << "NOTAS:" << endl;
	for (int i = 0; i < 6; i++)
	{
		result = a / notes[i];
		temp = a - (result * notes[i]);
		a = temp;
		printf("%d nota(s) de R$ %0.2lf\n", result, notes[i]);
		//cout << result <<" nota(s) de R$ " <<fixed<<setprecision(2)<<notes[i]<< endl;
	}
	printf("MOEDAS:\n");
	//cout << "MOEDAS:" << endl;
	for (int i = 6; i < 12; i++)
	{
		result = a / notes[i];
		temp = a - (result * notes[i]);
		a = temp;
		printf("%d moeda(s) de R$ %0.2lf \n", result, notes[i]);
		//cout << result <<" moeda(s) de R$ " <<fixed<<setprecision(2)<<notes[i]<< endl;
	}

	return 0;
}