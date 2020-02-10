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
    HurricaneList storms;
    storms.push_front(Storm("Arlene", 50, "April", 0));
    storms.insert(Storm("Bret", 50, "June", 0), 1);
    storms.insert(Storm("Cindy", 60, "June", 0), 2);
    storms.insert(Storm("Four", 30, "July", 0), 3);
    storms.push_back(Storm("Don", 50, "July", 0));
    storms.push_back(Storm("Emily", 60, "July", 0));
    storms.push_back(Storm("Franklin", 85, "August", 1));
    storms.push_back(Storm("Gert", 110, "August", 2));
    storms.push_back(Storm("Harvey", 130, "August", 4));
    storms.push_back(Storm("Irma", 180, "August", 5));
    storms.push_back(Storm("Jose", 155, "September", 4));
    storms.push_back(Storm("Katia", 105, "September", 2));
    storms.push_back(Storm("Lee", 115, "September", 3));
    storms.push_back(Storm("Maria", 175, "September", 5));
    storms.push_back(Storm("Nate", 90, "October", 1));
    storms.push_back(Storm("Ophelia", 115, "October", 3));
    storms.push_back(Storm("Philippe", 40, "October", 0));
    storms.push_back(Storm("Rina", 60, "November", 0));

    storms.printForward();
    storms.printReverse();

    storms.erase(3);

    storms.printForward();
    storms.printReverse();

}