#include <iostream>
#include <string>
using namespace std;

static bool isKPeriodic(const string& str, const int k)
{
	int lenStr = str.length(); //длина строки
	if (lenStr == 0) //Проверка входных данных
		return false;
	if (k == 0) //Проверка входных данных
		return false;
	if (k == 1) //Обработка исключения когда K=1.
		return true;
	if (lenStr % k != 0) //Обработка иисключения когда количество символов не кратно K
		return false;

	int lenPat = lenStr / k; //длина паттерна
	string pattern = str.substr(0, lenPat);

	for (int i = lenPat; i < lenStr; i+=lenPat)
	{
		if (str.substr(i, lenPat) != pattern) //Если следующий паттерн не соответствует эталонному дальнейшая проверка не имеет смысла.
		{
			return false;
		}
	}
	return true;
}

int main()
{
	cout << "Enter string:" << endl;
	string str = "";
	getline(cin, str);

	cout << "Enter K (multiplicity) for string to check:" << endl;
	int k = 0;
	cin >> k;

	cout << "Check result for string: \"" << str << "\" and multiplicity: \"" << k << "\": " << isKPeriodic(str, k) << endl;

	return 0;
}