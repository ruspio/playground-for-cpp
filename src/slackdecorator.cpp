#include "slackdecorator.h"

#include <iostream>

void SlackDecorator::send(const std::string& message) {
    NotifierDecorator::send(message);
    std::cout << "Sending Slack message: " << message << std::endl;
}