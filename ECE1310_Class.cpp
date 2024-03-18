

// Ch5. Practice Problem
/*int main()
{ 
    cout << "Count: " << endl;
    for(int i = 1; i <= 10; ++i)
    {
        for (int j = 1; j <= 10; ++j)
        {
            cout << i + j << "\n"; 
            
            cout << "\t";
        }
        
    }
}*/

   

// calculates the sum of all even numbers,
 // the sum of all odd numbers and the sum of all multiples of 5 from 0 to a 1000. 
 //The program must perform these calculations 3 times: 
 //One time using a single while loop, 
 //one time using a single do...while loop 
 // one time using a for loop

 // 9-25 Inclass  Government 

 

 
 // First Practice 
 /*
  #include <iostream>
 using namespace std; 
 int main()
 {
    int branch;
    int agency;

    //1: Legislative, 2:Executive, 3: Judicial 
    cout << "Enter branch(1-3): " << endl;
    switch(branch)
    {
        case 1: //1: Legislative,
        {
            cout << "Enter agency (1: senate, 2: House): " << endl;
            cin >> agency;

            switch (agency)
            {
                case 1: // 1: Senate 
                    cout << "You selected the senate in the Legislative branch!";
                    break;
                case 2: // 2: House 
                     cout << "You selected the House in the Legislative branch!";
                    break;
                default: 
                    break;
            }

            break;
        }
        case 2: //2:Executive
        {
            cout << "Enter agency (1: President, 2: Vice-President): " << endl;
            cin >> agency;

            switch (agency)
            {
                case 1: // 1: President 
                     cout << "You selected the president in the Executive branch!";
                    break;
                case 2: // 2: Vice Presidents 
                    break;
                default: 
                    break;
            }
    
            break; 
        }
        case 3: //3: Judicial 
        {
            cout << "Enter agency (1: Supreme Court, 2: Court of Appeals): " << endl;
            cin >> agency;

            switch (agency)
            {
                case 1: // 1: Supreme Court
                    break;
                case 2: //  2: Court of Appeals 
                    break;
                default: 
                    break;
            }

            break;
        }
        default:
               cout << "You selected an INVALID agency!";

            break;

    }

    return 0;
 }
 */

// Second Practice
/*#include <iostream>
using namespace std;

int main()
{
    bool a;
    bool b; 
    bool c;

    cout <<"NOT operator: " << endl;
    cout << "a\t" << "!a" << endl;
    a = false;
    c = !a;
    cout << boolalpha << a << "\t" << c << endl;
    a = true;
    c = !a;
    cout << boolalpha << a << "\t" << c << endl;

    cout << endl;
    cout << "AND operator: " << endl;
    cout << "a\tb\t" << "a && b" << endl;
    a = false;
    b = false;
    c = a&&b;
    cout << boolalpha << a << "\t" << b << "\t" << b << "\t" << c << endl;

    return 0;
}*/

// 10/11 In class practice problem
/*#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

// iteration i factorial 
int ifactorial(int n);

int main() 
{
    auto start = high_resolution_clock::now();
    // function being measured goes here
    cout << "Iteration Fatorial: " << ifactorial(1000) << endl;

    auto stop = high_resolution_clock::now();
    auto duration = (stop - start);
    cout << "Duration: " << duration.count() << endl;

}

int factorial (int n)
{
    int result;
    for (int i = n ; i >= 1; i--)
    {
        result *= i;
    }
    return result; 
}*/

