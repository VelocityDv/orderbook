#ifndef USER_H
#define USER_H

#include <thread>
#include "orderbook.h"

class User {
public:
    User(int id, OrderBook& orderBook);
    void start();
    void join();
private:
    void run();
    int id;
    OrderBook& orderBook;
    std::thread userThread;
};

#endif // USER_H
