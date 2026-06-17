#include "emailnotifier.h"

#include <iostream>
#include <string>

void EmailNotifier::send(const std::string& message)
{
    std::cout << "Sending email: " << message << '\n';
}
