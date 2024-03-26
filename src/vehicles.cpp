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
		cout << "������������ ����������: ����������" << endl;
		cout << "���-�� ����: 4" << endl;
		cout << "������������ ��������: 150��/�" << endl;
	}
};

class Bus : public vehicle {
public:
	void info() {
		cout << "������������ ����������: �������" << endl;
		cout << "���-�� ����: 4" << endl;
		cout << "������������ ��������: 100��/�" << endl;
		cout << "������������ ���-�� ����������: 20" << endl;
	}
};

class Moto : public vehicle {
public:
	void info() {
		cout << "������������ ����������: ��������" << endl;
		cout << "���-�� ����: 2" << endl;
		cout << "������������ ��������: 200��/�" << endl;
	}
};

class Scooter : public vehicle {
public:
	void info() {
		cout << "������������ ����������: ������" << endl;
		cout << "���-�� ����: 2" << endl;
		cout << "������������ ��������: 60��/�" << endl;
	}
};