#include <string>
#include <iostream>
using namespace std;
class Car
{
	static int count;
	int mileage, id;
	string name;

public:
	Car(void);
	Car(string name);
	void Setname(string n) { name = n; };
	~Car()
	{

	}

	int GetId()
	{
		return id;
	}


	friend void Print(Car& value);
	friend class STO;
};

