#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>

double Cel_far(double cel){
    double result = (cel*(1.8)) + 32; 
    return round(result); 
} 

double Far_cel(double far){
    double result = (far - 32) * (0.55); 
    return round(result); 
}

int main() {
    std::string usr_name;
    int choice;
    double temp;   

    std::cout << "Please enter your name:\n";

    std::cin >> usr_name;

    std::cout << "Welcome " << usr_name << " to the Temperature Converted Application\n"; 
    while (choice != 3){
        std::cout << "\nPlease type 1 for Celsius to Fahrenheit conversion.\nType 2 for Fahrenheit to Celsius conversion.\nOr type 3 to exit the program\n";

        std::cin >> choice; 
        
        if(!std::cin){
            std::cout << "Only input between numbers 1 to 3\n"; 
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
        } 

        switch(choice){
            
            case 1:{

                std::cout << "\nPlease enter your temperature in Celsius\n"; 
                std::cin >> temp; 
                std::cout << "\n";
                std::cout << "Computing... \n";  
                //Celsius to Fahrenheit Function
                std::cout << "The temperature in Fahrenheit is " << Cel_far(temp) << std::endl;
                break;
            }
            
            case 2:{

                std::cout << "Please enter your temperature in Fahrenheit\n"; 
                std::cin >> temp; 
                std::cout << "\n\n\n";
                std::cout << "Computing... \n";  
                //Fahrenheit to Celsius Function
                std::cout << "The temperature in Fahrenheit is " << Far_cel(temp) << std::endl;
                break;
            }
            case 3:{
                std::cout << "Goodbye!\n";
                break;  
            }
            default:{
                std::cout << "Input value was not an option\n1 to convert Celsius to Fahrenheit\n2 to convert Fahrenheit to Celsius\n3 to exit the program\n";
                break;  
            }
        }
    }
}