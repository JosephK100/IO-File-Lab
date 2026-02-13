#include <iostream>
#include <fstream>
#include <sstream>

//Main - Includes all my variables 
int main(){
	std::ifstream csvFile;
	std::string fileLine;
	std::stringstream lineParser;
	std::string fieldOne;
	std::string fieldTwo;
	std::string wordField;
	int firstNum;
	int secondNum;
//Test to make sure the file is actually opened.	
	csvFile.open("data.csv");
	if (!csvFile.is_open()){
		std::cout << "Somethin isn't right\n";
		return 1;
	}
//While loop - Reads the csv file one line at a time
	while (getline(csvFile, fileLine)){
		lineParser.clear();//Reset stringstream and load the current line
		lineParser.str(fileLine);
		std::stringstream change;
		getline(lineParser, fieldOne, ',');//Parse the first field
		getline(lineParser, fieldTwo, ',');//Parse the second field
		getline(lineParser, wordField);//Parse the third field
//Clear, retrieve, and convert the first number		
		change.clear();
		change.str(fieldOne);
		change >> firstNum;
//Clear, retrieve, and convert the second number
		change.clear();
		change.str(fieldTwo);
		change >> secondNum;
//Add 1st and 2nd number
//Print the word x amount of times (stored in "sum")
//Move to the next line with \n 
		int sum = firstNum + secondNum;
		for (int i = 0; i < sum; i++){
			std::cout << wordField << " ";
		}
		std::cout << "\n";
	}
	
}
