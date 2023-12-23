#include <iostream>
#include <string>

int main() {
    // Loop for three times
    for (int i = 0; i < 3; ++i) {
        // Prompt the user to enter the first string
        std::cout << "Enter the first string: ";
        std::string firstString;
        std::getline(std::cin, firstString);

        // Prompt the user to enter the second string
        std::cout << "Enter the second string: ";
        std::string secondString;
        std::getline(std::cin, secondString);

        // Concatenate the two strings
        std::string resultString = firstString + secondString;

        // Print the result
        std::cout << "Concatenated String: " << resultString << std::endl << std::endl;
    }

    return 0;
}
