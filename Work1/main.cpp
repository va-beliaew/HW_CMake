#include <iostream>
#include <windows.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	string name;
	cout << "������� ���: ";
	cin >> name;
	cout << "������������, " << name << "!\n";
	system("pause");
	return 0;
}