/*#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
double supply_voltage(double);
double current(double, double, double);
double voltage_r1(double, double, double);
double voltage_r2(double, double, double);

int main()
{
	double r1;
	double r2;
	cout << "THIS PROGRAM WILL USE FUNCTIONS AND IT WILL BE ABLE TO ANALYZE THE CIRCUIT BELOW\n\n" << endl;
	cout << "FIGURE 1 - CIRCUIT UNDER TEST\t\t\t\t" << "FORMULAS TO BE USE FOR TABLE CALCULATION" << endl;
	cout << "             i(t)       v1(t)" << endl;
	cout << "             -----------^^^^-----------\t\t\t" << "Vs = 5cos (2PI * pow (10, 3) * t)" << endl;
	cout << "            |           R1             |" << endl;
	cout << "            |                          |" << endl;
	cout << "          =   =                        |" << endl;
	cout << "        =       =                      >\t\t" << "Through KLC, KVL: i(t) = Vs(t) / (R1 + R2)\n" << endl;
	cout << " vs(t) =  ~~~~~  =                  R2 <  v2(t)" << endl;
	cout << "        =       =                      >" << endl;
	cout << "          =   =                        |" << endl;
	cout << "            |                          |\t\t" << "v1(t) = i(t) * R1      v2(t) = i(t) * R2\n" << endl;
	cout << "            |                          |" << endl;
	cout << "             -------------------------- \n\n" << endl;
	cout << "Please, Enter a Numerical Value for r1. " << endl;
	cin >> r1;
	cout << "Please, Enter a Numerical Value for R2. " << endl;
	cin >> r2;
	//print the table titles 
	cout << "time (s)" << "\t";
	cout << "Vs(t) [s]" << "\t";
	cout << "i(t) [A]" << "\t";
	cout << "v1(t) [v]" << "\t";
	cout << "v2(t) [v]" << "\t";

	for (double t = 0.0000; t <= 0.0010; t++)
	{
		cout << t << "\t"; 
		cout << supply_voltage(t) << "\t"; 
		cout << current(t, r1, r2) << "\t"; 
		cout << voltage_r1(t, r1, r2) << "\t"; 
		cout << voltage_r2(t, r1, r2) << "\t";




	}

	return 0;
}
void greeting() {

	cout << "WELCOME TO MY PROGRAM THAT USES FUNCTIONS\n AND IS BALE TO ANALYZE THE BELOW CIRCUIT!" << endl;
}
double supply_voltage(double time) {

	double pi = 3.14159;

	return 5 * cos((2 * pi * pow(10, 3)) * time);
}
double current(double time, double r1, double r2) {
	
	return 0;
} 
double voltage_r1(double time, double r1, double r2) {

	return 0;
}
double voltage_r2(double time, double r1, double r2) {

	return 0;
}*/

// Ch 20 Bit Operatoions PA 2
/*  
    4byte 
    0x XX XX YY YY 
       ----- -----    -> source 
       Destination

#include <iostream>
using namespace std;

int main()
{
    char input[20];
    int header = 0;
    int destination = 0;
    int source = 0;

    cout << "Enter pacekt header: ";
    cin >> input;

    header = strtol(input, NULL, 16);
    
    cout << "You entered: " << header << endl; 
    
    destination =header & 0xFFFF0000;
    destination >>= 16;
    cout << "Destination: " << hex << uppercase <<  destination << endl;

    source = header & 0x0000FFFF;
    cout << "Source: " << hex << uppercase << source << endl;

    if(destination == 0x2BAD && source == 0xBEEF)
    {
        cout << "Message Received\n";
    }
    else
    {
         cout << "Message Not Received\n";
    }


}*/

/*#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream my_file_stream;
    my_file_stream.open("my_file.txt");
    my_file_stream << "Hello World\n";
    my_file_stream.close();
}*/

/* Ch 21 File operator IP 1
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main()
{
    ofstream myfile;
    myfile.open("odd_squares.txt");
    
    for (int i = 0; i <= 100; i++)
    {
        if (i % 2 != 0)
        {
            myfile << pow(i, 2) << endl;
        }
    }
    cout << "Program finished!\n";
    myfile.close();
}*/

/* Ch 21 File operator IP 2
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main()
{
    ofstream myfile;
    myfile.open("square_root.csv");

    myfile << "number,square root" << endl;
    for (int i = 0; i <= 100; i++)
    {
        myfile << i << ","; // put me next colum like \t
        myfile << sqrt(i) << endl;

    }
    cout << "Program finished\n";
    myfile.close();

    return 0;
}*/

// Ch 22 File operator section 2
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream myfilein;
    ofstream myfileout;
     
    myfile.open("my_file.txt");

    if(myfilein.open())
    {
        // already exists
        myfilein.close();
        myfileout.open("my_file.txt" , ios::app);
        myfileout << "This is an old file" << endl;
        cout << "This is an old file" << endl;
        myfileout.close();

    }
    else
    {
        // file does not exist
        myfileout.open("my_file.txt");
        myfileout << "This is an NEW file" << endl;
        cout << "This is an NEW file" << endl;
        myfileout.close();
    }
}