#include<iostream>

using namespace std;

class student {
private:
	string name;
	int age;

public:
	void getData()
	{
		cout << "Enter the Name and Age= ";
		cin >> name;
		cin >> age;
	}
	void display()
	{
		cout << "Name : " << name<<endl;
		cout << "Age : " << age;
	}
};


int main()
{
	student o;
	o.getData();
	o.display();
	return 0;
}
