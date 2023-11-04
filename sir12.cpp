// #include<iostream>
// using namespace std;
// class area{
//     private:
//     double length;
//     double breadth;
//     public:
//     area(double l , double b){
//         length=l;
//         breadth=b;
//     }
//     double returnarea(){
//         return length*breadth;
//     }
// };
// int main(){
//     double l,b;
//     cout<<"enter length";
//     cin>>l;
//     cout<<"enter b";
//     cin>>b;
// area rectangle(l,b);
// double ara=rectangle.returnarea();
// cout<<ara<<endl;

// }
#include <iostream>
#include <cmath>
using namespace std;

class Triangle {
private:
    double side1;
    double side2;
    double side3;

public:
    // Constructor to initialize the sides of the triangle
    Triangle(double s1, double s2, double s3) {
        side1 = s1;
        side2 = s2;
        side3 = s3;
    }

    // Function to calculate and return the area of the triangle
    double calculateArea() {
        double s = (side1 + side2 + side3) / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }

    // Function to calculate and return the perimeter of the triangle
    double calculatePerimeter() {
        return side1 + side2 + side3;
    }
};

int main() {
    double side1 = 3;
    double side2 = 4;
    double side3 = 5;

    // Create an object of the 'Triangle' class
    Triangle triangle(side1, side2, side3);

    // Calculate and print the area and perimeter of the triangle
    double area = triangle.calculateArea();
    double perimeter = triangle.calculatePerimeter();

    cout << "Area of the triangle: " << area << " square units" << endl;
    cout << "Perimeter of the triangle: " << perimeter << " units" << endl;

    return 0;
}
