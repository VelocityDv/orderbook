#include <iostream>

#include "src/orderbook.h"

#define NTHREADS 8;

int main() {

    Orderbook orderbook; 


    orderbook.state = true;
    std::thread orderbook.server();    
    while(1)

    return 0;
}