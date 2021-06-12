// You have 15 Rs with you. You go to a shop and shopkeeper tells you price as 1 Rs per chocolate. He also tells you that you can get a chocolate in return of 3 wrappers. How many maximum chocolates you can eat?

#include <iostream>
using namespace std;

// Chocolate we can have
int countRec(int choc, int wrap)
{
    if (choc < wrap)
        return 0;

    int newChoc = choc / wrap;

    return newChoc + countRec(newChoc + choc % wrap, wrap);
}

// Chocolate we can eat
int countMaxChoco(int money, int price, int wrap)
{
    int choc = money / price;
    return choc + countRec(choc, wrap);
}

int main()
{
    int money = 15;
    int price = 1;
    int wrap = 3;
    cout <<"Number of Chocolate we can eat: "<< countMaxChoco(money, price, wrap);
    return 0;
}

// Number of Chocolate we can eat: 22