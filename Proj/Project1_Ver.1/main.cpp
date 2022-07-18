/*
 * File:   main.cpp
 * Author: Manuel Medina
 *
 * Created on June 21, 2022, 12:01 PM
 * Purpose:  C++ Template - to be used in all future Assignments
 */

//System Libraries
#include <cctype>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

//user libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    string pHand; // Player Hand
    string dHand; // Dealer Hand
    string deck = "J539KK6JA55677A6T326Q9TQT852KQ7433TAA2Q244K8988J47J9"; //Deck
    
    
    
    //Deal the first two cards to player and dealer.
    for (int i = 0; i < 2; ++i){
        const size_t pos = rand() % deck.size();
        pHand += deck[pos];
        deck.erase(pos, 1);
    }
    for (int i = 0; i < 2; ++i){
        const size_t pos = rand() % deck.size();
        dHand += deck[pos];
        deck.erase(pos, 1);
    }
    //getting more cards
    bool run = true; 
    while (run && !deck.empty()) {
        /*cout << "Dealer Hand: ";
        cout << dHand.front() << " *";
        cout << endl;*/

        cout << "Player Hand: ";
        for (size_t i = 0; i < pHand.size(); ++i) {
            cout << pHand[i] << ' ';
        }
        cout << endl;

        cout << "Deal another card? Y or N." << endl;
        char input;
        cin >> input;
        input = toupper(input);
        if (input != 'Y' && input != 'N') {
            cout << "Invalid Input." << endl;
            continue;
        }

        if (input == 'Y') {
            const size_t pos = rand() % deck.size();
            pHand += deck[pos];
            deck.erase(pos, 1);
        }
        else {
            run = false;
        }
        
        cout << endl;
    
    }
    // Calculating players hand.
    int score = 0;
    for (size_t i = 0; i < pHand.size(); ++i) {
        switch (pHand[i]) {
            case 'A':
                char input;
                do {
                    cout << "Is this Ace an 11? Y or N." << endl;
                    cin >> input;
                    input = toupper(input);

                } while (input != 'Y' && input != 'N');

                if (input == 'Y')
                    score += 11;
                else
                    score += 1;

                break;
            case '2':
                score += 2;
                break;
            case '3':
                score += 3;
                break;
            case '4':
                score += 4;
                break;
            case '5':
                score += 5;
                break;
            case '6':
                score += 6;
                break;
            case '7':
                score += 7;
                break;
            case '8':
                score += 8;
                break;
            case '9':
                score += 9;
                break;
            case 'T':
            case 'J':
            case 'Q':
            case 'K':
                score += 10;
                break;
        }

    }
    //display results
    cout << "Player score: " << score << endl;

    //Exit Stage Right
    return 0;
}

