// building a program for a catering service using Arithmetic calculations using
// inputs from a user and giving them the bill as a result.

#include <cstdio>
#include <iomanip>
#include <iostream>
using namespace std;


int main() {

    int tot_people, x, y; // delcaring variables
    double tot_a, tot_c, price_a, price_c, price_d, roomf, tax, taxamount, deposit, tot_d, tot_f, subtotal, bdue;

    cout << "Number of adults to be served: "; // giving commands to -
    cin >> x;        // - receive input data from the user and store it onto variables
    cout << "Number of children to be served: ";
    cin >> y;
    cout << "Price per Adult: " << '$';
    cin >> price_a;
    cout << "Price for a single dessert: " << '$';
    cin >> price_d;
    cout << "Enter the Room Fee charge :" << '$';
    cin >> roomf;
    cout << "Enter the current tax rate: ";
    cin >> tax;
    cout << "Enter the amount of DEPOSIT: " << '$';
    cin >> deposit;

    // performing Arithmetic operations and assignments
    tot_people = x + y;              //total number of people
    price_c = price_a * 0.6;         //price for 1 child
    tot_a = x * (price_a);           //total price for adults
    tot_c = price_c * y;             //total price for children
    tot_d = price_d * tot_people;    //total price for desserts
    tot_f = tot_d + tot_c + tot_a;        //total food cost
    taxamount = tot_f * tax;             //tax amount in $
    subtotal = tot_f + taxamount + roomf; //calculating subtotal
    bdue = subtotal - deposit;           //calculating balance due
    cout << "\n";

    // using manipulators to align the output bill

    cout << setw(50) << "*********** Catering Service ***********      \n";
    cout << '\n';
    cout << "Number of Adults: ";
    cout << setw(29) << x << '\n';
    cout << "Number of Children: ";
    cout << setw(27) << y << '\n';

    cout << "Cost per adult meal: ";
    cout << setw(20) << "$" << setw(7) << fixed << setprecision(2) << price_a
        << '\n';
    cout << "Cost per child meal: ";
    cout << setw(20) << "$" << setw(7) << fixed << setprecision(2) << price_c
        << '\n';
    cout << "Cost per dessert: ";
    cout << setw(23) << "$" << setw(7) << fixed << setprecision(2) << price_d
        << '\n';
    cout << "Room fee: ";
    cout << setw(31) << "$" << setw(7) << fixed << setprecision(2) << roomf
        << '\n';
    cout << "Tax rate: ";
    cout << setw(38) << fixed << setprecision(2) << tax << '\n';
    cout << '\n';

    cout << "Total for adult meals: ";
    cout << setw(18) << "$" << setw(7) << fixed << setprecision(2) << tot_a
        << '\n';
    cout << "Total for child meals: ";
    cout << setw(18) << "$" << setw(7) << fixed << setprecision(2) << tot_c
        << '\n';
    cout << "Total for desserts: ";
    cout << setw(21) << "$" << setw(7) << fixed << setprecision(2) << tot_d << '\n';
    cout << "Tax amount: ";
    cout << setw(29) << "$" << setw(7) << fixed << setprecision(2) << taxamount << '\n';
    cout << "Room fee: ";
    cout << setw(31) << "$" << setw(7) << fixed << setprecision(2) << roomf << '\n';
    cout << "\n";


    cout << "Subtotal: ";
    cout << setw(31) << "$" << fixed << setw(7) << setprecision(2) << subtotal << '\n';
    cout << "Less Deposit: ";
    cout << setw(27) << "(-) $" << fixed << setw(7) << setprecision(2) << deposit << '\n';
    cout << "________________________________________________\n";
    cout << "Balance due: ";
    cout << setw(28) << "$" << fixed << setw(7) << setprecision(2) << bdue << endl << endl;


    return 0;
}
