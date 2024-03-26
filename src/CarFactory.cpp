#include "CarFactory.h"

void Processing(int& a) {
	
	vehicle* v;

	if (a == 0) {
		AutoFactory* auto_factory = new AutoFactory;
		v = auto_factory->createVehicle();
	}
	else if (a == 1) {
		BusFactory* bus_factory = new BusFactory;
		v = bus_factory->createVehicle();
	}
	else if (a == 2) {
		MotoFactory* moto_factory = new MotoFactory;
		v = moto_factory->createVehicle();
	}
	else if (a == 3) {
		ScooterFactory* scooter_factory = new ScooterFactory;
		v = scooter_factory->createVehicle();
	}

	v->info();
	delete v;
}

void userInput(int& a) {
	if (a >= 0 && a <= 3) {
		Processing(a);
	}
	else {
		cout << "Неизвестный тип транспорта!\n";
	}

}

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	
	for (int i = 1; i < argc; i++){
		int a = atoi(argv[i]);
		userInput(a);
	}
}
