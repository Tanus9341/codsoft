#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
   
    srand(time(nullptr));
     system("color FC");
    
    int secretNumber = rand() % 100 + 1;
    
  
    std::cout << "Welcome to the Guess the Number game!" << std::endl;
    std::cout << "I've picked a number between 1 and 100. Can you guess what it is?" << std::endl;
    
    
    int guess = 0;
    int attempts = 0;
    
    while (guess != secretNumber) {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++;
    
        if (guess < secretNumber) {
            std::cout << "Too low! Try again." << std::endl;
        } else if (guess > secretNumber) {
            std::cout << "Too high! Try again." << std::endl;
        } else {
            std::cout << "Congratulations! You've guessed the number " << secretNumber << " correctly!" << std::endl;
            std::cout << "It took you " << attempts << " attempts." << std::endl;
        }
    }
    
    return 0;
}
