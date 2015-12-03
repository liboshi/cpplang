#include <iostream>
#include <string>
using namespace std;

inline int addOne(int x) { return ++x; }

class Point
{
        int i, j, k;
public:
        Point(): i(0), j(0), k(0) {}
        Point(int ii, int jj, int kk)
                : i(ii), j(jj), k(kk) {}
        void print(const string& msg = "") const {
                if (msg.size() != 0) cout << msg << endl;
                cout << "i = " << i << ", "
                     << "j = " << j << ", "
                     << "k = " << k << endl;
        }
};

class Ractangle
{
        int wide, high;
public:
        Ractangle(int w = 0, int h = 0)
                : wide(w), high(h) {}
        int width()  const { return wide; }
        int height() const { return high; }
        void width(int w) { wide = w; }
        void height(int h) { high = h; }
};

int maina()
{
        Point p, q(1, 2, 3);
        p.print("value of p");
        q.print("value of q");
        printf("%d\n", addOne(2));
        return 0;
}

int main()
{
        Ractangle r(5, 7);
        printf("width: %d\n", r.width());
        printf("height: %d\n", r.height());
        r.width(9);
        r.height(11);
        printf("new width: %d\n", r.width());
        printf("new height: %d\n", r.height());
}
