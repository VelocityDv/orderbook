#ifndef TRADE_H
#define TRADE_H

enum TradeType {
    BUY,
    SELL
};

class Trade {

public:
    Trade(TradeType type, double price, int quantity);
    TradeType getType() const;
    double getPrice() const;
    int getQuantity() const;
private:
    TradeType type;
    double price;
    int quantity;

};

#endif // TRADE_H
