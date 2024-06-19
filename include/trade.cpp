#include "src/trade.h"

Trade::Trade (TradeType type, double price, int quantity)
    : type(type), price(price), quantity(quantity)
{

}

// bid price

TradeType Trade::getType() const {
    return type;
}

double Trade::getPrice () const {
    return price;
}

int Trade::getQuantity() const {
    return quantity; 
}



// double Trade::getty

