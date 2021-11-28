/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Sabrina Lopez
 */

#include <iostream>

int main() {
    std::string operand1; //declare a string for the user's first operand, either numerical or written-out
    double operand1Num; //declare a double to hold the numerical version of the first operand
    std::string operand2; //declare a string for the user's second operand, either numerical or written-out
    double operand2Num; //declare a double to hold the numerical version of the first operand
    std::string operation; //declare a string for the user's operator/operation
    int validFlag = 0; //declare an integer to ensure that the operands and operator are valid, initializing it as false

    while(validFlag == 0){ //while the flag is false

        //tell the user to input an operand to complete the operation with
        std::cout << "Please input an operand (i.e., between 0 and 9).\n";

        //take the user's first inputted value
        std::cin >> operand1;

        if((operand1 == "0") || (operand1 == "zero")) { //if the first operand is 0, numerical or written-out
            operand1Num = 0; //then the first operand is 0
            validFlag = 1; //flag the value as valid
        }
        else if((operand1 == "1") || (operand1 == "one")) { //if the first operand is 1, numerical or written-out
            operand1Num = 1; //then the first operand is 1
            validFlag = 1; //flag the value as valid
        }
        else if((operand1 == "2") || (operand1 == "two")) { //if the first operand is 2, numerical or written-out
            operand1Num = 2; //then the first operand is 2
            validFlag = 1; //flag the value as valid
        }
        else if((operand1 == "3") || (operand1 == "three")) { //if the first operand is 3, numerical or written-out
            operand1Num = 3; //then the first operand is 3
            validFlag = 1; //flag the value as valid
        }
        else if((operand1 == "4") || (operand1 == "four")) { //if the first operand is 4, numerical or written-out
            operand1Num = 4; //then the first operand is 4
            validFlag = 1; //flag the value as valid
        }
        else if((operand1 == "5") || (operand1 == "five")) { //if the first operand is 5, numerical or written-out
            operand1Num = 5; //then the first operand is 5
            validFlag = 1; //flag the value as valid
        }
        else if((operand1 == "6") || (operand1 == "six")) { //if the first operand is 6, numerical or written-out
            operand1Num = 6; //then the first operand is 6
            validFlag = 1; //flag the value as valid
        }
        else if((operand1 == "7") || (operand1 == "seven")) { //if the first operand is 7, numerical or written-out
            operand1Num = 7; //then the first operand is 7
            validFlag = 1; //flag the value as valid
        }
        else if((operand1 == "8") || (operand1 == "eight")) { //if the first operand is 8, numerical or written-out
            operand1Num = 8; //then the first operand is 8
            validFlag = 1; //flag the value as valid
        }
        else if((operand1 == "9") || (operand1 == "nine")) { //if the first operand is 9, numerical or written-out
            operand1Num = 9; //then the first operand is 9
            validFlag = 1; //flag the value as valid
        }
        else {
            validFlag = 0; //flag the value as invalid
            //tell the user to input a valid operand to complete the operation with
            std::cout << "That operand is not valid.\n";
        }

    }

    validFlag = 0; //reset the flag to false for the next operand

    while(validFlag == 0) { //while the flag is false

        //tell the user to input an operand to complete the operation with
        std::cout << "Please input another operand (i.e., between 0 and 9).\n";

        //take the user's second inputted value
        std::cin >> operand2;

        if((operand2 == "0") || (operand2 == "zero")) { //if the second operand is 0, numerical or written-out
            operand2Num = 0; //then the second operand is 0
            validFlag = 1; //flag the value as valid
        }
        else if((operand2 == "1") || (operand2 == "one")) { //if the second operand is 1, numerical or written-out
            operand2Num = 1; //then the second operand is 1
            validFlag = 1; //flag the value as valid
        }
        else if((operand2 == "2") || (operand2 == "two")) { //if the second operand is 2, numerical or written-out
            operand2Num = 2; //then the second operand is 2
            validFlag = 1; //flag the value as valid
        }
        else if((operand2 == "3") || (operand2 == "three")) { //if the second operand is 3, numerical or written-out
            operand2Num = 3; //then the second operand is 3
            validFlag = 1; //flag the value as valid
        }
        else if((operand2 == "4") || (operand2 == "four")) { //if the second operand is 4, numerical or written-out
            operand2Num = 4; //then the second operand is 4
            validFlag = 1; //flag the value as valid
        }
        else if((operand2 == "5") || (operand2 == "five")) { //if the second operand is 5, numerical or written-out
            operand2Num = 5; //then the second operand is 5
            validFlag = 1; //flag the value as valid
        }
        else if((operand2 == "6") || (operand2 == "six")) { //if the second operand is 6, numerical or written-out
            operand2Num = 6; //then the second operand is 6
            validFlag = 1; //flag the value as valid
        }
        else if((operand2 == "7") || (operand2 == "seven")) { //if the second operand is 7, numerical or written-out
            operand2Num = 7; //then the second operand is 7
            validFlag = 1; //flag the value as valid
        }
        else if((operand2 == "8") || (operand2 == "eight")) { //if the second operand is 8, numerical or written-out
            operand2Num = 8; //then the second operand is 8
            validFlag = 1; //flag the value as valid
        }
        else if((operand2 == "9") || (operand2 == "nine")) { //if the second operand is 9, numerical or written-out
            operand2Num = 9; //then the second operand is 9
            validFlag = 1; //flag the value as valid
        }
        else {
            validFlag = 0; //flag the value as invalid
            //tell the user to input a valid operand to complete the operation with
            std::cout << "That operand is not valid.\n";
        }
    }

    validFlag = 0; //reset the flag to false for the operator

    while(validFlag == 0) { //while the flag is false

        //tell the user to input an operand to complete the operation with
        std::cout << "Please input an operator (i.e., +, -, *, or /).\n";

        //take the user's desired operation
        std::cin >> operation;

        if((operation == "+") || (operation == "-") || (operation == "*") || (operation == "/")) {
            validFlag = 1; //flag the value as valid
        }
        else {
            validFlag = 0; //flag the value as invalid
            //tell the user to input a valid operator to complete the operation with
            std::cout << "That operator is not valid.\n";
        }
    }

    if(operation == "+") { //if the operation is addition, then add the operands together
        double sum = operand1Num + operand2Num; //find the sum of the operands

        //output the sum of the operands to the user
        std::cout << "The solution to " << operand1 << " " << operation << " " << operand2 << " equals " << sum << ".\n";
    }
    else if(operation == "-") { //if the operation is subtraction, then find the difference of the operands
        double difference = operand1Num - operand2Num; //find the difference of the operands

        //output the difference of the operands to the user
        std::cout << "The solution to " << operand1 << " " << operation << " " << operand2 << " equals " << difference << ".\n";
    }
    else if(operation == "*") { //if the operation is multiplication, then find the product of the operands
        double product = operand1Num * operand2Num; //find the product of the operands

        //output the product of the operands to the user
        std::cout << "The solution to " << operand1 << " " << operation << " " << operand2 << " equals " << product << ".\n";
    }
    else if(operation == "/") { //if the operation is division, then find the quotient of the operands
        double quotient = operand1Num / operand2Num; //find the quotient of the operands

        //output the quotient of the operands to the user
        std::cout << "The solution to " << operand1 << " " << operation << " " << operand2 << " equals " << quotient << ".\n";
    }

    return 0;
}