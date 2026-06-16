#pragma once

#include <string>

class Notifier {
public:    
    virtual ~Notifier() = default;
    virtual void send(const std::string& message) = 0;
};
