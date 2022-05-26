#include <iostream>
#include <cmath>
#include <string>
using namespace std;

/**
 * Returns the singular or plural form of a word, based on number
 *
 * Requires: singular is the singular form of the word.
 *           plural is the plural form of the word.
 *           number determines how many things there are; must be >= 0.
 * Modifies: Nothing.
 * Effects:  Returns return the singular form of the word if number == 1.
 *           Otherwise, returns the plural form.
 * Examples:
 *           // prints "bag"
 *           cout << pluralize("bag", "bags", 1);
 *
 *           // prints "pounds"
 *           string temp = pluralize("pound", "pounds", 3);
 *           cout << temp;
 */
string pluralize(string singular, string plural, int number);



int main() {
    int people;
    cout << "How many people do you need to serve? ";
    cin >> people;
    cout << endl << endl;
    //calculate number of loaves needed
    double loaf = ceil(people / 4.0);
    cout << "You need to make: " << loaf << " " << pluralize("loaf", "loaves", loaf) << " of focaccia" << endl;
    
    // Calculate ingredients and total cost
    int bag = ceil(loaf * 5 / 20);
    int package = ceil(loaf * 1.75 / 2.25);
    int canister = ceil(loaf * 1.875 / 6);
    int bottle = ceil(loaf * 2 / 33.783);
    double cost = (2.69 * bag) + (0.4 * package) + (0.49 * canister) + (6.39 * bottle);
    
    // Display shopping list
    cout << "Shopping List for Focaccia Bread" << endl << "--------------------------------" << endl;
    cout << bag << " " << pluralize("bag", "bags", bag) << " of flour" << endl;
    cout << package << " " << pluralize("package", "packages", package) << " of yeast" << endl;
    cout << canister << " " << pluralize("canister", "canisters", canister) << " of salt" << endl;
    cout << bottle << " " << pluralize("bottle", "bottles", bottle) << " of oil" << endl;
    
    // Display total cost
    cout << "Total expected cost of ingredients: $" << cost << endl
        << "\nHave a great party!";
        
    return 0;
}

// ----------------------------------------------
// *** DO NOT CHANGE ANYTHING BELOW THIS LINE ***

string pluralize(string singular, string plural, int number) {
    if (number == 1) {
        return singular;
    }
    return plural;
}
