#include <string>
#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <sstream>

using namespace std;

int main()
{
	string firstString = "First String";
	string secondString = "Second String";
	cout << firstString << endl << secondString << endl;

	secondString = firstString;
	cout << firstString << endl << secondString << endl;


	//Ввод без пробелов
	/*cin >> firstString;
	cout << firstString << endl;
	//Очистка буфера от лишних символов
	cin.ignore(INT_MAX,'\n');
	cout << "Enter entered" << endl;*/
	
	//Ввод с пробелами
	getline(cin, firstString);
	cout << firstString << endl;

	getline(cin, secondString);

	if (firstString == secondString)
	{
		cout << "Thees strings are equal" << endl;
	}
	else if(firstString>secondString)
	{
		cout << "firstString is greater than secondString" << endl;
	}
	else if (firstString < secondString)
	{
		cout << "secondString is greater than firstString" << endl;
	}
	else
	{
		cout << "I don't know" << endl;
	}

	for (int i = 0;i < firstString.length();i++)
	{
		cout << firstString[i] << endl;
	}

	//Получение массива символов (как в С)
	firstString.c_str();

	//Проверка на пустоту. True - пустая строка
	//firstString.empty();

	cout << firstString.length() << endl << firstString.capacity() << endl;
	firstString.shrink_to_fit();
	cout << firstString.length() << endl << firstString.capacity() << endl;

	firstString = "ADEBC DEF";
	cout << firstString << endl;
	cout << firstString.substr(firstString.find("DE")) << endl;

#ifdef UNICODE
	typedef std::wostringstream tstringstream;
#else
	typedef std::ostringstream tstringstream;
#endif

	int var = 123;
	tstringstream stros;
	stros << var;
	cl

	MessageBox(NULL, stros.str().c_str() , L"SomeCaption", MB_OK);

	_getch();
	return 0;
}