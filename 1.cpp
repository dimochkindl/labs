#include <iostream>
#include <string>
#include "Car.h"
using namespace std;


void Print(Car& value)
{
	cout << "Id: " << value.id << endl;
	cout << "Mileage: " << value.mileage << endl;
	cout << "Owner's name: " << value.name << endl;
	cout << "--------------------------" << endl;
}


int Car::count = 0;


class STO
{

public:
	void SetMileage(Car& value, int mil)
	{
		if (mil < 0)
		{
			cout << "Wrong mileage" << endl;
			int k;
			do
			{
				cout << "Enter the mileage again: ";
				cin >> k;
			} while (k < 0);
			value.mileage = k;
		}
		else { value.mileage = mil; };
	}
};


Car::Car(string name)
{
	count++;
	id = count;
	this->name = name;
	mileage = 0;
}


Car::Car(void)
{
	count++;
	id = count;
	name = ' ';
	mileage = 0;
}

int main()
{
	int l;
	Car car1("Tom Tim Tam");
	Car car2;
	car2.Setname("Detroit Ranger Tom");

	Print(car1);
	Print(car2);

	STO car;
	cout << "Enter the mileage of " << car1.GetId() << " car: ";
	cin >> l;
	car.SetMileage(car1, l);

	cout << "Enter the mileage of " << car2.GetId() << " car: ";
	cin >> l;
	car.SetMileage(car2, l);

	Print(car1);
	Print(car2);
	cout << endl << endl << endl;


	//Массив
	int n;
	cout << "Enter number of cars: ";
	cin >> n;
	Car* cars = new Car[n];
	for (int i = 0; i < n; i++)
	{
		string name;
		int mileage;
		cout << "Enter the owner's name: ";
		cin.ignore();
		getline(std::cin,name);
		cars[i].Setname(name);
		cout << "Set mileage: ";
		cin >> mileage;
		car.SetMileage(cars[i], mileage);
	}


	cout << endl << endl << endl << "Information of array:" << endl << endl;
	for (int i = 0; i < n; i++)
	{
		Print(cars[i]);
	}

	delete& car1, & car2, &car;
	delete [] cars;
	return 0;

}