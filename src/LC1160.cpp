//============================================================================
// Name        : 1160.cpp
// Author      : Mao
// Version     :
// Copyright   : @Mao
// Description : Welcome to CPSC_1160!
// Updated time: January 4, 2022
//============================================================================

#include <iostream>
#include "Assignments/AllTests.h"
#include "Labs/AllTests.h"
#include "Introduction/AllTests.h"
#include "Elementary_Programming/AllTests.h"
#include "Flow_Control/AllTests.h"
#include "Functions/AllTests.h"
#include "Arrays_and_C-Strings/AllTests.h"
#include "Objects_and_Classes/AllTests.h"
#include "Pointers_and_DMM/AllTests.h"
#include "Templates_and_Vectors/AllTests.h"
#include "Inheritance_and_Polymorphism/AllTests.h"
#include "Files_and_Exception_Handling/AllTests.h"
using namespace std;

int main()
{

	// Display Welcome to CPSC_1160! to the console
	cout << "Welcome to CPSC_1160!" << endl;


	//testFolder();

	/*
	 *	Introduction to C++
	 */

	//welcomeWithThreeMessages();
	 //computeExpression();
	//	ShowSyntaxErrors();
	//	showRuntimeErrors();
	//	showLogicErrors();

	/*
	 *	Elementary Programming
	 */
	//computeAreaWithConsoleInput();
	//computeAverage();
	//computeAreaWithConstant();

	//limitsDemo();
	//sizeDemo();

	//displayTime();


	/*
	 *	Flow_Control
	 */
	// Selection
	//computeTax();
	//computeBCTax();
	//subtractionQuiz();
	//testBooleanOperators();
	//testSwitchOnDays();
	//testAscendingOrder();

	//Loops
	//repeatSubtractionQuiz();
	//testDoWhile();
	//testTwoForLoops();
	//multiplicationTable();
	//testBreak();
	//testContinue();


	/*
	 *	Functions
	 */
	//displayATriangleOfAsterisks();
	//testMax();
	//testVoidFunction();
	//printPrimeNumbers(50); // The first 50 prime numbers.
	//testFunctionOverloading();
	//testFunctionPrototype();
	//variableScopeDemo();
	//staticVariableDemo();
	//testPassByValueOrRreference();

	//testCharacters();
	//t1t2();

	/*
	 *	Arrays_and_C-Strings
	 */
	//analyzeNumbers();
	//effectOfPassArrayDemo();
	//reverseArray();
	//testBinarySearch();
	//testVariousSortingMethods();

	//testStrlenAndSizeof();
	//passTwoDimensionalArray();
	//testStrings();

	/*
	 *	Objects_and_Classes
	 */
	//testCircle();
	//testTV();
	//testClassAssignmentOperator();
	//testCircleWithHeader();
	//testCircleWithPrivateDataFields();

	//testLoanClass();
	//testStringClass ();
	//testArrayOfObejctsTotalArea();
	//testCircleWithStaticDataFields();


	/*
	 *	Pointers and Dynamic Memory Management
	 */

	//testPointer();
	//testArrayPointer();
	//testPointerArgument();
	//reverseArrayUsingPointer();
	//testUsefulArrayFunctions();

	/*
	 * Templates and Vectors
	 */
	//testMaxValue();
	//testGenericSort();
	//testGenericStackWithTemplateFunction();
	//testVector();
	//testTwoDArrayUsingVector();

	/*
	 * Inheritance and Polymorphism
	 */

	//testGeometricObject();
	//testVisibility();
	//constructorDestructorCallDemo();
	//polymorphismDemo();
	//virtualFunctionDemo();
	//testPolymorphism();

	/*
	 * Files and Exception Handling
	 */
	//textFileOutput();
	//textFileInput();
	//testEndOfFile();
	//checkFile();
	//writeFormattedData();
	//readCity();
	//copyFile();
	//appendFile();
	//showStreamState();
	//testQuotientWithException(); // Quotient with exception
	testQuotientWithFunction(); // Quotient with exception from function
	testQuotientThrowRuntimeError();
	testBadAllocExceptionDemo();

	/*
	 * Assignments
	 */
	// Assign 0
	//eqexp();
	//eqexpAns();

	//Assign 1
	//vigenereCipher();
	//vigenereCipherAns();
	//sequencesUsingRecursion();
	//sequencesUsingRecursionAns();

	/*
	 * Labs
	 */
	//monteCarloSimulation();
	//playGamesOfGraps(8);
	//testQuickSort();
	//testRecursion();

	return 0;
}


