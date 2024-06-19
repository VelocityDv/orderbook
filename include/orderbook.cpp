#include "src/orderbook.h"
#include <string>


Orderbook::Orderbook ()
{


}

void Orderbook::addBuyOrder (const Trade& trade) 
{
    this.orderBookMutex.lock();

    buyOrder.push_back(trade);

    this.orderBookMutex.unlock();

}


void Orderbook::addSellOrder (const Trade& trade)
{

    this.orderBookMutex.lock();

    buyOrder.push_back(sellOrder);

    this.orderBookMutex.unloc
}
void Orderbook::matchOrders () 
{

}

