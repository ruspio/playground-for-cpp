#pragma once

#include <string>

class IProduct {
public:
    virtual ~IProduct() = default;

    virtual double getPrice() const = 0;
    virtual std::string getDescription() const = 0;
};