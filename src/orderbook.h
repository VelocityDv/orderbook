#ifndef ORDERBOOK_H
#define ORDERBOOK_H

#include <vector>
#include <mutex>
#include "trade.h"

class OrderBook {
public:
    void addBuyOrder(const Trade& trade);
    void addSellOrder(const Trade& trade);
    void matchOrders();
private:
    std::vector<Trade> buyOrders;
    std::vector<Trade> sellOrders;
    std::mutex orderBookMutex;
};

#endif // ORDERBOOK_H
