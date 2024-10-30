#pragma once
#ifndef _Arifm_H_
#define _Arifm_H_

#include <iostream>
#include <string>
#include <cctype>
using namespace std;
bool containsChar(char arr[], char ch, int size) {
	for (int i = 0; i < size; ++i) {
		if (arr[i] == ch) {
			return 1; // Символ найден
		}
	}
	return 0; // Символ не найден
}
//Type: 1 - operation, 2 - variable, 3 - number , 4 - function
char signs[] = {'(',')','+','-','*','/'};

class Lexema {
	string str;
	int type;
	double number; //храним числа и храним занчение переменной
public:
	Lexema(string s, int t) {
		str = s;
		type = t;
		if (type == 2)
			number = stod(s, nullptr);
	}
	void PrintStr() {
		cout << str << endl;
	}
	string GetName() { return str; }
	void SetName(string name) { str = name; }
	double GetNumber() { return number; }
	void SetNumber(double a) { number = a; }
	int GetType(char c) { 
		if (isalpha(c)) return 1;
		else if ((isdigit(c)) || (c == ',')) return 2;
		else if (containsChar(signs,c,6)) return 3;
		else return -1;
	}
	void SetType(int i) { type = i; }
};

class Arifmetic {
	string inputstr;
	vector <Lexema> input;
	vector <Lexema> postfix;
	string postfixstr;
public:
	Arifmetic(string str) //конструктор
	{

	}
	void GoToLexems(string str) //делим строку на лексемы (получаем vector <Lexema> input)
	{

	}
	void GoToPostfix(string str) //делаем постфиксную запись (получаем vector <Lexema> postfix)
	{

	}
	void GoToPostfixStr(string str) //делаем постфиксную запись (получаем string postfixstr)
	{

	}
	double Calculate() //по постфиксной записи вычисляем выражение
	{

	}
	void GetValues() //
	{

	}
};


#endif
