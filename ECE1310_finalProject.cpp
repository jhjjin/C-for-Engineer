// Final Project
// Hyukjin Jeong

#include <iostream>
using namespace std;

//prototype
void greeting();

int main()
{
    greeting();

    int foods, drinks, numOfFood, numOfDrink;
    int result = 1; 

    // Foods - 1 and Drinks -2 
    cout << "Enter number of option : " << endl;
    cin >> foods;

    while (result != 0)
    {
        switch (foods)
            case 1: //Noodle 
                switch (drinks)
                case 1: // Soda 
                    cout << "You selected Noodle and Soda" << endl;
                    break; 
                case 2: // Orange Juice
                    cout << "You selected Noodle and Orange Juice" << endl;
                    break;
                case 3: // Diet Coke
                    cout << "You selected Noodle and Diet Coke" << endl;
                    break;
                case 4: // Lemonade
                    cout << "You selected Noodle and Lemonade" << endl;
                    break;
            case 2: // Pizza
                switch (drinks)
                case 1: // Soda 
                    cout << "You selected Pizza and Soda" << endl;
                    break; 
                case 2: // Orange Juice
                    cout << "You selected Pizza and Orange Juice" << endl;
                    break;
                case 3: // Diet Coke
                    cout << "You selected Pizza and Diet Coke" << endl;
                    break;
                case 4: // Lemonade
                    cout << "You selected Pizza and Lemonade" << endl;
                    break;
            case 3: // Sandwich
                switch (drinks)
                case 1: // Soda 
                    cout << "You selected Sandwich and Soda" << endl;
                    break; 
                case 2: // Orange Juice
                    cout << "You selected Sandwich and Orange Juice" << endl;
                    break;
                case 3: // Diet Coke
                    cout << "You selected Sandwich and Diet Coke" << endl;
                    break;
                case 4: // Lemonade
                    cout << "You selected Sandwich and Lemonade" << endl;
                    break;
            case 4: // Salad
                switch (drinks)
                case 1: // Soda 
                    cout << "You selected Salad and Soda" << endl;
                    break; 
                case 2: // Orange Juice
                    cout << "You selected Salad and Orange Juice" << endl;
                    break;
                case 3: // Diet Coke
                    cout << "You selected Salad and Diet Coke" << endl;
                    break;
                case 4: // Lemonade
                    cout << "You selected Salad and Lemonade" << endl;
                    break;
        cout << "Enter the amount of foods and drinks" << endl;
        cin >> numOfFood >> numOfDrink;
        cout << "The foods " << food << ". The amount of food is " << numOfFood << endl;
        cout << "The Drinks " << drinks << ". The amount of drink is " << numOfDrink << endl;
        cout << "Final receipt is correct? Yes -1, No -0" << endl;
        cin >> result; 
    }
    cout << 
    
    return 0;
}

void greeting()
{
    cout << "===============================================================" << endl;
    cout << "The program helps to order at restaurant" << endl;
    cout << "The list of foods and drinks :" << endl;
    cout << "\n   Food : 1 = Noodle ($10)  Drinks : 1 = Soda ($4) " << endl;
    cout << "          2 = Pizza  ($15)           2 = Orange Juice ($5) " << endl;
    cout << "          3 = Sandwich ($8)          3 = Diet Coke ($3)  " << endl;
    cout << "          4 = Salad ($10)            4 = Lemonade ($4)   " << endl;
    cout << "===============================================================" << endl;

}