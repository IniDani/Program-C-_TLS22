#include <iostream>
using namespace std;

void massConversion();
void lengthConversion();
void tempConversion();

void conversion(){
    int conversionList;

    cout << endl;
    cout << "Choose from the list below" << endl;
    cout << "1 - Mass conversion" << endl;
    cout << "2 - Length conversion" << endl;
    cout << "3 - Temperature conversion" << endl;
    cout << "Option: ";
    cin >> conversionList;

    if (conversionList == 1){
        massConversion();
    }
    else if (conversionList == 2){
        lengthConversion();
    }
    else if (conversionList == 3){
        tempConversion();
    }
    else {
        cout << "Sorry, " << conversionList << " is not an option." << endl;
        conversion();
    }
}

void massConversion(){
    int massList, again;
    double mass;

    cout << endl;
    cout << "Choose from the option list below" << endl;
    cout << "1 - kilogram to pound" << endl;
    cout << "2 - pound to kilogram" << endl;
    cout << "Option: ";
    cin >> massList;
    cout << endl;

    if (massList == 1){
        cout << "Enter a mass in kilograms: ";
        cin >> mass;
        cout << mass << " kg is equal to " << mass * 2.20462 << " lb." << endl;
        cout << endl;
    }
    else if (massList == 2){
        cout << "Enter a mass in pounds: ";
        cin >> mass;
        cout << mass << " lb is equal to " << mass * 0.453592 << " kg." << endl;
        cout << endl;
    }
    else {
        cout << "Sorry, " << massList << " is not an option." << endl;
        massConversion();
    }
    
    cout << "Do you want to do another conversion?" << endl;
    cout << "1 - yes" << endl;
    cout << "(any number) - no" << endl;
    cin >> again;
    if (again == 1) conversion();
}

void lengthConversion(){
    int lengthList, again;
    double length;

    cout << endl;
    cout << "Choose from the option list below" << endl;
    cout << "1 - centimeter to inch" << endl;
    cout << "2 - inch to centimeter" << endl;
    cout << "3 - meter to feet" << endl;
    cout << "4 - feet to meter" << endl;
    cout << "5 - kilometer to mile" << endl;
    cout << "6 - mile to kilometer" << endl;
    cout << "Option: ";
    cin >> lengthList;
    cout << endl;

    if (lengthList == 1){
        cout << "Enter a length in centimeters: ";
        cin >> length;
        cout << length << " cm is equal to " << length / 2.54 << " in." << endl;
        cout << endl;
    }
    else if (lengthList == 2){
        cout << "Enter a length in inches: ";
        cin >> length;
        cout << length << " in is equal to " << length * 2.54 << " cm." << endl;
        cout << endl;
    }
    else if (lengthList == 3){
        cout << "Enter a length in meters: ";
        cin >> length;
        cout << length << " m is equal to " << length * 3.28084 << " ft." << endl;
        cout << endl;
    }
    else if (lengthList == 4){
        cout << "Enter a length in feets: ";
        cin >> length;
        cout << length << " ft is equal to " << length / 3.28084 << " m." << endl;
        cout << endl;
    }
    else if (lengthList == 5){
        cout << "Enter a length in kilometers: ";
        cin >> length;
        cout << length << " km is equal to " << length / 1.60934 << " mi." << endl;
        cout << endl;
    }
    else if (lengthList == 6){
        cout << "Enter a length in miles: ";
        cin >> length;
        cout << length << " mi is equal to " << length * 1.60934 << " km." << endl;
        cout << endl;
    }
    else {
        cout << "Sorry, " << lengthList << " is not an option." << endl;
        lengthConversion();
    }

    cout << "Do you want to do another conversion?" << endl;
    cout << "1 - yes" << endl;
    cout << "(any number) - no" << endl;
    cin >> again;
    if (again == 1) conversion();
}

void tempConversion(){
    int tempList, again;
    double temp;

    cout << endl;
    cout << "Choose from the option list below" << endl;
    cout << "1 - celcius to fahrenheit" << endl;
    cout << "2 - fahrenheit to celcius" << endl;
    cout << "Option: ";
    cin >> tempList;
    cout << endl;

    if (tempList == 1){
        cout << "Enter a temperature in celcius: ";
        cin >> temp;
        cout << temp << " celcius is equal to " << (temp * 9 / 5) + 32 << " fahrenheit." << endl;
        cout << endl;
    }
    else if (tempList == 2){
        cout << "Enter a temperature in fahrenheit: ";
        cin >> temp;
        cout << temp << " fahrenheit is equal to " << (temp - 32) * 9 / 5 << " celcius." << endl;
        cout << endl;
    }
    else {
        cout << "Sorry, " << tempList << " is not an option." << endl;
        tempConversion();
    }

    cout << "Do you want to do another conversion?" << endl;
    cout << "1 - yes" << endl;
    cout << "(any number) - no" << endl;
    cin >> again;
    if (again == 1) conversion();
}

int main(){
    cout << "========================================" << endl;
    cout << endl;
    cout << "\t    Unit Conversion" << endl;
    cout << endl;
    cout << "\tMetric and Imperial Unit" << endl;
    cout << endl;
    cout << "========================================" << endl;
    cout << endl;
    conversion();

    return 0;
}