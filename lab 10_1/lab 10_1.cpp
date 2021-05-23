#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <string>


using namespace std;

bool checkTXT(const char* fname);


int main()
{
	char fname[6] = "t.txt";
	if (checkTXT(fname)) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
}

bool checkTXT(const char* fname)
{
	ifstream fin(fname);  // відкриття файлу
	char symbol, check;
	int k = 0; // оголошення лічильника
	if (!fin.eof())	{ // провірка чи файл закінчився
		check = fin.get(); // отримання першої букви
	}
	while (!fin.eof()) { 
		symbol = fin.get();
		if (symbol == check) { // перевірка на однакові літери
			k++; // збільшення лічильника
			if (k == 3) { // оскільки перший символ також рахується, тут провіряється на 3, але по факту - 4.
				fin.close();
				return true;
			}
		}
		else {
			check = symbol; // просування вперед
			k = 0; // збивання лічильника
		}
	}
	fin.close();
	return false;
}
