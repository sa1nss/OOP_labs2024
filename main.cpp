#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

struct Car {
    string manufacturer;
    string model;
    int year;
    float mileage;
};

void writeToFile(const Car& car) {
    ofstream outFile("cars.bin", ios::binary | ios::app);
    outFile.write(reinterpret_cast<const char*>(&car), sizeof(Car));
    outFile.close();
    cout << "Information about the car was recorded in a file." << endl;
}

vector<Car> readFromFile() {
    ifstream inFile("cars.bin", ios::binary);
    vector<Car> cars;
    Car temp;
    while (inFile.read(reinterpret_cast<char*>(&temp), sizeof(Car))) {
        cars.push_back(temp);
    }
    inFile.close();
    return cars;
}

void printCars(const vector<Car>& cars) {
    cout << "List of cars:" << endl;
    for (const auto& car : cars) {
        cout << "Producer: " << car.manufacturer << ", Model: " << car.model << ", Year: " << car.year << ", Run: " << car.mileage << endl;
    }
}

void addCar(vector<Car>& cars) {
    Car newCar;
    cout << "Enter the manufacturer: ";
    cin >> newCar.manufacturer;
    cout << "Enter the model: ";
    cin >> newCar.model;
    cout << "Enter the year of release:";
    cin >> newCar.year;
    cout << "Enter mileage: ";
    cin >> newCar.mileage;

    cars.push_back(newCar);
    writeToFile(newCar);
}

void deleteCar(vector<Car>& cars, int index) {
    if (index >= 0 && index < cars.size()) {
        cout << "Removed car: " << endl;
        cout << "Producer: " << cars[index].manufacturer << ", Model: " << cars[index].model << ", Year: " << cars[index].year << ", Run: " << cars[index].mileage << endl;
        cars.erase(cars.begin() + index);
    }
    else {
        cout << "Invalid index." << endl;
    }
}

void sortCarsByMileage(vector<Car>& cars) {
    sort(cars.begin(), cars.end(), [](const Car& a, const Car& b) {
        return a.mileage < b.mileage;
        });
    cout << "Sorting by mileage is complete." << endl;
}

int main() {
    vector<Car> cars = readFromFile();
    int choice;
    do {
        cout << "1. Add a car" << endl;
        cout << "2. Remove the car" << endl;
        cout << "3. Display a list of cars" << endl;
        cout << "4. Sort cars by mileage" << endl;
        cout << "0. Go out" << endl;
        cout << "Your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            addCar(cars);
            break;
        case 2:
            int index;
            cout << "Enter the vehicle index to be deleted: ";
            cin >> index;
            deleteCar(cars, index);
            break;
        case 3:
            printCars(cars);
            break;
        case 4:
            sortCarsByMileage(cars);
            break;
        case 0:
            break;
        default:
            cout << "Wrong choice. Try again." << endl;
            break;
        }
    } while (choice != 0);

    return 0;
}
