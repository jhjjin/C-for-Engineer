//Program Assignment #1
/*#include <iostream>
using namespace std;

int main()
{
    double r1, r2, r3; 
    double c1, c2, c3; // any real resistor and capacitor values entered by the user.
    string unitRes, unitCap;

    cout << "What is value of R1, R2, R3?" << endl; 
    cin >> r1 >> r2 >> r3;
    cout << "What is the unit of resistor?" << endl;
    cin >> unitRes;

    cout << "What is value of C1, C2, C3?" << endl;
    cin >> c1 >> c2 >> c3;  
    cout << "What is the unit of capacitor?" << endl;
    cin >> unitCap; //prompt the user to enter the R1-3 and C1-3 values accordingly.
    
    double equiRes = 1/ (1/r1 + 1/r2 + 1/r3);
    double equiCap = c1 + c2 + c3;
    double averRes = (r1 + r2+ r3) /3;
    double averCap = (c1 + c2 + c3) / 3;

    cout << "EquiRes is R_eq = " << equiRes << unitRes << endl;
    cout << "EquiCap is C_eq = " << equiCap << unitCap << endl;
    cout << "AverRes is R_av = " << averRes << unitRes << endl;
    cout << "AverCap is C_av = " << averCap << unitCap << endl;

    return 0;


}*/

//Programming Assignment #2

/*#include <iostream>
using namespace std;

int main()
{
    int selectSect;
    
    cout << "What you want to select between 1-Figure1, 2-Figure2?"<<
    cin >> selectSect;

    while (selectSect != 0)
    {
        if (select)
    }
}*/


//Programming Assignment #3 (nested loop)
/*#include <iostream>
#include <iomanip>
using namespace std;

int main()
{   
    double r_ab, r1_min, r1_max, r1_size, r2_min, r2_max, r2_size, r3;
    cout << "Rab" << endl;
    cin >> r_ab;

    cout << "R1 min" << endl;
    cin >> r1_min;
    cout << "R1 max" << endl;
    cin >> r1_max;
    cout << "R1_size" << endl;
    cin >> r1_size;

    cout << "R2_min" << endl;
    cin >> r2_min;
    cout << "R2_max" << endl;
    cin >> r2_max;
    cout << "R2_size" << endl;
    cin >> r2_size;

    cout << "R3 Possible values (ohms)" << endl;

    cout << "     R2(ohms) ";
    for (int i = r2_min; i < r2_max; i += r2_size)
    {
        cout << i << "\t";
    }
    cout << endl;
    cout << "R1(ohms)";
    cout << endl;
    for(int i = r1_min; i < r1_max; i+= r1_size)
    {
        cout << i << "\t\t";
        for(int j = r2_min; j < r2_max; j += r2_size)
        {
            r3 =(r_ab* i * j)/(i*j-r_ab*j- r_ab*i);
            cout << r3 << fixed << setprecision(2) << "\t";
        }
        cout << endl;
    }

}*/

//Programming Assignment #4 (switch, case)
/*#include <iostream>
using namespace std;

int main()
{
    int selectSect, selectEqu;

    cout << "what is slectSection? 1- power, 2- voltage, 3- current, 4- resistor?" << endl;
    cin >> selectSect;
    cout << "What is selectEqu? 1~3?" << endl;
    cin >> selectEqu;

    if (selectSect != 0)
    {
        while (selectSect != 0)
        {
            switch(selectSect)
            {
                case 1:
                    switch(selectEqu)
                        case 1:
                            cout << ;;;
                            break;
                        case 2:
                            break; 
                 break;
                case 2:
                    break;
                case 3:
                    break;
                case 4:
            }
        }
    }
    
}*/

//PP CH3 Quadratic eqaution
/*#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c;
    double discriminant;
    double x1, x2;

    discriminant = pow(b,2) - 4 * a * c;
    

    if (discriminant < 0)
    {
        cout << "invalid solution" << endl;
    }
    else 
    {
        x1 = (-b + sqrt(discriminant))/ 2 * a;
        x2 = (-b - sqrt(discriminant))/ 2 * a;

        cout << "x1: " << x1;
        cout << "x2: " << x2;
    }
}*/

