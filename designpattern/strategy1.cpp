#include <iostream>
using namespace std;

class PaymentStrategy {
public:
    virtual void pay(int amount) = 0; // pure virtual function
};
class CashPayment : public PaymentStrategy {
public:
    void pay(int amount) {
        cout << "Paid " << amount << " using Cash" << endl;
    }
};
class CreditCardPayment : public PaymentStrategy {
public:
    void pay(int amount) {
        cout << "Paid " << amount << " using Credit Card" << endl;
    }
};
class UPIPayment : public PaymentStrategy {
public:
    void pay(int amount) {
        cout << "Paid " << amount << " using UPI" << endl;
    }
};
//create context class using strategy
class PaymentContext {
private:
    PaymentStrategy* strategy;

public:
    PaymentContext(PaymentStrategy* s) {
        strategy = s;
    }

    void executePayment(int amount) {
        strategy->pay(amount);
    }
};
int main() {

    CreditCardPayment creditCard;
    UPIPayment upi;
    CashPayment cash;

    PaymentContext context(&upi);
    context.executePayment(250);

    PaymentContext context2(&creditCard);
    context2.executePayment(1000);

    PaymentContext context3(&cash);
    context3.executePayment(500);

    return 0;
}