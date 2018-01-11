/*
Написать программу вывода цены ( есть пример работы программы)
*/

#include <iostream>
using namespace std;
void main() {
	setlocale(LC_ALL, "rus");
	double price, cost; //price - Цена за килограмм, cost - Стоимость веса
	const int SPAN = 100; //Диапазон 
	const int LOWWEIGHT = 100;// минимальный вес
	const int HIGHWEIGHT = 1000;// Максимальный вес
	const int STANDARD = 1000;// Сколько в кг грамм
	do {
		cout << "Введите цену одного килограмма и нажмите <Enter> " << endl;
		cout << "(копейки от рублей отделяйте точкой)-> ";
		cin >> price;
		if (price < 0) cout << "Вы ввели недопустимую цену! Попробуйте еще раз.\n";
	} while (price < 0);
	cout << "Вес (гр) Стоимоть (руб.) " << endl;	
	for (int i = LOWWEIGHT; i <= HIGHWEIGHT; i += SPAN) {
		cout << i << "\t\t";
		double tmp= price*i / STANDARD;
		printf("%.2f\n", tmp);

	}
	system("pause");
}
