#include <iostream>

using namespace std;

class Box {
public:
        Box(double l = 2.0, double b = 2.0, double h = 2.0) {
                cout << "Constructor..." << endl;
                length = l;
                breadth = b;
                height = h;
        }

        double volume() {
                return length * breadth * height;
        }

        int compare(Box box) {
                return this->volume() > box.volume();
        }

private:
        double length;
        double breadth;
        double height;
};

int main() {
        Box box1(3.3, 1.2, 1.5);
        Box box2(8.5, 6.0, 2.0);

        if (box1.compare(box2)) {
                cout << "box2 is smaller than box1" << endl;
        } else {
                cout << "box2 is equal to or larger than box1" << endl;
        }
        return 0;
}
