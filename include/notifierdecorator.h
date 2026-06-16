#pragma once

#include <memory>
#include <string>

#include "notifier.h"

class NotifierDecorator : public Notifier {
protected:
    std::unique_ptr<Notifier> wrappedNotifier;

public:
    explicit NotifierDecorator(std::unique_ptr<Notifier> notifier) 
        : wrappedNotifier(std::move(notifier)) {}

    void send(const std::string& message) override;
};