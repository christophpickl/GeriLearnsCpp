#include <iostream>

using namespace std;

const int PRICE_FACTORY = 20;
const int EARN_PER_FACTORY = 5;

int turn = 1;
int money = 100;
int factories = 0;

void printGameStats() {
    cout << endl;
    cout << "Turn: " << turn << " --- Money: " << money << endl;
    cout << "Factories: " << factories << endl;
    cout << endl;
}

void doNextTurn() {
    cout << "Calculating next turn ..." << endl;
    turn++;
    money += factories * EARN_PER_FACTORY;

    printGameStats();
}

bool assureEnoughMoney(int price) {
    if (money < price) {
        cout << "Not enough money!" << endl;
        return false;
    }
    return true;
}

void buyFactory() {
    if (!assureEnoughMoney(PRICE_FACTORY)) return;

    money -= PRICE_FACTORY;
    factories++;
    cout << "Bought 1 factory for " << PRICE_FACTORY << " $." << endl;
    cout << "Now got: " << factories << " factories." << endl;
}

int main() {
    printf("Christoph's Game Starting.\n\n");
    string command;

    printGameStats();
    do {
        printf("Command >> ");
        cin >> command;
        if (command == "q") {
            // will break down below
        } else if (command == "n") {
            doNextTurn();
        } else if (command == "s") {
            printGameStats();
        } else if (command == "bf") {
            buyFactory();
        } else {
            cout << "Invalid command '" << command << "'!" << endl << endl;
            cout << "Available commands:" << endl;
            cout << "q ... Quit" << endl;
            cout << "n ... Next turn" << endl;
            cout << "s ... Print game statistics" << endl;
            cout << "bf ... Buy 1 factory" << endl;
        }

    } while (command != "q");

    printf("\nGood Bye!\n");
    return 0;
}

