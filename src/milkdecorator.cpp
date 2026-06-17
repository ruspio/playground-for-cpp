#include "milkdecorator.h"

double MilkDecorator::getPrice() const {
    return wrappedProduct->getPrice() + additionalPrice;
}

std::string MilkDecorator::getDescription() const {
    return wrappedProduct->getDescription() + " + Milk";
}