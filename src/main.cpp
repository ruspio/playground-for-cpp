#include <iostream>
#include <memory>
#include <string>

#include "emailnotifier.h"
#include "smsdecorator.h"
#include "slackdecorator.h"

int main() {
    std::cout << "Hello from CMake & VS Code!" << std::endl;
    std::cout << "It's a C++ playground project, have fun!\n" << std::endl;

    std::unique_ptr<Notifier> notifier = 
        std::make_unique<SlackDecorator>(
            std::make_unique<SmsDecorator>(
                std::make_unique<EmailNotifier>()
            )
        );

    std::string message;
    std::cout << "Enter message to send:\n";
    std::getline(std::cin, message);

    notifier->send(message);

    return 0;
}