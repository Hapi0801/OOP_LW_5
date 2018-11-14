#include <iostream>
#include <clocale>
#include <math.h>

using namespace std;

const double pi = 3.14159;

class Shape {
public:
	virtual void print() = 0; //����� �������� ������
	virtual void area() = 0; //������� ������
	virtual void volume() = 0; //����� ������
};

//����������� ����������� ����� TwoDShape
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
	void volume() {}; //����������� ������� ���������� ������ ������
};

//����������� ����������� ����� ThreeDShape
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
	void area() {} //����������� ������� ���������� ������� ������
};


//����� ����������
class Circle :public TwoDShape {
public:
	//Circle(float r) :TwoDShape(r){}
	Circle() :TwoDShape(r) {}
	void print() {
		cout << "����������" << endl;
	}
	void area() {
		cout << "������� ����������: " << pi*r*r << endl;
	}
};

//����� �������
class Square :public TwoDShape {
public:
	//Square(float r) :TwoDShape(r){}
	Square() :TwoDShape(r) {}
	void print() {
		cout << "�������" << endl;
	}
	void area() {
		cout << "������� ��������: " <<r*r<< endl;
	}
};

//����� �����
class Sphere :public ThreeDShape {
public:
	//Sphere(float h) :ThreeDShape(h){}
	Sphere() :ThreeDShape(h){}
	void print() {
		cout << "�����" << endl;
	}
		void volume() {
			cout << "����� �����: " << (4 * pi*h*h*h) / 3.0 << endl;
		}
};

//����� ���
class Cube :public ThreeDShape {
public:
	//Cube(float h) :ThreeDShape(h){}
	Cube() :ThreeDShape(h){}
	void print() {
		cout << "���" << endl;
	}
	void volume() {
		cout << "����� ����: " << h*h*h << endl;
	}
};

//����� �����������
//class Tringle :public TwoDShape, public ThreeDShape {
//public:
//	Tringle(float r, float h) :TwoDShape(r), ThreeDShape(h){}
//	void print() {
//		cout << "�����������" << endl;
//	}
//	void area() {
//		cout << "������� ������������: " << (r*h) / 2 << endl;
//	}
//};

//////////////////////////////////////////////////////////////////////////
//���������� ��� ����� ���� ���������� �������������

//����������� ����������� ����� TwoDShape
//class TwoDShape : public Shape {
//protected:
//	float r;
//public:
//	TwoDShape(float r) {}
//	float getRInfo();
//	virtual void area() = 0;
//	void volume() {}; //����������� ������� ���������� ������ ������
//};