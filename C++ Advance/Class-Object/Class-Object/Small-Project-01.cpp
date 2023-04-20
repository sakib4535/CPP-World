#include <iostream>
using namespace std;

class Location {
protected:
    string name;
public:
    Location(string n) : name(n) {}
};

class Area : public Location {
protected:
    int areaCode;
public:
    Area(string n, int c) : Location(n), areaCode(c) {}
};

class Weather : public Area {
public:
    Weather(string n, int c) : Area(n, c) {}
    void displayWeather() {
        switch (areaCode) {
            case 1:
                cout << "Weather in " << name << ": Sunny" << endl;
                break;
            case 2:
                cout << "Weather in " << name << ": Cloudy" << endl;
                break;
            case 3:
                cout << "Weather in " << name << ": Rainy" << endl;
                break;
            case 4:
                cout << "Weather in " << name << ": Snowy" << endl;
                break;
            case 5:
                cout << "Weather in " << name << ": Foggy" << endl;
                break;
            default:
                cout << "Invalid area code!" << endl;
                break;
        }
    }
};

int main() {
    int areaCode;
    cout << "Select an area code:" << endl;
    cout << "1. Dhaka" << endl;
    cout << "2. Chittagong" << endl;
    cout << "3. Sylhet" << endl;
    cout << "4. Rajshahi" << endl;
    cout << "5. Barishal" << endl;
    cout << "Enter area code (1-5): ";
    cin >> areaCode;

    Weather myObj("", areaCode);
    myObj.displayWeather();

    cout << "Likert scale rating (1-5): ";
    int rating;
    cin >> rating;
    cout << "Thank you for rating the weather condition!" << endl;

    return 0;
}
