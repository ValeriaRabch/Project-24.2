#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Point {
	char x[5], y[5], z[5];
public:
	Point() {
		strcpy(x, "");
		strcpy(y, "");
		strcpy(z, "");
	}
	void SetX(char* _x) {
		strcpy(x, _x);
	}
	void SetY(char* _y) {
		strcpy(y, _y);
	}
	void SetZ(char* _z) {
		strcpy(z, _z);
	}
	char* GetX() {
		return x;
	}
	char* GetY() {
		return y;
	}
	char* GetZ() {
		return z;
	}
	void Print() {
		cout << "X - " << x << endl;
		cout << "Y - " << y << endl;
		cout << "Z - " << z << endl;
	}
};

void AddFile(char* link, Point a) {
	FILE* f;
	f = fopen(link, "w");

	fprintf(f, a.GetX());
	fprintf(f, "\n");
	fprintf(f, a.GetY());
	fprintf(f, "\n");
	fprintf(f, a.GetZ());
	fprintf(f, "\n");

	fclose(f);
}

Point FromFile(char* link, Point a) {
	FILE* f;
	f = fopen(link, "r");

	char b[4];
	fscanf(f, "%s", b);
	a.SetX(b);

	fscanf(f, "%s", b);
	a.SetY(b);

	fscanf(f, "%s", b);
	a.SetZ(b);

	fclose(f);
	return a;
}

int main() {
	char link[] = {"d:\\Valeria\\file.txt"};
	Point point;
	char x[5], y[5], z[5];

	cout << "Enter x "; cin >> x;
	cout << "Enter y "; cin >> y;
	cout << "Enter z "; cin >> z;

	point.SetX(x); point.SetY(y); point.SetZ(z);
	AddFile(link, point);
	FromFile(link, point);

	return 0;
}