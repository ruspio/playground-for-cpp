#include "sugardecorator.h"

double SugarDecorator::getPrice() const {
    return wrappedProduct->getPrice() + additionalPrice;
}

std::string SugarDecorator::getDescription() const {
    return wrappedProduct->getDescription() + " + Sugar";
}