// Assignment #1, CPSC 1160
// Describe what the code is doing in your own words.
// by #your name here#
// string text;
// text.length() will return the length of text.
// 3 points for comments

#include <iostream>
#include <fstream>
#include <sstream> //std::stringstream

using namespace std;

/*
 * Comments here
 */
char shiftCharAns(char c, char shift)
{
	/*
	 * Write your code and comments here, 4 points
	 */

	if (shift >= 'a' && shift <= 'z')
		shift -= 'a' - 'A';
	return (c + shift - 2 * 'A') % 26 + 'A'; //added 'A' to bring it in range of ASCII alphabet [ 65-90 | A-Z ]
}

/*
 * Comments here
 */
string encryptMsgAns(string text, string key) {
	/*
	 * Write your code and comments here, 10 points
	 */
	string output;
	for (int i = 0, j = 0; i < text.length(); ++i) {
		char c = text[i];

		if (c >= 'a' && c <= 'z')
			c -= 'a' - 'A';
		else if (c < 'A' || c > 'Z')
			continue;

		output += shiftCharAns(c, key[j]);
		j = (j + 1) % key.length();
	}
	return output;
}

/*
 * Comments here
 */
void  getKeyAns(string &key){
	/*
	 * Write your code and comments here, 2 points
	 */
	cout << "Enter your encryption key: ";
	cin >> key;
}

/*
 * Read text from a file using a file directory.
 * It returns "False" if the file cannot be opened.
 */
string getMsgAns(const string& filename)
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
int vigenereCipherAns()
{
	string key;

	/*
	 * Change code here based on tests, 1 point
	 * filePath should be correct
	 */

	getKeyAns(key);
	//cout << key << endl;

	string filePath = "/Users/mao/Desktop/mao/mao_LC/LC1160_2022s/src/Assignments/testFile.txt"; // MacOs may not support a relative path
	//string filePath = "/Users/mao/Desktop/mao/mao_LC/LC1160_2022s/src/Assignments/shortMsg.txt"; // MacOs may not support a relative path
	//string filePath = "testFile.txt"; // Windows

	string text = getMsgAns(filePath);
	cout << endl << encryptMsgAns(text, key) << endl << endl;
	cout << ", where the original text is:" << endl << endl << text << endl;
	return 0;
}
