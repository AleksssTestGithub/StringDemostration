#include <string.h>
#include <stdlib.h>
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	char firstString[21] = "First String";
	//firstString = "AnotherFirstString"; - не работает

	//ѕрисвоение
	//strcpy(firstString, "Another First String");
	strcpy_s(firstString, sizeof firstString, "Another Second Strin");
	cout << firstString << endl;

	//_strupr(firstString);
	//cout << firstString << endl;
	cout << strlen(firstString)<<endl;
	
	cout << strcmp("Papa", "PAPA")<<endl;
	cout << _strcmpi("Papa", "PAPA")<<endl;

	char Number[40] = "12a4";
	int result = atoi(Number);
	double result2 = atof("12.4");
	cout << result << endl<<result2<<endl;

	//ѕеревод из числа в строку
	_itoa(1234, Number, 53);
	cout << Number<<endl;

	//соединение строк
	strcat(Number, firstString);
	cout << Number<<endl;

	//поиск подстроки в строке
	char fStr[] = "Sec";
	cout<<strstr(Number, fStr)<<endl;

	char newStr[100];
	strncpy_s(newStr, strstr(Number,fStr), 3);
	cout << newStr << endl;
	_getch();
	return 0;
}