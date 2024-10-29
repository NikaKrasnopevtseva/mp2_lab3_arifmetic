#pragma once
#ifndef _Arifm_H_
#define _Arifm_H_

#include <iostream>
#include <string>
using namespace std;
//Type: 1 - number, 2 - variable, 3 - operation, 4 - parenthesis
class Lexema {
	int length;
	int Type;
	double number;
	char name;
public:
	Lexema() : length(0), Type(0), number(0) {}
	Lexema(int l,int t,double num,char name) {

	}
	void PrintName() {
		cout << name << endl;
	}
	char GetName() { return name; }
	double GetNumber() { return number; }
	void SetNumber(double a) { number = a; }
	int GetLength() { return length; }
	void SetLength(int i) { length = i; }
	int GetType() { return Type; }
	void SetType(int i) { Type = i; }
	void SetChar(char a) { name = a; }
};


#endif
