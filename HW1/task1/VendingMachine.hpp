class VendingMachine {
public:
    VendingMachine();
    VendingMachine(const VendingMachine& from);
    VendingMachine& operator=(const VendingMachine& from);
    
    bool add_drink(const Drink& to_add);
    int buy_drink(const char* drink_name, const double money);

    double get_income() const;
    
    // Add whatever you deem needed here
private:
    // Add whatever you deem needed here
};
