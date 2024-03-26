#include "vehicleFactory.h"

class Factory
{
public:
	virtual vehicle* createVehicle() = 0;
	virtual ~Factory() {}
};

class AutoFactory : public Factory
{
public:
	vehicle* createVehicle() {
		return new Auto;
	}
};

class BusFactory : public Factory
{
public:
	vehicle* createVehicle() {
		return new Bus;
	}
};

class MotoFactory : public Factory
{
public:
	vehicle* createVehicle() {
		return new Moto;
	}
};

class ScooterFactory : public Factory
{
public:
	vehicle* createVehicle() {
		return new Scooter;
	}
};