#pragma once

#include <string>
#include "notifier.h"

class EmailNotifier : public Notifier {
public:
    void send(const std::string& message) override;
};
