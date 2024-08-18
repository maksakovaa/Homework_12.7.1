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
	if (lenStr % k != 0) //Обработка иисключения когда количество символов не кратно K
		return false;
	string pattern = str.substr(0, k);

	for (int i = k; i < lenStr; i+=k)
	{
		if (str.substr(i, k) != pattern) //Если следующий паттерн не соответствует эталонному дальнейшая проверка не имеет смысла.
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