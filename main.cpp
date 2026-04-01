#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double rate1 = 1.10;
    const double rate2 = 2.20;
    const double rate3 = 3.70;
    const double rate4 = 4.80;
    double total_charge;
    double weight, distance, rate;

    cout << "Enter the package weight and distance: ";
    cin >> weight >> distance;
if (weight <= 0 || weight > 20){
    cout << "weight invalid wrong" << endl;}
    else if (distance < 10 || distance > 3000){
        cout << "distance invalid wrong" << endl;
    }
    else {
        if (weight <= 2){rate = rate1;}
        else if (weight <= 6){rate = rate2;}
        else if (weight <= 10){rate = rate3;}
        else {rate = rate4;}
    if (distance < 500){
        total_charge = rate;
    }else{
        total_charge = (distance / 500) * rate;
    }
    
    // TODO

    cout << setw(10) << left << setprecision(2) << fixed;
    cout << total_charge << endl;

    return 0;
}
