#include "Header.h"

int main() {
	setlocale(LC_ALL, "rus");
	Shape *ptr[4];
	Circle okr;
	cout << "������� r ��� ������ ������� �����" << endl;
	okr.getRadInfo();
	Square sq; 
	cout << "������� r ��� ������ ������� ��������" << endl;
	sq.getRadInfo();
	Sphere sp;
	cout << "������� h ��� ������ ������ �����" << endl;
	sp.getHeightInfo();
	Cube cb;
	cout << "������� h ��� ������ ������ ����" << endl;
	cb.getHeightInfo();
	ptr[0] = &okr;
	ptr[1] = &sq;
	ptr[2] = &sp;
	ptr[3] = &cb; 
	system("cls");
	for (int i = 0; i < 4; i++) {
		ptr[i]->print();
		ptr[i]->area();
		ptr[i]->volume();
	}
	
	//Shape *ptr;
	//Circle okr;
	//okr.getRadInfo();
	//ptr = &okr;
	//ptr->print();
	//ptr->area();
	system("pause");
	return 0;
}