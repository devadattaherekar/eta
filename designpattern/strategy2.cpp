#include <iostream>
using namespace std;

class PricingStrategy {
public:
    virtual double calculatePrice(double distance) = 0;
};

class NormalPricing : public PricingStrategy {
public:
    double calculatePrice(double distance) {
        return distance * 10;
    }
};
class SurgePricing : public PricingStrategy {
public:
    double calculatePrice(double distance) {
        return distance * 10 * 2;
    }
};
class RideContext {
private:
    PricingStrategy* strategy;

public:
    RideContext(PricingStrategy* s) {
        strategy = s;
    }

    void calculateFare(double distance) {
        double price = strategy->calculatePrice(distance);
        cout << "Total fare: " << price << endl;
    }
};
int main() {

    NormalPricing normal;
    SurgePricing surge;

    RideContext ride1(&normal);
    ride1.calculateFare(10);

    RideContext ride2(&surge);
    ride2.calculateFare(10);

    return 0;
}