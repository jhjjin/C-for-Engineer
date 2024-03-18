#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const int MAX_ITEMS = 20; 

void greeting();

int main()
{
    int numberFood, numberDrink, moreOrNot, itemCount = 0;
    double totalCost = 0.0;

    string foodList[MAX_ITEMS];
    string drinkList[MAX_ITEMS];
    double individualFoodPrices[MAX_ITEMS];
    double individualDrinkPrices[MAX_ITEMS];

    greeting();

    do
    {
        cout << "Select the food: ";
        cin >> numberFood;

        switch (numberFood)
        {
            case 1: // Noodle 
                foodList[itemCount] = "Noodle";
                individualFoodPrices[itemCount] = 10.0;
                break;
            case 2: // Pizza 
                foodList[itemCount] = "Pizza";
                individualFoodPrices[itemCount] = 15.0;
                break;
            case 3: // Sandwich
                foodList[itemCount] = "Sandwich";
                individualFoodPrices[itemCount] = 8.0;
                break;
            case 4: // Salad
                foodList[itemCount] = "Salad";
                individualFoodPrices[itemCount] = 10.0;
                break;
            default:
                cout << "Invalid choice." << endl;
                break;
        }

        cout << "Select the drink: ";
        cin >> numberDrink;

        switch (numberDrink)
        {
            case 1: // Soda
                drinkList[itemCount] = "Soda";
                individualDrinkPrices[itemCount] = 4.0;
                break;
            case 2: // Orange Juice
                drinkList[itemCount] = "Orange Juice";
                individualDrinkPrices[itemCount] = 5.0;
                break;
            case 3: // Diet Coke
                drinkList[itemCount] = "Diet Coke";
                individualDrinkPrices[itemCount] = 3.0;
                break;
            case 4: // Lemonade
                drinkList[itemCount] = "Lemonade";
                individualDrinkPrices[itemCount] = 4.0;
                break;
            default:
                cout << "Invalid choice." << endl;
                break;
        }

        itemCount++;

        cout << "Do you want more food or drinks? (1 - Yes, 0 - No): ";
        cin >> moreOrNot;

    } while (moreOrNot == 1);

    cout << "\n=======================================Receipt=======================================" << endl;
    cout << left << setw(15) << "Food" << setw(15) << "Drink" << setw(20) << "Food Price" << setw(20) << "Drink Price" << endl;

    for (int i = 0; i < itemCount; ++i)
    {
        cout << left << setw(15) << foodList[i] << setw(15) << drinkList[i] << setw(20) << fixed << setprecision(2) << individualFoodPrices[i] << setw(20) << fixed << setprecision(2) << individualDrinkPrices[i] << endl;
        totalCost += individualFoodPrices[i] + individualDrinkPrices[i];
    }

    cout << "=====================================================================================\n" << endl;
    cout << "Total Cost: $" << fixed << setprecision(2) << totalCost << endl;
    cout << "Thank you for your order!" << endl;

    return 0;
}

void greeting()
{
    cout << "=====================================================================================" << endl;
    cout << "                        Welcome to Jeong's restaurant!                     " << endl;
    cout << "                           Select foods and drinks                             " << endl;
    cout << "=====================================================================================" << endl;
    cout << "               Special Event! Jeong's restaurant has no Sales Tax!!                  " << endl;
    cout << "=====================================================================================" << endl;
    cout << "                   This is the foods and drinks with prices                        " << endl;
    cout << "Foods: 1 - Noodle ($10), 2 - Pizza ($15), 3 - Sandwich ($8), 4 - Salad ($10)  " << endl;
    cout << "Drinks: 1 - Soda ($4), 2 - Orange Juice ($5), 3 - Diet Coke ($3), 4 - Lemonade ($4)" << endl;
    cout << "=====================================================================================" << endl;
}
