/**
 * Author: Keon Hayes
 */

#include <iostream>
#include "HurricaneList.h"

using namespace std;

/**
 * Main Function.
 */
int main() {
    cout << "2017 Atlantic Hurricane Season" << endl;
    Storm storm1 = Storm("Arlene", 50, "April", 0);
    Storm storm2 = Storm("Bret", 50, "June", 0);
    Storm storm3 = Storm("Cindy", 60, "June", 0);
    Storm storm4 = Storm("Four", 30, "July", 0);
    Storm storm5 = Storm("Don", 50, "July", 0);
    Storm storm6 = Storm("Emily", 60, "July", 0);
    Storm storm7 = Storm("Franklin", 85, "August", 1);
    Storm storm8 = Storm("Gert", 110, "August", 2);
    Storm storm9 = Storm("Harvey", 130, "August", 4);
    Storm storm10 = Storm("Irma", 180, "August", 5);
    Storm storm11 = Storm("Jose", 155, "September", 4);
    Storm storm12 = Storm("Katia", 105, "September", 2);
    Storm storm13 = Storm("Lee", 115, "September", 3);
    Storm storm14 = Storm("Maria", 175, "September", 5);
    Storm storm15 = Storm("Nate", 90, "October", 1);
    Storm storm16 = Storm("Ophelia", 115, "October", 3);
    Storm storm17 = Storm("Philippe", 40, "October", 0);
    Storm storm18 = Storm("Rina", 60, "November", 0);


    HurricaneList storms;
    storms.push_front(storm1);
    storms.push_back(storm5);
    cout << "a" << endl;
    storms.insert(storm2, 1);
    
    storms.insert(storm3, 2);
    storms.insert(storm4, 3);
    storms.push_back(storm5);
    storms.push_back(storm6);
    storms.push_back(storm7);
    storms.push_back(storm8);
    storms.push_back(storm9);
    storms.push_back(storm10);
    storms.push_back(storm11);
    storms.push_back(storm12);
    storms.push_back(storm13);
    storms.push_back(storm14);
    storms.push_back(storm15);
    storms.push_back(storm16);
    storms.push_back(storm17);
    storms.push_back(storm18);
    cout << "something" << endl;

    storms.printForward();
    storms.printReverse();

    storms.erase(3);

    storms.printForward();
    storms.printReverse();

}