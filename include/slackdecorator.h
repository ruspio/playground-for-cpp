#pragma once

#include <memory>
#include <string>

#include "notifierdecorator.h"

class SlackDecorator : public NotifierDecorator {
public:
    explicit SlackDecorator(std::unique_ptr<Notifier> notifier)
        : NotifierDecorator(std::move(notifier)) {}

    void send(const std::string& message) override;
};