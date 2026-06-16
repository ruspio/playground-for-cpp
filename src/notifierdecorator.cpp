#include "notifierdecorator.h"

void NotifierDecorator::send(const std::string& message) {
    wrappedNotifier->send(message);
}
