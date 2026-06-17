#pragma once

#include "iproduct.h"

#include <string>

class BasicCoffee : public IProduct {
private:
    std::string description;
    double price;

public:
    BasicCoffee() 
        : description("Basic Coffee"),
         price(8.0) {
    }

    double getPrice() const override { return price; }
    std::string getDescription() const override { return description; }
};