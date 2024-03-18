/* Ch 6 
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
#define PI 3.14159
void greeting();
double voltage_supply(double time);
double current(double voltage, double resistance);
void calc_voltages(double resistor[], int array_size, double current, double voltage[]);
int main()
{
    const int array_size = 8;
    double resistors[array_size];
    double resTotal = 0.0;

    cout << "Enter R0-R7" << endl;
    for (int i = 0; i < array_size; i++)
    {
        cin >> resistors[i];
        resTotal += resistors[i];
    }
    cout << "t [s]\t vs [V]\t i [A]\t";
    for (int i = 0; i < array_size; i++)
    {
        cout << "VR" << i << " [V]\t";
    }
    cout << endl;
    cout << "====\t ======\t =====\t";
    for(int i = 0; i < array_size; i++)
    {
        cout << "======\t";
    }
    cout << endl;
    cout << fixed << setprecision(4) << endl;
    for(double t = 0.0000; t <= 0.0011; t += 0.0001)
    {
        double voltage[array_size];
        calc_voltages(resistors, array_size, current(voltage_supply(t), resTotal), voltage);
        cout << t << "\t" << voltage_supply(t) << "\t" << current(voltage_supply(t), resTotal) << "\t";

        for(int i = 0; i < array_size; i++)
        {
            cout << voltage[i] << "\t";
        }
        cout << endl;
    }
}
void greeting()
{
    cout << "Welcome " << endl;
}
double voltage_supply(double time)
{
    return 5 * cos((2 * PI * pow(10,3)) * time);
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

/* Ch 7
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
#define PI 3.14159

void vac_supply(double vmax, double f, double *time, int time_size, double *vac);
void vac_half_wave_rectify(double *vac, int size);
void vac_full_wave_rectify(double *vac, int size);

int main()
{
    const int array_size = 20;
    double time[array_size];
    double vac[array_size];
    double vac_half[array_size];
    double vac_full[array_size];

    double vmax, f;
    cout << "Enter Vmax" << endl;
    cin >> vmax;
    cout << "Enter f" << endl;
    cin >> f;

    cout << "time (s)\tVs (V)\tVhf (V)\tVf1 (V)" << endl;
    cout << "=======\t======\t=======\t=======" << endl;

    for(int i = 0; i < array_size; i++)
    {
        time[i] = i * 0.1;
    }

    cout << fixed << setprecision(2);
    for(int i = 0; i < array_size; i++)
    {
        vac_supply(vmax, f, time, array_size, vac);
        vac_half[i] = vac[i];
        vac_full[i] = vac[i];
        vac_half_wave_rectify(vac_half, array_size);
        vac_full_wave_rectify(vac_full, array_size);

        cout << left << setw(7) << time[i] << "\t" << vac[i] << "\t" << vac_half[i] <<"\t" << vac_full[i] << endl;
    }
    return 0;
}

void vac_supply(double vmax, double f, double *time, int time_size, double *vac)
{
    for(int i = 0; i < time_size; i++)
    {
        double t = time[i];
        vac[i] = vmax * cos(2 * PI * f * t);
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
        if(vac[i] < 0)
        {
            vac[i] = abs(vac[i]);
        }
        else
        {
            vac[i] = vac[i];
        }
    }
}*/

/* Ch 8
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    const int color_count = 12;
    const char* band_colors[color_count] = {"black" , "brown", "red", "orange", "yellow", "green",\
                                            "blue", "violet", "grey", "white", "gold", "silver"};

    int first_count, second_count;
    double multiplier;
    const double multipliers[] = {1, 10 , 100, 1000, 10000, 100000, 100000, 100000,100000000, 100000000, 0.1, 0.01};
    
    char first_color[12], second_color[12], third_color[12];
    
    cout << "Enter the 3 band colors; they" << endl;
    cout << "must be in lowercase letters:";
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
    cout << "First Digit:\t\t" << first_color << " = " << first_count << endl;
    for(int i = 0; i < color_count; i++)
    {
        if(strcmp(band_colors[i], second_color) == 0)
        {
            second_count = i; 
            break;
        }
    }
    cout << "Second Digit:\t\t" << second_color << " = " << second_count << endl;
    for(int i = 0; i < color_count; i++)
    {
        if(strcmp(band_colors[i], third_color) == 0)
        {
            multiplier = multipliers[i]; 
            break;
        }
    }
    cout << "Third Digit:\t\t" << third_color << " = " << multiplier << endl;

    double resistor = ((first_count * 10) + second_count) * multiplier;
    cout << "Resistor value = \t\t" << resistor << " ohms" << endl;



}*/

/* Ch 9
#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

void get_led_driver_params_from_user(led_driver_params* p);
resistor_params calc_resisotr_params(led_driver_params* p);

struct led_parameter
{
    double vcc;
    double vLow;
    double numOfDrive;
    double iF;
    double vF;
};
struct resistor
{
    double resistance;
    double power;
};

int main()
{
    led_driver_params ledParams;
    get_led_river_params_from_user(&ledParams);

    resistor_params resistorParams = calc_resistor_params(&ledParams);

    cout << "Resistor Parameters" << endl;
    cout<< "======================" << endl;
    cout << "Resistance:        " << resistorParams.resistance << " ohms" << endl;

}
void get_led_driver_params_from_user(led_driver_params* p)
{
    cout << "Enter Vcc voltage in volts:\t\t";
    cin >> p->vcc;
    cout << "Enter Vlow voltage in volts:\t\t";
    cin >> p->vLow;
    cout << "Enter number of leds to drive:\t\t";
    cin >> p->numOfDrive;
    cout << "Enter led's If (forward current) in Amps:\t\t";
    cin >> p->iF;
    cout << "Enter led's Vf (forward voltage in volts:\t\t";
    cin >> p->vF;
}
resistor_params calc_resisotr_params(led_driver_params* p)
{
    resistor_params result;
    result.resistance = (((p->vcc - p->vLow) - p->vF) / p->numOfDrive * p->iF);
    result.power = pow(p->numOfDrive * p->iF, 2) * result.resistance;
}*/

// Ch 10
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

struct circuitParam
{
    double v0;
    double vs;
    double r;
    double c;
};

int main()
{
    ofstream my_csv_stream;
    my_csv_stream.open("_step_response.cvs");

    double t0, tF, tStep;

    circuitParam circuit;

    cout << "Enter V0, Vs, R, C" << endl;
    cin >> circuit.v0 >> circuit.vs >> circuit.r >> circuit.c;

    cout << "Enter t0(s), tf(s), tstep(s): " << endl;
    cin >> t0 >> tF >> tStep;

    my_csv_stream << "Time(s),Vc(V)" << endl;
    for(double i = t0; i < tF; i += tStep)
    {
        my_csv_stream << i << ",";
        if(i < 0)
        {
            my_csv_stream << circuit.v0 << endl;
        }
        else
        {
            cout << circuit.vs + (circuit.v0 - circuit.vs) * exp(-i / (circuit.r * circuit.c));
        }
       
    }
    cout << "Program finished" << endl;
    my_csv_stream.close();
    return 0;

}