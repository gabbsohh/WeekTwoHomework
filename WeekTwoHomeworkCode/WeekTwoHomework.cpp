// Gabriela Ortega
// Game 2303
// Sept. 07, 2023
// 1) a function that outputs all numbers from 0 to 1000 that are divisible by two different numbers, 
// which should be passed into the function.
// 2) a function to reverse the letters in a string("hello world" = > "dlrow olleh")
// 3) a function that returns a string with the vowels removed("the cake is a lie" = > "th ck s  l"

#include <iostream>
#include <string>
#include <vector>
using namespace std;

//void functions
void DivisibleBy2();
void ReverseString();
void VowelsRemoved();

//main function to call all three functions
int main()
{
	DivisibleBy2();
	ReverseString();
	VowelsRemoved();

	return 0;
}

//call functions

// 1) a function that outputs all numbers from 0 to 1000 that are divisible by two different numbers, 
// which should be passed into the function.
void DivisibleBy2()
	{
		//variables
		int num1 = 0;
		int num2 = 0;
		
		//user input
		cout << "Please enter the first number: " << endl;
		cin >> num1;

		cout << "Please enter the second number: " << endl;
		cin >> num2;

		//for loop to continuously check the divisibility of the numbers 0-1000
		for (int i = 0; i <= 1000; ++i)
		{
			if (i % num1 == 0 && i % num2 == 0)
			{
				cout << "The numbers " << i << " are divisible by " << num1 << " and " << num2 << endl;
			}
		}
		
	}

// 2) a function to reverse the letters in a string("hello world" = > "dlrow olleh")
void ReverseString()
	{
		string str = "Hello World";
		reverse(str.begin(), str.end());
		cout << "\n" << "Hello World" << "\n" << str;
	}

// 3) a function that returns a string with the vowels removed("the cake is a lie" = > "th ck s  l"
void VowelsRemoved() 
	{
		//variable for set string
		string str = "the cake is a lie";

		vector<char> vowels = { 'a', 'e', 'i', 'o', 'u',
					   'A', 'E', 'I', 'O', 'U' };

		for (int i = 0; i < str.length(); i++)
		{
			if (find(vowels.begin(), vowels.end(),
				str[i]) != vowels.end())
			{
				str = str.replace(i, 1, "");
				i -= 1;
			}
		}

		cout << endl << "\n" << str << endl;

	}