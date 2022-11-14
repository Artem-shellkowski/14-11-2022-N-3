//N 1
/*
#include<iostream>
#include<ctime>
using namespace std;
int  main()
{
	int sum = 0;
	const int a = 12;
	int mas[a];
	srand(time(nullptr));
	for (int i = 0; i < a; i++) {
		mas[i] = rand() % 11 - 5;
		sum += mas[i];
	}
	cout << sum << endl;
}
*/

//N 2
/*
#include<iostream>
#include<ctime>
using namespace std;
int  main()
{
	int sum = 0;
	const int a = 13;
	int mas[a];
	srand(time(nullptr));
	for (int i = 0; i < a; i++) {
		mas[i] = rand() % 25 - 12;
		if(mas[i] < 0)
		sum *= mas[i];
	}
	cout << sum << endl;
}
*/
//N 3
/*
#include<iostream>
#include<ctime>
using namespace std;
int  main()
{
	int sum = 0;
	const int a = 11;
	int mas[a];
	srand(time(nullptr));
	for (int i = 0; i < a; i++) {
		mas[i] = rand() % 21;
		if(mas[i] % 3 != 0 || mas[i] % 5 != 0 || mas[i] % 7 != 0)
		sum++;
	}
	cout << sum << endl;
}
*/
//N 4
/*
#include<iostream>
#include<ctime>
using namespace std;
int  main()
{
	int sum = 0;
	const int a = 15;
	int mas[a];
	srand(time(nullptr));
	for (int i = 0; i < a; i++) {
		mas[i] = rand() % 26;
		if(mas[i] % 2 != 0 )
		sum += mas[i];
	}
	cout << sum << endl;
}
*/

