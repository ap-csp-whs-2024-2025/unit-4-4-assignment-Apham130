#include <iostream>  // std::cin, std::cout, std::getline
#include <string>    // std::string
#include <bits/stdc++.h>
int main()
{
    // Complete the homework problems here
    
    // Problem 1
    int num1;
    std::cout << "Gimme number 1-100\n";
    std::cin >> num1;
    while (!((num1 >= 1) && (num1 <= 100)))
    {
        std::cout << "Try again\n";
        std::cin >> num1;
    }
    std::cout << "Thanks\n";
    
    // Problem 2
    int count = 1;
    std::string favColor = "green";
    std::string playerGuess;
    std::cout << "Guess my favorite color\n";
    std::cin >> playerGuess;
    transform(playerGuess.begin(), playerGuess.end(), playerGuess.begin(), ::tolower);
    while (playerGuess != favColor)
    {
        std::cout << "Try again\n";
        count = count + 1;
        std::cin >> playerGuess;
        transform(playerGuess.begin(), playerGuess.end(), playerGuess.begin(), ::tolower);
    }
    if (count == 1)
    {
        std::cout << "Nice you got it in " << count << " guess\n";
    }
    else
    {
        std::cout << "good job it took you " << count << " guesses\n";
    }
    // Problem 3
    int sum = 0; 
    int inNum;
    int howMany;
    int counter = 1;

    std::cout << "How many numbers do you want to add together\n";
    std::cin >> howMany;
    while (!(counter > howMany))
    {
        std::cout << "#" << counter << "  >";
        std::cin >> inNum;
        counter = counter + 1;
        sum = sum + inNum;
    }
    std::cout << "\nYour sum is " << sum << std::endl;
    
    return 0;
}
