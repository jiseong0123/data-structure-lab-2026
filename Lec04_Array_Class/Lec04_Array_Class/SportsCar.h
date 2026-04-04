#pragma once
#include"Car.h"

class SportsCar : public Car {
	
public:
	bool bTurbo;
	SportsCar(int s, const char* n, int g) : Car(s, n, g) {
		bTurbo = false;
	}
	void setTurbo(bool bTur) { bTurbo = bTur; }
	void speedUp() {
		if (bTurbo) speed += 20;
		else Car::speedUp();
	}
};