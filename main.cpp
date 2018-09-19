#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
/* 1. Prompt user to select appropriate die
 * 2. Have user enter die ("How many sides for this roll?") 
 * 3. How many rolls for this die
 * 4. Display the result
 * 
 */

int main() {
    cout << " Welcome to the official Chantz Anderson Pathfinder dice roller";
    cout << " Please enter the particular die you need to roll (number only. ex: 4, 6, 8, 12, etc.) ";
        int dice_sides;
    cin >> dice_sides;
    cout << " Alright, you want to roll a " << dice_sides << "-sided die.";
    cout << " Enter the number of rolls you would \n like for this particular die: ";
        int dice_rolls;
    cin >> dice_rolls;
        int adjusted_rolls (dice_rolls - 1);
    
    srand(time(0));
    
    int first_number (1); //floor of possibilities
 
    int no_of_numbers_four (4);
    int random_four  = rand() % no_of_numbers_four + first_number;
    cout << random_four << "\n";
    
if (dice_sides == 4){
    for (int i = 0; i < adjusted_rolls; ++i){
        random_four = rand() % no_of_numbers_four + first_number;
        cout << random_four << "\n";
    }
}  


    int no_of_numbers_six (6); //# of max possibilities
    int random_six = rand() % no_of_numbers_six + first_number; //0 Max random integer
    
if (dice_sides == 6){
    for (int i = 0; i < adjusted_rolls; ++i){
        random_six = rand() % no_of_numbers_six + first_number;
        cout << random_six << "\n";
    }
}

    int no_of_numbers_eight (8); //# of max possibilities
    int random_eight = rand() % no_of_numbers_eight + first_number; //0 Max random integer
    
if (dice_sides == 8){
    for (int i = 0; i < adjusted_rolls; ++i){
        random_eight = rand() % no_of_numbers_eight + first_number;
        cout << random_eight << "\n";
    }
}

    int no_of_numbers_ten (10); //# of max possibilities
    int random_ten = rand() % no_of_numbers_ten + first_number; //0 Max random integer
    
if (dice_sides == 10){
    for (int i = 0; i < adjusted_rolls; ++i){
        random_ten = rand() % no_of_numbers_ten + first_number;
        cout << random_ten << "\n";
    }
}

    int no_of_numbers_twelve (12); //# of max possibilities
    int random_twelve= rand() % no_of_numbers_twelve + first_number; //0 Max random integer
    
if (dice_sides == 12){
    for (int i = 0; i < adjusted_rolls; ++i){
        random_twelve = rand() % no_of_numbers_twelve + first_number;
        cout << random_twelve << "\n";
    }
}

    int no_of_numbers_twenty (20); //# of max possibilities
    int random_twenty = rand() % no_of_numbers_twenty + first_number; //0 Max random integer
    
if (dice_sides == 20){
    for (int i = 0; i < adjusted_rolls; ++i){
        random_twenty = rand() % no_of_numbers_twenty + first_number;
        cout << random_twenty << "\n";
    }
}
    
    return 0;
}