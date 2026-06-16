#include <iostream>
#include <string>
#include "emailnotifier.h"

void EmailNotifier::send(const std::string& message)
{
    std::cout << "Sending email: " << message << '\n';
}
