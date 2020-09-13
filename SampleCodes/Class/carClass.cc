/*
	File name: carClass.cc
	Author: Geun-Hyung Kim
*/

#include <iostream>
using namespace std;

class Car
{
	int num;
	double gas;
public:
	Car(int n = 2271, double g = 555.9);
	int getNum(){return num;} // 인라인 함수
	double getGas() {return gas;} // 인라인 함수
	void show();
};

Car::Car(int n, double g) : num(n), gas(g) {}

void Car::show() {
	cout << "Number: " << num << endl;
	cout << "Gas: " << gas << endl;
}

int main(int argc, char const *argv[])
{
	Car h;
	h.show();
	return 0;
}