/*
Qipeng Liao and Xiaohang Yin
Assignemnet#2
01/29/2019
main.cpp : This file contains the 'main' function. Program execution begins and ends there.
Qipeng Liao did the main.cpp, Currency.cpp and Currency.h.
Xianghang Yin did the List, Node and Stack header files.
*/


/* This program displays the Link-based Stack of Abstract Data Type
and its capabilities*/

#include<iostream>
#include<string>
#include"Stack.h"
#include"Currency.h"
using namespace std;


int mainmenu();

//functions related to stack which when called do common stack operation Push, Pop etc.
void integerStack();
void doubleStack(); 
void stringStack();
void currencyStack(); //currency stack



int main()
{
	int choice;
	do
	{
		choice = mainmenu();

		switch (choice)// making a selection
		{


		case 1://Integer
			integerStack();
			break;

		case 2://Double
			doubleStack();
			break;

		case 3://String
			stringStack();
			break;

		case 4://Currency
			currencyStack();
			break;
		}

	} while (choice != 5); 
	cout << endl << endl;
	system("pause");
	return 0;
}

int mainmenu()
{
	int choice;

	//Request the user for input


	cout << " Link-based Stack ADT" << endl << endl;


	cout << endl << "\t1) Integer Stack" << endl;
	cout << "\t2) Double Stack" << endl;
	cout << "\t3) String Stack" << endl;
	cout << "\t4) Currency Stack" << endl;
	cout << "\t5) Exit the program" << endl << endl;


	cout << " Please enter intended stack number to try: ";
	cin >> choice;

	while (choice < 1 || choice > 5)
	{
		cout << "\n Incorrect Value! Try Again." << endl << endl;
		cout << endl << endl;
		cout << " Please insert the number of the Stack that you would like to try: ";
		cin >> choice;
	}
	return choice;
}

/**
The syntax for each and every of the following functions is almost similar and each data type we want to work on
For our case we are dealing with Integers, Doubles and Strings. We also have our Currency class from our previous lab
which generates random currencies.
**/
void integerStack()//integer stack
{
	cout << endl;
	system("pause");
	system("CLS");
	cout << "\nLink-based Stack ADT"
		<< endl << "Integer Stack\n\n\n\n";

	Stack< int > intStack; // create Stack of integers
	cout << " Integer stack processing>>>>\n\n";
	cout << " The size of the Stack is " << intStack.size() << endl << endl;

	// push integers into intStack
	for (int i = 0; i < 7; i++)
	{
		intStack.push(i);
		intStack.printStack();
	}

	cout << "\nThe new size of the Stack is " << intStack.size() << endl << endl;
	cout << string(60, '-') << endl << endl;

	int popInteger; // store integers popped from stack

					// function to pop integers
	while (!intStack.isStackEmpty())
	{
		intStack.pop(popInteger);
		cout << " " << popInteger << " popped from stack" << endl;
		intStack.printStack();
	} // end while

	cout << " \n\n Returning to Main menu" << endl << endl;
	system("pause");
	system("CLS");
}

void doubleStack()
{
	cout << endl;
	system("pause");
	system("CLS");
	cout << string(60, '=') << endl << endl;
	cout << "\t\t   Link-based Stack ADT" << endl << "\t\t\tDouble Stack\n\n";
	cout << string(60, '=') << endl << endl;
	Stack< double > doubleStack; // create Stack of doubles
	double value = 1.1;

	cout << " Processing a double Stack" << endl << endl;
	cout << " The size of the Stack is " << doubleStack.size() << endl << endl;


	// push floating-point values onto doubleStack
	for (int j = 0; j < 5; j++)
	{

		doubleStack.push(value);
		doubleStack.printStack();
		value += 1.1;

	}

	cout << "\n The new size of the Stack is " << doubleStack.size() << endl << endl;
	cout << string(60, '-') << endl << endl;

	double popDouble; // store double popped from stack

					  // pop floating-point values from doubleStack
	while (!doubleStack.isStackEmpty())
	{
		doubleStack.pop(popDouble);
		cout << " " << popDouble << " popped from stack" << endl;
		doubleStack.printStack();
	} // end while

	cout << string(60, '=') << endl << endl;
	cout << " Returning to Main menu" << endl << endl;
	system("pause");
	system("CLS");
}

void stringStack()
{
	cout << endl;
	system("pause");
	system("CLS");
	cout << string(60, '=') << endl << endl;
	cout << "\t\t    Link-based Stack ADT" << endl << "\t\t\tString Stack\n\n";
	cout << string(60, '=') << endl << endl;

	Stack< string > strngStack; // create Stack of strings
	cout << " Processing a string Stack" << endl << endl;
	cout << " The size of the Stack is " << strngStack.size() << endl << endl;

	// push strings onto intStack
	strngStack.push("String one");
	strngStack.printStack();

	strngStack.push("String two");
	strngStack.printStack();

	strngStack.push("String three");
	strngStack.printStack();

	strngStack.push("String four");
	strngStack.printStack();

	strngStack.push("String five");
	strngStack.printStack();

	cout << "\n The new size of the Stack is " << strngStack.size() << endl << endl;

	cout << string(60, '-') << endl << endl;

	string popstrng; // store string popped from stack

					 // pop strings from intStack and print
	while (!strngStack.isStackEmpty())
	{
		strngStack.pop(popstrng);
		cout << " " << popstrng << " popped from stack" << endl;
		strngStack.printStack();
	} // end while
	cout << string(60, '=') << endl << endl;

	cout << " Returning to Main menu" << endl << endl;
	system("pause");
	system("CLS");

}

void currencyStack()


{
	cout << endl;
	system("pause");
	system("CLS");
	cout << "\n\nLink-based Stack ADT" << endl << "\t\t\t\t\t Currency Stack\n\n";

	Stack< Currency > crrStack; // create Stack of Currencies
	cout << " Processing a string Stack" << endl << endl;
	cout << " The size of the Stack is " << crrStack.size() << endl << endl;


	// push predefined currencies onto intStack
	Currency obj(34, 45);
	crrStack.push(obj);
	crrStack.printStack();

	Currency obj1(23, 78);
	crrStack.push(obj1);
	crrStack.printStack();

	Currency obj2(12, 67);
	crrStack.push(obj2);
	crrStack.printStack();

	Currency obj3(23, 54);
	crrStack.push(obj3);
	crrStack.printStack();

	cout << "\n The new size of the Stack is " << crrStack.size() << endl << endl << endl;


	Currency popcurrency; // store currency popped from stack


	while (!crrStack.isStackEmpty())
	{

		crrStack.pop(popcurrency);
		cout << popcurrency << " POPPED FROM STACK" << endl;
		crrStack.printStack();

	}
	cout << string(100, '=') << endl << endl;
	cout << " Returning to Main menu" << endl << endl;
	system("pause");
	system("CLS");


}