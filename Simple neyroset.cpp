#include <iostream>
#include <cmath>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctime>

using namespace std;

int main(){
	double x[3] = {0.5, 1.0, 0.7};
	double weights[3] = {0.4, 0.7, 0.5};
	double sigmoid = (1 / (1 + pow(2.71828, -sigmoid)));
	double y;
	for (int i; i < 2; ++i) {
		y = sigmoid * ((x[i] * weights[1]) + weights[2]);
	}
	double output = x[0] * weights[0] + x[1] * weights[1] + x[2] * weights[2] + y;
	output = (1 / (1 + pow(2.71828, -output)));
	if (output >= 0.8) {
		cout << "Otvet 1" << endl;
	}
	else {
		cout << "Otvet 0" << endl;
	}
	cout << output << " Offset: " << y << endl;
	system("pause");
}