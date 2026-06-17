#pragma once

#include "productdecorator.h"

#include <memory>
#include <utility>

class SugarDecorator final : public ProductDecorator {
private:
    static constexpr double additionalPrice{0.5};

public:
    explicit SugarDecorator(std::unique_ptr<IProduct> product)
        : ProductDecorator(std::move(product)) {}

    double getPrice() const override;
    std::string getDescription() const override;

};