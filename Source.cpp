#define _CRT_SECURE_NO_WARNINGS_
#include<iostream>
using namespace std;

class Point {
	float x, y, z;
public:
	Point() {
		x = 0;
		y = 0;
		z = 0;
	}
	void SetX(float _x) {
		x = _x;
	}
	void SetY(float _y) {
		y = _y;
	}
	void SetZ(float _z) {
		z = _z;
	}
	float GetX() {
		return x;
	}
	float GetY() {
		return y;
	}
	float GetZ() {
		return z;
	}
	void Print() {
		cout << "X - " << x << endl;
		cout << "Y - " << y << endl;
		cout << "Z - " << z << endl;
	}
};

int main() {
	char link[] = {"d:\\Valeria\\file.txt"};
	Point point;
	float x, y, z;

	cout << "Enter x "; cin >> x;
	cout << "Enter y "; cin >> y;
	cout << "Enter z "; cin >> z;

	point.SetX(x); point.SetY(y); point.SetZ(z);

	return 0;
}