/* PA 06
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
#define PI 3.14159

double voltage_supply(double time);
double current(double voltage, double resistance);
void calc_voltages(double resistor[], int array_size, double current, double voltage[]);

int main()
{
    const int numOfRes = 8;
    double resistors[numOfRes];
    double resTotal = 0.0;
    
    for (int i = 0; i < numOfRes; ++i)
    {
        cout << "Enter the value of R" << i << " : ";
        cin >> resistors[i];
        resTotal += resistors[i];
    }

    cout << "t [s]\t Vs [V]\t i [A]\t";
    for(int i = 0; i < numOfRes; i++)
    {
        cout << "VR " << i << "[V]" << "\t";
    }
    cout << endl;

    cout << "=====\t ======\t =====\t";
    for (int i = 0; i < numOfRes; i++)
    {
        cout << "======" << "\t";
    }
    cout << endl;
    
    for(double t = 0.0000; t < 0.0011; t += 0.0001)
    {
        double voltage[numOfRes];
        double currentVal = current(voltage_supply(t), resTotal);
        calc_voltages(resistors, numOfRes, currentVal, voltage);

        cout << fixed << setprecision(4); 
        cout << t << "\t" << voltage_supply(t) << "\t" << currentVal << "\t";

        for(int i = 0; i < numOfRes; i++)
        {
            cout << voltage[i] << "\t";
        }
        cout << endl;
    }

    return 0;
}

double voltage_supply(double time)
{
    return 5 * cos ((2 * PI * pow(10,3))*time); 
}
double current(double voltage, double resistance)
{
    return voltage / resistance;
}
void calc_voltages(double resistor[], int array_size, double current, double voltage[])
{
    for(int i = 0; i < array_size; i++)
    {
        voltage[i] = current * resistor[i];
    }
}*/
/* PA 07
#include <iostream> 
#include <iomanip>
using namespace std;
#define PI 3.14159

void vac_supply(double vamx, double f, double *time, int time_size, double *vac);
void vac_half_wave_rectify(double *vac, int size);
void vac_full_wave_rectify(double *vac, int size);

int main()
{
    double vmax, f;

    const int time_size = 20;
    double time[time_size];
    double vac[time_size];
    double vac_half[time_size];
    double vac_full[time_size];


    cout << "what is Vmax value?" << endl;
    cin >> vmax;
    cout << "what is f value?" << endl;
    cin >> f;

    cout << "time (s)\t Vs (V)\t Vhf (V)\t Vf1 (v)" << endl;
    cout << "========\t =====\t =======\t =======" << endl;

    for(int i = 0; i < time_size; i++)
    {
        time[i] = i * 0.1;
    }

    cout << fixed << setprecision(2);
    for(int i = 0; i < time_size; i++)
    {
        vac_supply(vmax, f, time, time_size, vac);
        vac_half[i] = vac[i];
        vac_full[i] = vac[i];

        vac_half_wave_rectify(vac_half, time_size);
        vac_full_wave_rectify(vac_full, time_size);

        cout << time[i] << "\t" << vac[i] << "\t" << vac_half[i] << "\t" << vac_full[i] << endl;

    }

}

void vac_supply(double vmax, double f, double *time, int time_size, double *vac)
{
    for(int i = 0; i < time_size; i++)
    {
        double t = time[i];
        vac[i] = vmax * cos (2 * PI * f * t);
    }
}
void vac_half_wave_rectify(double *vac, int size)
{
    for(int i = 0; i < size; i++)
    {
        if(vac[i] < 0)
        {
            vac[i] = 0;
        }
        else 
        {
            vac[i] = vac[i];
        }
    }
}
void vac_full_wave_rectify(double *vac, int size)
{
    for(int i = 0; i < size; i++)
    {
        vac[i] = abs(vac[i]);
    }
}*/

//PA08
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int color_count = 12;
    const char* band_colors[color_count] = {"black", "brown", "red", "orange", "yellow", "green", \
                                            "blue", "violet", "grey", "white", "gold", "silber"};
    
    const double multipliers[12] = {1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 10000000, 1000000000, 0.1, 0.01 };
                                    
    int first_count, second_count;
    double multiplier;

    char first_color[12], second_color[12], third_color[12];

    cout << "Enter the 3 band colors; they" << endl;
    cout << "must be in lowercase letters: ";
    cin >> first_color >> second_color >> third_color;
    cout << "\n\n";

    for(int i = 0; i < color_count; i++)
    {
        if(strcmp(band_colors[i], first_color) == 0)
        {
            first_count = i;
            break;
        }
    }
    cout << "First Digit:      " << first_color << " = " << first_count << endl;

    for(int i = 0; i < color_count; i++)
    {
        if(strcmp(band_colors[i], second_color) == 0)
        {
            second_count = i;
            break;
        }
    }
    cout << "Second Digit:      " << second_color << " = " << second_count << endl;

    for(int i = 0; i < color_count; i++)
    {
        if(strcmp(band_colors[i], third_color) == 0)
        {
            multiplier = multipliers[i];
            break;
        }
    }
    cout << "Multipliers:      " << third_color << " = " << multiplier << endl;

    double resistor_value = ((first_count * 10) + second_count) * multiplier;
    cout << "\n\n";
    cout << "Resistor value = " << resistor_value << " ohms";


    return 0;


}