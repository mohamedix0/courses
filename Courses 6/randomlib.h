#pragma once
#include <iostream>
#include <cmath>
#include <string>
#include <limits>
#include <cstdlib>
#include <utility>
#include <iomanip>
using namespace std;
enum enCharType { SmallLetter = 1, CapitalLetter, SpecialChar, Digit };

int RandomNumber(int from, int to)
	{
		return rand() % (to - from + 1) + from;
	}
char GetRandomCharacter(enCharType order)
	{
		switch (order)
		{
		case enCharType::SmallLetter:
			return char(RandomNumber(97, 122));
		case enCharType::CapitalLetter:
			return char(RandomNumber(65, 90));
		case enCharType::SpecialChar:
			return char(RandomNumber(33, 42));
		case enCharType::Digit:
			return char(RandomNumber(0, 9));
		}
	}
string GenerateWord(enCharType charType, int length)
	{
		string key = "";
		for (int i = 1; i <= length; i++)
		{
			key += GetRandomCharacter(charType);
		}
		return key;
	}
string GenerateKey()
	{
		string key = "";
		for (int i = 1; i <= 4; i++)
		{
			key += GenerateWord(enCharType::CapitalLetter, 4);
			if (i != 4) key += "-";
		}
		return key;
	}

