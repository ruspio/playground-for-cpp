#pragma once

#include "iproduct.h"

#include <memory>
#include <utility>

class ProductDecorator : public IProduct {
protected:
    std::unique_ptr<IProduct> wrappedProduct;

public:
    explicit ProductDecorator(std::unique_ptr<IProduct> product)
        : wrappedProduct(std::move(product)) {}

    double getPrice() const override { return wrappedProduct->getPrice(); }
    std::string getDescription() const override { return wrappedProduct->getDescription(); }
};
