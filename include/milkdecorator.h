#pragma once

#include "productdecorator.h"

#include <memory>
#include <utility>

class MilkDecorator final : public ProductDecorator {
private:
    double additionalPrice;

public:
    explicit MilkDecorator(std::unique_ptr<IProduct> product)
        : ProductDecorator(std::move(product)),
        additionalPrice(2.0) {
    }
        
    double getPrice() const override;
    std::string getDescription() const override;

};