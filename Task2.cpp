/*Подсчитать количество целых чисел в диапазоне от 100 
до 999, у которых есть две (или более) одинаковые цифры*/

#include <iostream>
using namespace std;
void main() {
	setlocale(LC_ALL, "rus");
	int num, countOfNumber=0;
	const int LOW = 100, HIGH = 999;
	for (int i = LOW, first, second, three; i <= HIGH; i ++ ) {
		three = i % 10;
		second = (i % 100 - three) / 10;
		first = (i - second * 10 - three) / 100;
		if (three == second || three == first || second == first) countOfNumber++;
	}
	cout << "Количество чисел с повторяющимися цифрами " << countOfNumber << endl;
	system("pause");
}
