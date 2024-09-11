#include <iostream>

using namespace std;

class Area {

    public :
        int length, breadth;
        void setData(int, int);
        void dis_area(Area);

};

void Area :: setData(int length, int breadth) {
    this -> length = length;
    this -> breadth = breadth;
}

void Area :: dis_area(Area obj) {
    obj.length = 20;
    cout << "The area of the rectangle is " << obj.length * obj.breadth << endl;
}

int main() {

    Area rectangle;
    rectangle.setData(10, 20);
    rectangle.dis_area(rectangle);
    cout << "Original value of length for the object is " << rectangle.length << endl;

    return 0;

}