#include<iostream>
using namespace std;

const double PI = 3.14159;
const double FENCE_PRICE = 35;
const double CONCRETE_PRICE = 20;

class Circle {
public:
	Circle(float r);
	double circumference();
	double area();
private:
	double radius;
};
Circle::Circle(float r)
{
	radius = r;
}
double Circle::circumference() {
	return 2 * PI * radius;
}
double Circle::area() {
	return PI * radius * radius;
}
int main()
{
	double r;
	cout << "enter the radius of the pool:";
	cin >> r;

	Circle pool(r);
	Circle poolRim(r + 3);
	double fenceCost = poolRim.circumference() * FENCE_PRICE;
	double concreteCost = (poolRim.area() - pool.area()) * CONCRETE_PRICE;
	cout << "fencing cost is $" << fenceCost<<endl;
	cout << "concreting cost is $" << concreteCost << endl;
	return 0;
}
