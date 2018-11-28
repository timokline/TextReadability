//variables.hpp
//Timothy Albert Kline
//26 September 2018
//Header for sentenceCount, syllableCount, and wordCount

#ifndef VARIABLES_HPP
#define VARIABLES_HPP

#include <string>
using std::string;

//SentenceCount
//This returns the number of sentences in a text file
int sentenceCount(string & filename);

//syllableCount
//this returns the number of syllables in a word.
int syllableCount(string word);

#endif
