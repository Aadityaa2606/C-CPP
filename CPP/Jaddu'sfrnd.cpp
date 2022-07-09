#include <iostream>
#include <string>

using namespace std;

class Vehicle
{
public:
    int mileage;
    int price;
};

class Car : public Vehicle
{
public:
    int ownership_cost;
    int warranty;
    int seat_capacity;
    string fuel_type;
};
class Bike : public Vehicle
{
public:
    int num_cylinders;
    int num_gears;
    string cooling_type;    
    string wheel_type;
    int fueltank_size;
};

class Audi : public Car
{
public:
    string model_type;
};
class Ford : public Car
{
public:
    string model_type;
};

class Bajaj : public Bike
{
public:
    string model_type;
};
class TVS : public Bike
{
public:
    string model_type;
};

int main()
{
    Audi car1;
    car1.model_type = "Audi A4";
    car1.ownership_cost = 4049000;
    car1.warranty = 10;
    car1.seat_capacity = 5;
    car1.fuel_type = "petrol";
    car1.mileage = 18;
    Ford car2;
    car2.model_type = "Ford Aspire";
    car2.ownership_cost = 521000;
    car2.warranty = 7;
    car2.seat_capacity = 5;
    car2.fuel_type = "petrol";
    car2.mileage = 18.5;
    cout << car1.model_type << endl;
    cout << car1.ownership_cost << endl;
    cout << car1.warranty << endl;
    cout << car1.seat_capacity << endl;
    cout << car1.fuel_type << endl;
    cout << car1.mileage << endl;
    cout << car2.model_type << endl;
    cout << car2.ownership_cost << endl;
    cout << car2.warranty << endl;
    cout << car2.seat_capacity << endl;
    cout << car2.fuel_type << endl;
    cout << car2.mileage << endl;
    return 0;
}