// CH 8 PP
/*#include <iostream>
#include <cmath>
using namespace std;

// Function prototype
void greeting();
double _y1(double);
double _y2(double);
double _y3(double);
double _y4(double);
bool intersection_chekck_y1(double, double, double, double);

int main()
{
    greeting();

    cout << endl;

    cout << "x" << "\t";
    cout << "_y1" << "\t";
    cout << "_y2" << "\t";
    cout << "_y3" << "\t";
    cout << "_y4" << "\t";
    cout << "intersection \n";

    for (double x = -10; x <= 10; x += 0.5)
    {
        cout << x << "\t";
        cout << _y1(x) << "\t";
        cout << _y2(x) << "\t";
        cout << _y3(x) << "\t";
        cout << _y4(x) << "\t";
        cout << boolalpha << intersection_chekck_y1(_y1(x),_y2(x),_y3(x),_y4(x)) << endl;
    }
    return 0;

}


void greeting()
{
    cout << "Welcome to my Polynomials program\n";
}
double _y1(double x)
{
   return x + 4;
}
double _y2(double x)
{
    return pow(x,2) - x + 5;
}
double _y3(double x)
{
    return 2* pow(x,3) + 11 * pow(x,2);
}
double _y4(double x)
{
    return 6 * pow(x,4) - 2 * pow(x,2) + 3 * x - 1;
}

bool intersection_chekck_y1(double y1, double y2, double y3, double y4)
{
    return (y1 == y2 || y1 == y3 || y1 == y4);
}*/

// CH4 - conditions and Repetition -> simple calculation
/*#include <iostream>
using namespace std;

int main()
{
    double a,b; 
    double operation;
    bool flag = true;
    
    while (flag == true)
    {
        cout << "Enter two operands a, b: " << endl;
        cin >> a >> b;
        cout << "What is the operand type: " << endl;
        cin >> operation;

        if (operation == 0)
        {
            flag = false;
        }
        if (operation == 1) // add
        {
            cout << "Sum: " << a + b << endl;
        }
        if (operation == 2) // subtract
        {
            cout << "Difference: " << a - b << endl; 
        }

    }//prompts the user for the type of operation to perform and for 
    //the two operands (“1” of add, “2” for subtract, “3” for multiply, “4” for divide).
   //The program calculates the requested operation and displays the result.
  // repeats. Use a while loop to accomplish this.
  // If the user enters “0” as the operation type, the program will exit the loop.

    return 0;
}*/

//CH5 Control statments Lopps 
/*#include <iostream>
using namespace std;

int main()
{
    int last_number, counter;
    int even_sum, odd_sum, _5x_sum;

    cout << "Enter last interger to sum : ";
    cin >> last_sum;

    // using for loop
    
    even_sum = 0;
    odd_sum = 0;
    _5x_sum = 0;

    for (int i = 1; i <= last_sum; i++)
    {
        if (i % 2 == 0)
        {
            even_sum += i ;
        }
        else (i % 5 == 0)
        {
            odd_sum += i;
        }
        if (i % 5 == 0)
        {
            _5x_sum += i;
        } 
    }
    cout << "For Loop";

    // do while loop 
    
    even_sum = 0;
    odd_sum = 0;
    _5x_sum = 0;
    counter = 1; // because do while loop execute first

    do
    {
        if (counter % 2 == 0)
        {
            even_sum += counter;
        }
        else 
        {
            odd_sum += counter;
        }
        if (counter % 5 == 0)
        {
            _5x_sum += counter;
        }
        counter++;
    } while (counter <= last_number);
    
    cout << "Do..while lopp : " << endl;
    cout << "Even su: " << even_sum << endl;
    cout << "Odd "-----;
    
    return 0;
}*/

// CH6 Factorial  3! = 3x2x1 = 6

/*#include <iostream>
using namespace std;

int main()
{
    int operand;
    int result;

    cout << "Enter operand: ";
    cin >> oeprand;

    result = 1;
    
    for (int i = operand;i > =1; i --)
    {
        result *= i;
    }
    cout << "Fatorial : " << result << endl; 
}*/

/*CH 6 multiple charts
#include <iostream>
using namespace std;

int main() 
{
    int product;

    cout << "\t\t";
    for(int b = 1; b <= 10; b++)
    {
        cout << b << "\t";
    }
    
    cout << endl;
    cout << "\t\t";
    for (int b = 1; b <= 10; b++)
    {
        cout << " " << "\t";
    }
    cout << endl;
    for(int a = 1; a <= 10; a++)
    {
        cout << a << "\t\t";
        for (int b = 1; b <= 10; b++)
        {
            product = a * b;
            cout << product << "\t";
        }
        cout << endl;
    }
}*/

