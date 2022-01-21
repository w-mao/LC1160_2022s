// Assignment #1, CPSC 1160
// Describe what the code is doing in your own words.
// by #your name here#
// 3 points for comments

#include <iostream>
#include <fstream>
#include <sstream> //std::stringstream

using namespace std;

/*
 * Comments here
 */
char shiftChar(char c, char shift)
{
	/*
	 * Write your code and comments here, 4 points
	 */

	return c; // change this line
}

/*
 * Comments here
 */
string encryptMsg(string text, string key) {

	string output;

	/*
	 * Write your code and comments here, 10 points
	 */

	return output;
}

/*
 * Comments here
 */
void  getKey(string &key){

	/*
	 * Write your code and comments here, 2 points
	 */
}

/*
 * Read text from a file using a file directory.
 * It returns "False" if the file cannot be opened.
 */
string getMsg(const string& filename)
{
	std::ifstream inFile;
	inFile.open(filename); //open the input file
	if (inFile.is_open())
	{
		stringstream strStream;
		strStream << inFile.rdbuf(); //read the file
		string msg = strStream.str(); //text holds the content of the file
		inFile.close();
		return msg;
	}
	else
		return "False";

}

/*
 * Test function for main() to call
 */
int vigenereCipher()
{
	string key;

	/*
	 * Change code here based on tests, 1 point
	 */

	getKey(key);
	//cout << key << endl;

	string filePath = "/Users/mao/Desktop/mao/mao_LC/LC1160_2022s/src/Assignments/testFile.txt"; // MacOs may not support a relative path
	//string filePath = "/Users/mao/Desktop/mao/mao_LC/LC1160_2022s/src/Assignments/shortMsg.txt"; // MacOs may not support a relative path
	//string filePath = "testFile.txt"; // Windows

	string text = getMsg(filePath);
	cout << endl << encryptMsg(text, key) << endl << endl;
	cout << ", where the original text is:" << endl << endl << text << endl;
	return 0;
}
