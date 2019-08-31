// Name: Restaurant Bill
// This program calculates the tax and tip on a restaurant bill.
#include <iostream>
int main()
{
double meal_cost;
double tax = 7.75/100 ;
double tip = 20.0/100;
double total_meal_cost;
double after_tip;
double after_tax;
//Introduction message
std::cout <<"Welcome to the Restaurant Bill Calculator!"<< std::endl;
//Get the total bill amount
std::cout <<"what is total meal cost? $";
std::cin >> meal_cost;
//get tax amount
after_tax = meal_cost * tax;
//
std::cout<<"the total tax of the meal is $"<< after_tax;
//
after_tip = meal_cost * tip;
//
std::cout<<"the total amount of the tip is"<< after_tip;
//
total_meal_cost= after_tax + after_tip + meal_cost;
std::cout <<"the total bill is" << total_meal_cost;
}
