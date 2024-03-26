#include "vehicles.h"

using namespace std;

class vehicle {
public: 
	virtual void info() = 0;
	virtual ~vehicle() {}
};

class Auto : public vehicle {
public:
	void info() {
		cout << "Наименование транспорта: Автомобиль" << endl;
		cout << "Кол-во колёс: 4" << endl;
		cout << "Максимальная скорость: 150км/ч" << endl;
	}
};

class Bus : public vehicle {
public:
	void info() {
		cout << "Наименование транспорта: Автобус" << endl;
		cout << "Кол-во колёс: 4" << endl;
		cout << "Максимальная скорость: 100км/ч" << endl;
		cout << "Максимальное кол-во пассажиров: 20" << endl;
	}
};

class Moto : public vehicle {
public:
	void info() {
		cout << "Наименование транспорта: Мотоцикл" << endl;
		cout << "Кол-во колёс: 2" << endl;
		cout << "Максимальная скорость: 200км/ч" << endl;
	}
};

class Scooter : public vehicle {
public:
	void info() {
		cout << "Наименование транспорта: Скутер" << endl;
		cout << "Кол-во колёс: 2" << endl;
		cout << "Максимальная скорость: 60км/ч" << endl;
	}
};