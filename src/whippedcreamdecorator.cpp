#include "whippedcreamdecorator.h"

double WhippedCreamDecorator::getPrice() const {
    return wrappedProduct->getPrice() + additionalPrice;
}

std::string WhippedCreamDecorator::getDescription() const {
    return wrappedProduct->getDescription() + " + Whipped Cream";
}