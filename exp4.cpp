#include<iostream>
using namespace std;

int max_items=100;

class shoppinglist{
    private:
        int item[max_items];
        double prices[max_items];
        int item_count;
    public:
        shoppinglist() : item_count(0) {}

        void add_items(int code,double price){
            if(item_count < max_items){
                for(int i = 0 ; i<item_count; ++i){
                    if(code[i] == code){
                        prices[i] = price;
                        cout<<"item updated code = "<<code<<", price ="<<price<<endl;
                        return;
                    }
                }
                code[item_count]=code;
                prices[item_count]=prices;
                ++item_count;
                cout<<"item added code is "<< code << ", price = "<< price<<endl;
            }
            else{
                cout<<"the shopping list is full"<<endl;
            }
        }

        void delete_items(int code){
            for(int i = 0; i < item_count; ++i){
                if(code[i]==code){
                    for(int j = i; j < item_count;++j){
                        code[j]=code[j+1];
                        prices[j]=prices[j+1];
                    }
                --item_count;
                cout<<"item deleted : code = "<<code<<endl;
                return; 
                }
            }
            cout<<"item with code = "<<code<<"not found."<<endl;
        }

        void print_total() const{
            double total = 0.0;
            for(int i = 0;i < item_count;++i){
                total += prices[i];
            }
            cout<<"total value of the order "<<total<<endl;
        }

        void print_items() const {
        if (item_count == 0) {
            cout << "The shopping list is empty." << endl;
            return;
        }
        cout << "Shopping List:" <<endl;
        for (int i = 0; i < item_count; ++i) {
            cout << "Code = " << code[i] << ", Price = " << prices[i] << endl;
        }
    }
};

int main(){
    shoppinglist list;
    int choice,code;
    double price;

    do{
        cout << "\nShopping List Menu:\n";
        cout << "1. Add item\n";
        cout << "2. Delete item\n";
        cout << "3. Print total\n";
        cout << "4. Print all items\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice){
            case 1:
                cout<<"Enter item code : ";
                cin >> code;
                cout<<"enter item prices : ";
                cin >> price;
                list.add_items(code , price);
                break;

            case 2:
                cout<<"Enter item code : ";
                cin >> code;
                list.delete_items(code , price);
                break;
            
            case 3:
                list.print_total();
                break;

            case 4:
                list.print_items();
                break;
            
            case 5:
                cout<<"exiting program. \n";
                return 0;
            default:
                cout<<"invalid choice \n";
        }while(choice != 5);
    }
}