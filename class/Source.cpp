#include <iostream>

using namespace std;

class Point {
private:
	int x;
	int _y;
public:
	Point() {
		cout << "Point (" << x << ", " << _y << ")constracted" << endl;
	};
	Point(int x, int y) {
		this->x = x;
		_y = y;
		cout << "Point (" << x << ", " << _y << ")constracted" << endl;
	}
	~Point() {
		cout << "Point (" << x << ", " << _y << ")destroyed" << endl;
	};

	int getX() { return x; }
	int getY() { return _y; }
	void setX(int x) { this-> x = x; }
	void setY(int y) { _y = y; }
	void toString() {
		cout << "(" << x << "," << _y << ")" << endl;
	}
};
struct Point2 {
	int x;
private:
 };



int main() {
	Point A(1, 2);
	Point C;
	A.toString();
	C.toString();
	A.getX();
	A.setX(10);
	A.setY(20);
	cout << A.getX() << endl;
	cout << A.getY() << endl;
	A.toString();
}
