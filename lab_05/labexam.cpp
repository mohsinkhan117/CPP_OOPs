#include <iostream>
#include <cstring>
using namespace std;

class Product {
public:
    char *name;
    char *category;
    float price;

    Product() {
        name = new char[1];
        name[0] = '\0';

        category = new char[1];
        category[0] = '\0';

        price = 0.0;
    }

    Product(const char pname[], const char pcategory[], float pprice) {
        name = new char[strlen(pname) + 1];
        strcpy(name, pname);

        category = new char[strlen(pcategory) + 1];
        strcpy(category, pcategory);

        price = pprice;
    }

    Product(const Product &obj) {
        name = new char[strlen(obj.name) + 1];
        strcpy(name, obj.name);

        category = new char[strlen(obj.category) + 1];
        strcpy(category, obj.category);

        price = obj.price;
    }

    void display() {
        cout << "Product Name: " << name
             << "\tCategory: " << category
             << "\tPrice: " << price << endl;
    }

    ~Product() {
        delete[] name;
        delete[] category;
    }
};

int main() {

    Product p1("Sugar", "Keton", 20.0);
    p1.display();

    char productName[20] = "Amrood";
    char categoryName[20] = "Fruit";

    Product p2;
    p2.name = new char[strlen(productName) + 1];
    strcpy(p2.name, productName);

    p2.category = new char[strlen(categoryName) + 1];
    strcpy(p2.category, categoryName);

    p2.price = 40.0;
    p2.display();

    Product p3(p2);   // deep copy constructor
    p3.display();

    Product p4;
    char name2[20] = "Laptop";

    p4.name = new char[strlen(name2) + 1];
    strcpy(p4.name, name2);

    p4.category = new char[strlen("Dell") + 1];
    strcpy(p4.category, "Dell");

    p4.price = 65000.0;
    p4.display();

    return 0;
}
