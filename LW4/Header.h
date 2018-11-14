#include <iostream>
#include <clocale>
#include <math.h>

using namespace std;

const double pi = 3.14159;

class Shape {
public:
	virtual void print() = 0; //вывод названия фигуры
	virtual void area() = 0; //площадь фигуры
	virtual void volume() = 0; //объем фигуры
};

//абстрактный производный класс TwoDShape
class TwoDShape : public Shape {
protected:
	float r;
public:
	//TwoDShape(float r1) {
	//	r=r1;
	//}
	TwoDShape(float r) {}
	float getRadInfo();
	virtual void area() = 0;
	void volume() {}; //определение функции вычисления объема фигуры
};

//абстрактный производный класс ThreeDShape
class ThreeDShape :public Shape {
protected:
	float h;
public:
	//ThreeDShape(float h1){
	//	h=h1;
	//}
	ThreeDShape(float h){}
	float getHeightInfo();
	virtual void volume() = 0;
	void area() {} //определение функции вычисления площади фигуры
};


//класс окружность
class Circle :public TwoDShape {
public:
	//Circle(float r) :TwoDShape(r){}
	Circle() :TwoDShape(r) {}
	void print() {
		cout << "Окружность" << endl;
	}
	void area() {
		cout << "Площадь окружности: " << pi*r*r << endl;
	}
};

//класс квадрат
class Square :public TwoDShape {
public:
	//Square(float r) :TwoDShape(r){}
	Square() :TwoDShape(r) {}
	void print() {
		cout << "Квадрат" << endl;
	}
	void area() {
		cout << "Площадь квадрата: " <<r*r<< endl;
	}
};

//класс сфера
class Sphere :public ThreeDShape {
public:
	//Sphere(float h) :ThreeDShape(h){}
	Sphere() :ThreeDShape(h){}
	void print() {
		cout << "Сфера" << endl;
	}
		void volume() {
			cout << "Объем сферы: " << (4 * pi*h*h*h) / 3.0 << endl;
		}
};

//класс куб
class Cube :public ThreeDShape {
public:
	//Cube(float h) :ThreeDShape(h){}
	Cube() :ThreeDShape(h){}
	void print() {
		cout << "Куб" << endl;
	}
	void volume() {
		cout << "Объем куба: " << h*h*h << endl;
	}
};

//класс треугольник
//class Tringle :public TwoDShape, public ThreeDShape {
//public:
//	Tringle(float r, float h) :TwoDShape(r), ThreeDShape(h){}
//	void print() {
//		cout << "Треугольник" << endl;
//	}
//	void area() {
//		cout << "Площадт треугольника: " << (r*h) / 2 << endl;
//	}
//};

//////////////////////////////////////////////////////////////////////////
//реализация при вводе всех параметров пользователем

//абстрактный производный класс TwoDShape
//class TwoDShape : public Shape {
//protected:
//	float r;
//public:
//	TwoDShape(float r) {}
//	float getRInfo();
//	virtual void area() = 0;
//	void volume() {}; //определение функции вычисления объема фигуры
//};