// testFileC_2017.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	Calculator calculator;
	cout << "1 + 2 = " << calculator.add(1, 2) << endl;
	cout << "2 - 1 = " << calculator.sub(2, 1) << endl;
	system("pause");
	return 0;
}

