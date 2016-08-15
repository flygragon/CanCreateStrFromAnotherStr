// CanCreateStrFromAnotherStr.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include"CanCreateStrFromAnotherStr.h"
using namespace  std;

int main()
{
	string s1, s2;
	cin >> s1 >> s2;
	CanCreateStrFromAnotherStr CCSFAS;
	cout << boolalpha << CCSFAS.canConstruct(s1, s2) <<'\n';
    return 0;
}

