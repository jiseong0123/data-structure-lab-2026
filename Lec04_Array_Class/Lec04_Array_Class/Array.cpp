#include "Complex.h"
#include "Polynomial.h"
#include "Car.h"
#include "SportsCar.h"

#include<clocale>
#include<cstdio>

int find_max_brightness() {
	int image[8][8] = {
		{10, 30, 50, 80, 110, 140, 180, 230},
		{20, 45, 70, 100, 130, 160, 210, 250},
		{35, 60, 90, 120, 150, 190, 220, 240},
		{50, 85, 115, 145, 175, 210, 235, 255},
		{40, 65, 100, 140, 175, 215, 230, 250},
		{25, 50, 80, 115, 155, 185, 210, 230},
		{15, 35, 60, 90, 110, 140, 160, 185},
		{5, 20, 40, 70, 95, 120, 140, 160}
	};
	int max_val = image[0][0];

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (image[i][j] > max_val) {
				max_val = image[i][j];
			}
		}
	}
	return max_val;
}

int main()
{
	setlocale(LC_ALL, "KOREAN");
	Complex a, b, c;
	a.read("A = ");
	b.read("B = ");
	c.add(a, b);
	a.print("A = ");
	b.print("B = ");
	c.print("A+B = ");
	printf("===============================================\n");

	Polynomial d, e, f;
	d.read();
	e.read();
	f.add(d, e);
	d.display("A = ");
	e.display("B = ");
	f.display("A+B  ");
	printf("===============================================\n");

	SportsCar myCar(0, "페라리", 1);
	printf("---초기 상태 ---\n");
	myCar.display();

	printf("\n---터보 OFF 가속 (기본 +5) --- \n");
	myCar.setTurbo(false);
	myCar.speedUp();
	myCar.display();

	printf("\n---터보 ON 가속 (터보 +20) ---\n");
	myCar.setTurbo(true);
	myCar.speedUp();
	myCar.display();

	printf("\n--- 기어 변경 (3단) --- \n");
	myCar.changeGear(3);
	myCar.speedUp();
	myCar.display();

	printf("\n --- 객체 주소 확인 --- \n");
	myCar.whereAmI();

	printf("===============================================\n");

	printf("\n[Homework 1] 이미지 최대 밝기: %d\n", find_max_brightness());

	return 0;
}
