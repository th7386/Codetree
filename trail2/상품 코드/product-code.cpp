#include <iostream>
#include <string>

using namespace std;

string product_name;
int product_code;

class Product {
public:
    string product_name;
    int product_code;

    Product(string product_name, int product_code) {
        this->product_name = product_name;
        this->product_code = product_code;
    }
};

int main() {
    cin >> product_name >> product_code;

    Product product1("codetree", 50);
    Product product2(product_name, product_code);

    cout << "product " << product1.product_code << " is " << product1.product_name << '\n';
    cout << "product " << product2.product_code << " is " << product2.product_name;
    
    return 0;
}
