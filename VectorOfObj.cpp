#include <iostream>
#include <vector>
using namespace std;

class Product{
    public: 
        int id,price;
        string name;
        Product(int id,int prc,string n){
            this->id=id;
            price=prc;
            name=n;
        }
        void showProduct(){
            cout<<id<<","<<price<<","<<name;
        }
};

int main(){
    cout<<"Enter number of products:";
    int n;
    cin>>n;
    vector<Product> products;
    for (int i = 0; i < n; i++){
        int d,p;
        string n;
        cin>>d>>p>>n;
        products.push_back(Product(d,p,n));
    }  
    for(auto& product : products) {
        product.showProduct();
        cout << endl;
    }
}