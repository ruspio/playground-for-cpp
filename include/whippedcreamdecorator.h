#pragma once

#include "productdecorator.h"

#include <memory>
#include <utility>

class WhippedCreamDecorator final : public ProductDecorator {
private:
    static constexpr double additionalPrice{3.0};

public:
    explicit WhippedCreamDecorator(std::unique_ptr<IProduct> product)
        : ProductDecorator(std::move(product)) {}

    double getPrice() const override;
    std::string getDescription() const override;
};
