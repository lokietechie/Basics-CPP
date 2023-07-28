#include<iostream>

using namespace std;

class circle {
	private:
		float radius;
	public:
		float Area()
		{
			cout << "Enter the radius of the circle";
			cin >> radius;
			return (3.14 * (radius * radius));
		}
		float Circumference()
		{
			return (3.14 * 2 * radius);
		}

};

int main()
{
	circle o;
	cout << "Area of the Circle is = " << o.Area()<<endl;
	cout << "Circumference of the Circle is = " << o.Circumference();
	return 0;
}
