#include <iostream>
#include <fstream>
#include <sstream>

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
		std::cout << "Issue opening file.\n";
		return 1;
	}
//Orignially wanted to use keepGoing for this part, but this works way better.
	while (getline(csvFile, fileLine)){
		lineParser.clear();
		lineParser.str(fileLine);
		std::stringstream change;
		getline(lineParser, fieldOne, ',');//Get line, first int
		getline(lineParser, fieldTwo, ',');//Get line, second int
		getline(lineParser, wordField);//Get line, word
		
		change.clear();
		change.str(fieldOne);
		change >> firstNum;

		change.clear();
		change.str(fieldTwo);
		change >> secondNum;

		int sum = firstNum + secondNum;
		for (int i = 0; i < sum; i++){
			std::cout << wordField << " ";
		}
		std::cout << "\n";
	}
	
}
