#include <iostream>

using namespace std;

class Basket
{
public:
    string productName;
    int price;
    int gst;
    int quantity;
    int discount;
    static int totalCost;
    static int maxGst;


    void setProductName(string name)
    {
        productName=name;
    }

    string getProductName()
    {
        return productName;
    }


    void setPrice(int pr)
    {
        price=pr;
    }

    int getPrice()
    {
        return price;
    }


    void setGst(int g)
    {
        gst=g;
    }

    int getGst()
    {
        return gst;
    }


    void setQuantity(int q)
    {
        quantity=q;
    }

    int getQuantity()
    {
        return quantity;
    }

    void calculateDiscount()
    {
        if(price>=500)
        {
            discount=0.05*500;
        }
    }

    void calculateTotalPrice()
    {
        totalCost=totalCost+((((gst/100)*(price))+(price))-discount)*quantity;
    }

    void calGst(int g)
    {
        if(g>maxGst)
        {
            maxGst=g;
        }
    }


};

int Basket::totalCost=0;
int Basket::maxGst=0;


int main()
{
    Basket leatherWallet;
    leatherWallet.setProductName("Leather Wallet");
    leatherWallet.setPrice(1100);
    leatherWallet.setGst(18);
    leatherWallet.setQuantity(1);
    leatherWallet.calculateDiscount();
    leatherWallet.calculateTotalPrice();
    leatherWallet.calGst(18);


    Basket umbrella;
    umbrella.setProductName("Umbrella");
    umbrella.setPrice(900);
    umbrella.setGst(12);
    umbrella.setQuantity(2);
    umbrella.calculateDiscount();
    umbrella.calculateTotalPrice();
    umbrella.calGst(12);


    Basket cigarette;
    cigarette.setProductName("Cigarette");
    cigarette.setPrice(200);
    cigarette.setGst(28);
    cigarette.setQuantity(3);
    cigarette.calculateDiscount();
    cigarette.calculateTotalPrice();
    cigarette.calGst(28);


    Basket honey;
    honey.setProductName("Honey");
    honey.setPrice(100);
    honey.setGst(0);
    honey.setQuantity(4);
    honey.calculateDiscount();
    honey.calculateTotalPrice();
    honey.calGst(0);

    cout<<"Total Amount to be Paid: "<<Basket::totalCost<<endl;;
    cout<<"Max GST: "<<Basket::maxGst;


    return 0;
}
