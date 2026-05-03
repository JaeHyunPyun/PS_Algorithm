#include <iostream>
#include <string>

using namespace std;

class Product {
    public:
        string name;
        int code;
    Product(string name, int code){
        this->name = name;
        this->code = code;
    }
    Product(){}
};

int main() {

    string name_input;
    int code_input;

    cin >> name_input >> code_input;

    Product products[2];

    products[0].name = "codetree";
    products[0].code = 50;

    products[1].name = name_input;
    products[1].code = code_input;

    for (auto pr : products){
        cout << "product " << pr.code << " is " << pr.name << "\n";
    }


    return 0;
}