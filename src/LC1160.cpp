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
#include "Pointers_and_DMM/AllTests.h"
#include "Templates_and_Vectors/AllTests.h"
#include "Inheritance_and_Polymorphism/AllTests.h"
#include "Files_and_Exception_Handling/AllTests.h"
#include "Stacks_and_Queues/AllTests.h"
using namespace std;


void Q1(int a[], int x){
    if(x > 0){
        x = x -1;
        Q1(a,x);
        std::cout << a[x] << " ";
    }

}

bool Q2( int A[],int n ) {
   if ( n == 0 )
      return true;
   return( A[n - 1]%2 == 0 && Q2 ( A,n - 1) );
 }

void Q3(){
    int * q = new int(3);
    int * p = q;
    int a = 6;
    q = &a;
    *p = 7;
    a =4;
    std::cout << a << *q << *p;
}
struct Node{
    int data;
    Node* next;
    Node(int d = 0, Node* n = nullptr){
    	data = d;
    	next = n;
    }

};
Node* Q4(Node * p){
    Node* h = p;
    while(p != nullptr){
        Node* tmp = p->next;
        if(tmp != nullptr){
            p->next = tmp->next;
            delete tmp;
        }
        p = p->next;
    }
    return h;
}


int main(){
    int arr[] = {1,2,3,4};
    Q1(arr,4);
    std::cout << std::endl;
    int arr2[] = {6,2,8,4,1};
    std::cout << Q2(arr2,5) << std::endl;
    Q3();
    std::cout << std::endl;
    Node* p = new Node{1,new Node{2,new Node{3,new Node{4,new Node{5,new Node{6,new Node{7,new Node{8,nullptr}}}}}}}};
    p = Q4(p);
    for(Node* q = p; q; q=q->next){
        std::cout << q->data << " ";
    }

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
	//testQuotientWithFunction(); // Quotient with exception from function
	//testQuotientThrowRuntimeError();
	//testBadAllocExceptionDemo();


	/*
	 * Stacks_and_Queues
	 */
	testArrayStack();
	//testSinglyLinkedStack();
	//testVectorStack();
	//testListStack();

	//testArrayQueue();
	//testListQueue();

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
	//testGenDLList();
	testGenSLList();
	//linkedListFun();

	/*
	 * Labs
	 */
	//monteCarloSimulation();
	//playGamesOfGraps(8);
	//testQuickSort();
	//testRecursion();

	return 0;
}


