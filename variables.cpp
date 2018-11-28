//variables.cpp
//Timothy Albert Kline
//24 October 2018
//Syllable count

#include "variables.hpp";
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <string>
using std::getline;
//#include <fstream>
//using std::ifstream;

int syllableCount(string line)
{

	const string vowels = "aeiouy";
	int syllables = 0;
	bool prevIsVowel = false;
	for (char c : word)
	{
		bool isVowel = false;
		for (char v : vowels)
		{
			if ((v == c) && prevIsVowel)
			{
				isVowel = true;
				prevIsVowel = true;
				break;
			}
			else if (v == c && !prevIsVowel)
			{
				++syllables;
				isVowel = true;
				prevIsVowel = true;
				break;
			}
		}
		// If full cycle and no vowel found, set lastWasVowel to false;
		if (!isVowel)
			prevIsVowel = false;
	}
	return syllables;
}

int sentenceCount(string & line)
{
	const string punct = ".?!";
	int sentences = 0;
	bool end = false;
	for (char c : line)
	{
		for (char p : punct)
		{
			if (c == p)
			{
				++sentences;
				break;
			}
		}
	}
	return sentences;
}
