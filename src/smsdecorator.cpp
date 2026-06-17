#include "smsdecorator.h"

#include <iostream>

void SmsDecorator::send(const std::string& message) {
    NotifierDecorator::send(message);
    std::cout << "sending SMS: " << message << std::endl;
}