// Copyright (c) 2021 Melody Berhane All rights reserved.
//
// Created by: Melody Berhane
// Date: Dec 1, 2021
// This program asks the user for the radius and then
// displays the circumference using tau.
#include <iostream>
#include <cmath>

int main() {
  // declare constants
  const float HST = 0.13;
  const float LABOUR_COST = 2.00;
  const float RENTAL_COST = 2.25;
  const float INGRED_COST = 1.5;

  // declare variables
  float diameter, subtotal, tax, total, total1, total2;

  // get the diameter from the user
  std::cout << "Enter the diameter (mm): ";
  std::cin >> diameter;

  // calculate the subtotal using LABOUR_COST,
  // RENTAL_COST, INGRED_COST and diameter
  subtotal = LABOUR_COST + RENTAL_COST + INGRED_COST * diameter;

  // calculate the tax using HST and subtotal
  tax = HST * subtotal;

  // calculate the total using tax and subtotal
  total = subtotal + tax;
  total1 = <int>(total * 100 + .5);
  total2 = total1 / 100;

    // display the total to the user
    std::cout << "\n";
    std::cout << "total = $ " << total2 <<  std::endl;
}
