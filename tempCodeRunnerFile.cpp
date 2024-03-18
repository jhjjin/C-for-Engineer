#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;

void greeting();

int main()
{
    int numberFood, numberDrink, moreOrNot;
    double totalCost = 0.0;
    string foodName, drinkName;
    vector<string> foodList;
    vector<string> drinkList;
    vector<double> individualPrices;

    greeting();

    do
    {
        cout << "Select the food: ";
        cin >> numberFood;

        switch (numberFood)
        {
            case 1: // Noodle 
                foodName = "Noodle";
                individualPrices.push_back(10.0);
                break;
            case 2: // Pizza 
                foodName = "Pizza";
                individualPrices.push_back(15.0);
                break;
            case 3: // Sandwich
                foodName = "Sandwich";
                individualPrices.push_back(8.0);
                break;
            case 4: // Salad
                foodName = "Salad";
                individualPrices.push_back(10.0);
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
                drinkName = "Soda";
                individualPrices.push_back(4.0);
                break;
            case 2: // Orange Juice
                drinkName = "Orange Juice";
                individualPrices.push_back(5.0);
                break;
            case 3: // Diet Coke
                drinkName = "Diet Coke";
                individualPrices.push_back(3.0);
                break;
            case 4: // Lemonade
                drinkName = "Lemonade";
                individualPrices.push_back(4.0);
                break;
            default:
                cout << "Invalid choice." << endl;
                break;
        }

        foodList.push_back(foodName);
        drinkList.push_back(drinkName);

        cout << "Do you want more food or drinks? (1 - Yes, 0 - No): ";
        cin >> moreOrNot;

    } while (moreOrNot == 1);

    cout << "\n========== Receipt ==========" << endl;
    cout << "Food" << "\t" << " Drink" << "\t" <<  "      Price" << endl;

    for (size_t i = 0; i < foodList.size(); ++i)
    {
        cout << foodList[i] << "\t " << drinkList[i] << "\t" << fixed << setprecision(2)  << individualPrices[i] << endl;
    }

    cout << "==============================" << endl;
    cout << "Total Cost: $" << totalCost << endl;
    cout << "Thank you for your order!" << endl;

    return 0;
}

void greeting()
{
    cout << "=====================================================================================" << endl;
    cout << "                        Welcome to Jeong's restaurant!                     " << endl;
    cout << "                           Select foods and drinks                             " << endl;
    cout << "=====================================================================================" << endl;
    cout << "\n===================================================================================" << endl;
    cout << "                   This is the foods and drinks with prices                        " << endl;
    cout << "Foods: 1 - Noodle ($10), 2 - Pizza ($15), 3 - Sandwich ($8), 4 - Salad ($10)  " << endl;
}