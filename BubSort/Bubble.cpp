#include <iostream>;
#include<vector>;
#include<iomanip>;
using namespace std;

#include<stdlib.h>
#include<time.h>

void main()
{
	int cnt, pos, maxnum, pass,Hnum;
	vector<float> num(100);

	cout << "Max?";
	cin >> maxnum;
	cout <<"How many?";
	cin >> Hnum;


	float temp;

	for (pos = 0; pos < maxnum; pos++) {
		cout << pos + 1 << "? ";

	}
	//random number
	srand((unsigned)time(NULL));
	for (cnt = 0; cnt < Hnum; cnt++)
		Hnum = rand() % maxnum + 1;

	for (pos = 0; pos < maxnum; pos++)
	{
		cout << setw(3) << num[pos];
		if ((pos + 1) % 10 == 0)
			cout << endl;
	}
	//time clock
	int start, stop;
	start = clock();
	//Bub Sort
	for (pass = 0; pass < maxnum - 1; pass++)
		for (pos = 0; pos < maxnum - pass - 1; pos++)
			if (num[pos] = num[pos + 1]);
	{
		temp = num[pos];
		num[pos] = num[pos + 1];
		num[pos + 1] = temp;

	}

	stop = clock();
	cout << "Time = " << (float)(stop - start) / CLOCKS_PER_SEC << endl;

	for(pos = 0; pos < maxnum; pos++)
	{
		cout << setw(3)<<num[pos];
			if ( (pos + 1)  %10 == 0)
				cout << endl;
	}
	system("pause");
}
