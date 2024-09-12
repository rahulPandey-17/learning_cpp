#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

class Point {

    int x, y;

    public :
        Point(int, int);
        void displayPoint();
        static float calc_distance(Point, Point);

};

// constructor

Point :: Point(int x, int y) {
    this -> x = x;
    this -> y = y;
}

void Point :: displayPoint() {
    cout << "The point is (" << x << ", " << y << ")" << endl;
}

float Point :: calc_distance(Point p, Point q) {
    float distance = sqrt((pow((q.x - p.x), 2)) + (pow((q.y - p.y), 2)));
    return distance;
}

int main() {

    Point p(3, 2);
    p.displayPoint();

    Point q(9, 7);
    q.displayPoint();

    cout << "The distance between the two points is " << setprecision(2) << Point :: calc_distance(p, q) << " units" << endl;  

    return 0;

}