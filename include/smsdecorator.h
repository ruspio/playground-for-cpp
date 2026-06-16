#pragma once

#include <memory>
#include <string>
#include "notifierdecorator.h"

class SmsDecorator : public NotifierDecorator {
public:
    explicit SmsDecorator(std::unique_ptr<Notifier> notifier)
        : NotifierDecorator(std::move(notifier)) {}

    void send(const std::string& message) override;
};