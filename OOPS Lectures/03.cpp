#include <bits/stdc++.h>
using namespace std;

class shop {
    int itemid[100];
    int itemPrice[100];
    int counter;

public:
    void initcounter(void);
    void setPrice(void);
    void displayitems(void);
    void increment(void);
} rakhi;

void shop ::initcounter(void) {
    counter = 0;
}

void shop ::increment(void) {
    counter++;
}

void shop ::setPrice(void) {
    itemid[counter] = counter + 1;
    cout << "Enter itemPrice for itemID =" << itemid[counter] << endl;
    cin >> itemPrice[counter];
    rakhi.increment();  // ** To use the nesting function(one function in other function) the object declaration should be done at the time of class declaration only
}

void shop ::displayitems(void) {
    for (int i = 0; i < counter; i++) {
        cout << "itemId =" << itemid[i] << endl;
        cout << "itemPrice =" << itemPrice[i] << endl;
    }
    cout << "Over" << endl;
}

int main() {
    cout << "Enter no of Items present in Shop" << endl;
    int n;
    cin >> n;
    // Here I'm Not declaring the Object declaration because of using nesting methods 
    for (int i = 0; i < n; i++) {
        rakhi.setPrice();
    }
    rakhi.displayitems();
    return 0;
}