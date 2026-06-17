#define ENABLE_NOTIFIER_EXAMPLE 0
#define ENABLE_COFFEE_EXAMPLE   1

#include <iostream>
#include <memory>
#include <string>

#if ENABLE_NOTIFIER_EXAMPLE
#include "emailnotifier.h"
#include "smsdecorator.h"
#include "slackdecorator.h"
#endif

#if ENABLE_COFFEE_EXAMPLE
#include "basiccoffee.h"
#include "milkdecorator.h"
#include "sugardecorator.h"
#include "whippedcreamdecorator.h"
#endif

int main() {
    std::cout << "Hello from CMake & VS Code!" << std::endl;
    std::cout << "It's a C++ playground project, have fun!\n" << std::endl;

    #if ENABLE_NOTIFIER_EXAMPLE
    //  Simple decorator exercise - Notifiers
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
    #endif

    #if ENABLE_COFFEE_EXAMPLE
    //  Simple decorator exercise - Coffee products
    std::unique_ptr<IProduct> product = 
        std::make_unique<WhippedCreamDecorator>(
            std::make_unique<SugarDecorator>(
                std::make_unique<MilkDecorator>(
                    std::make_unique<BasicCoffee>()
                )
            )
        );
    
    std::cout << product->getDescription() << " -> price: " << product->getPrice() << std::endl;
    #endif

    return 0;
}