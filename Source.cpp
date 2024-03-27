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
	void SetX(float _z) {
		z = _z;
	}
	float GetX() {
		return x;
	}
	float GetY() {
		return y;
	}
};

int main() {

	return 0;
}