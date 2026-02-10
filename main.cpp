//James Morales, 02/09/2026, Challenge 1 create date menu, Lab Activities:Arrays and Vectors

#include <iostream>
#include <string>
#include <limits>
using namespace std; //saw this on the textbook examples

//function prototypes
int displayMenu();
void runMenu();


const std::string days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
const std::string months[] = {"January", "February", "March", "April", "May", "June", "July",
                            "August", "September", "October", "November", "December"};
//the above code declares the two global arrays requested per the instructions

int main() {
    //initialization
    runMenu();
    //cleanup
    return 0;
}
int displayMenu() {
    std::cout << "Date Menu" << std::endl;
    std::cout << "1. Select Day Number (1-7)" << std::endl;
    std::cout << "2. Select Month Number (1-12)" << std::endl;
    std::cout << "3. Quit" << std::endl;
    std::cout << "Enter your choice: " << std::endl;
    int choice;
    std::cin >> choice;
    return choice;
}
//lines 24-33 create the menu that will display and be interacted with

void runMenu() {
    int choice;
    do {
        choice = displayMenu();

        switch (choice) {
            case 1:
                std::cout << "Enter your day: " << std::endl;
                std::cin >> choice;
                if (choice >= 1 && choice <= 7) {
                    std::cout << "Day " << choice << " is " << days[choice-1] << std::endl;
                } else {
                    std::cout << "Invalid Day" << std::endl;
                }
                break;
                //Gemini assisted with 44-51 was unsure at first how to factor 0 for array start
            case 2:
                std::cout << "Enter your month: " << std::endl;
                std::cin >> choice;
                if (choice >= 1 && choice <= 12) {
                    std::cout << "Month " << choice << " is " << months[choice-1] << std::endl;
                } else {
                    std::cout << "Invalid Month" << std::endl;
                }
                break;
                //Gemini was not needed for this one as CLion practically knew what the code would be
            case 0:
                std::cout << "Quitting program" << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Try again." << std::endl;
                break;
        }
    } while (choice != 0); //ends the menu if 0 selected
}




