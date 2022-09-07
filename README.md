# TestVagrant-project
this is assignment of TestVagrant
 	Name:  Mohd Ibrar Ahamad
  College: Lovely Professional University
  Year of passing: 2023
  Phone no:  9161040266
  Email: moibrarahmad91@gmail.com
  
  
  program of assignment 
  
  #include <iostream>

using namespace std;

class Basket
{
private:
    string productName;
    int price;
    int gst;
    int quantity;
    int discount;
    static int totalCost;
    static int maxGst;

public:
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


};


int main()
{
    Basket leatherWallet;
    leatherWallet.setProductName("Leather Wallet");
    leatherWallet.setPrice(1100);
    leatherWallet.setGst(18);
    leatherWallet.setQuantity(1);
    leatherWallet.calculateDiscount();
    leatherWallet.calculateTotalPrice();


    Basket umbrella;
    umbrella.setProductName("Umbrella");
    umbrella.setPrice(900);
    umbrella.setGst(12);
    umbrella.setQuantity(2);
    umbrella.calculateDiscount();
    umbrella.calculateTotalPrice();


    Basket cigarette;
    cigarette.setProductName("Cigarette");
    cigarette.setPrice(200);
    cigarette.setGst(28);
    cigarette.setQuantity(3);
    cigarette.calculateDiscount();
    cigarette.calculateTotalPrice();


    Basket honey;
    honey.setProductName("Honey");
    honey.setPrice(100);
    honey.setGst(0);
    honey.setQuantity(4);
    honey.calculateDiscount();
    honey.calculateTotalPrice();

    cout<<"Total Amount to be Paid: "<<Basket.totalCost;


    return 0;
}
  

