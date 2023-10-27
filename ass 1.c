#include<iostream>
using namespace std;

class TopsRestaurant
{
public:
    string name;
    double totalBill;
    string selected_items;
    int quantity;
    double price;
    string moreItems;
       void inputdata()
    {
        cout << "Enter your name: ";
        cin >> name;
    }

    void displaydata()
    {
        cout << "Hello " << name << endl << endl;
        cout << "What would you like to order?" << endl << endl;
        totalBill = 0.0;

        while (true)
        {
            cout << "-------------TOPS TECH. FAST FOOD-------------" << endl;
            cout << "1. Pizza" << endl;
            cout << "2. Burgers" << endl;
            cout << "3. Sandwiches" << endl;
            cout << "4. Rolls" << endl;
            cout << "5. Biryani" << endl;
            cout << "6. Exit" << endl;

            int choice;
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice)
            {
                case 1:
                    displayPizzaMenu();
                    break;

                case 2:
                    displayBurgerMenu();
                    break;

                case 3:
                    displaySandwichMenu();
                    break;

                case 4:
                    displayRollMenu();
                    break;

                case 5:
                    displayBiryaniMenu();
                    break;

                case 6:
                    cout << "Thank you for ordering from Tops Tech Fast Food!" << endl;
                    break;

                default:
                    cout << "Invalid input. Please try again." << endl;
                    continue;
            }

            
            cout << "Would you like to order something else? (y/n): ";
            cin >> moreItems;

            if (moreItems == "n" || moreItems == "N")
            {
            	cout<<"ORDERD FOOD"<<endl<<endl<<selected_items<<endl;
                cout << "Your Total Bill = INR " << totalBill << endl;
                cout << "Your food will be delivered in 35 minutes." << endl;
                cout << "Thank you for ordering from Tops Tech Fast Food!" << endl;
                break;
            }
            else if (moreItems == "y" || moreItems == "Y")
            {
            	continue;
			}
			else
			{
				cout<<"Error! Invalid Input"<<endl;
				break;
			}
			
        }
    }

private:
    void displayPizzaMenu()
    {
        cout << "-------------PIZZA-------------" << endl;
        cout << "1. Cheese Pizza   INR 120" << endl;
        cout << "2. Veggie Pizza   INR 195" << endl;
        cout << "3. BBQ Chicken Pizza  INR 235" << endl;
        cout << "4. Pepperoni Pizza  INR 360" << endl;

        int choice;
        cout << "Please enter which Pizza you would like to have: ";
        cin >> choice;


        switch (choice)
        {
            case 1:
            	selected_items+="Cheese Pizza\n";
                price = 120;
                break;

            case 2:
            	selected_items+="Veggie Pizza\n";
                price = 195;
                break;

            case 3:
            	selected_items+="BBQ Chicken Pizza\n";
                price = 235;
                break;

            case 4:
            	selected_items+="Pepperoni Pizza\n";
                price = 360;
                break;

            default:
                cout << "Invalid input. Please try again." << endl;
                
        }

        cout << "Enter quantity: ";
        cin >> quantity;

        double itemTotal = price * quantity;
        totalBill += itemTotal;
        

        cout << "You have selected "<<endl<<selected_items<<endl;
        cout<<"Quantity = "<<quantity<<endl;
        cout <<price<<" * "<<quantity<<endl;
		cout<<"Your Bill = INR"<<itemTotal<<endl;
    }

    void displayBurgerMenu()
    {
        cout << "-------------BURGERS-------------" << endl;
        cout << "1. Veggie Burger  INR 80" << endl;
        cout << "2. Cheese Burger  INR 100" << endl;
        cout << "3. Chicken Burger  INR 130" << endl;
        cout << "4. Double Cheese Burger  INR 150" << endl;

        int choice;
        cout << "Please enter which Burger you would like to have: ";
        cin >> choice;

        int quantity;
        double price;

        switch (choice)
        {
            case 1:
            	selected_items+="Veggie Burger\n";
                price = 80;
                break;

            case 2:
            	selected_items+="Cheese Burger\n";
                price = 100;
                break;

            case 3:
            	selected_items+="Chicken Burger\n";
                price = 130;
                break;

            case 4:
            	selected_items+="Double Cheese Burger\n";
                price = 150;
                break;

            default:
                cout << "Invalid input. Please try again." << endl;
                
        }

        cout << "Enter quantity: ";
        cin >> quantity;

        double itemTotal = price * quantity;
        totalBill += itemTotal;

        cout << "You have selected "<<endl<<selected_items<<endl;
        cout<<"Quantity = "<<quantity<<endl;
        cout <<price<<" * "<<quantity<<endl;
		cout<<"Your Bill = INR"<<itemTotal<<endl;
    }

    void displaySandwichMenu()
    {
        cout << "-------------SANDWICHES-------------" << endl;
        cout << "1. Veggie Sandwich  INR 70" << endl;
        cout << "2. Cheese Sandwich  INR 90" << endl;
        cout << "3. Chicken Sandwich  INR 120" << endl;
        cout << "4. Club Sandwich  INR 140" << endl;

        int choice;
        cout << "Please enter which Sandwich you would like to have: ";
        cin >> choice;

        int quantity;
        double price;

        switch (choice)
        {
            case 1:
            	selected_items+="Veggie Sandwich\n";
                price = 70;
                break;

            case 2:
            	selected_items+="Cheese Sandwich\n";
                price = 90;
                break;

            case 3:
            	selected_items+="Chicken Sandwich\n";
                price = 120;
                break;

            case 4:
            	selected_items+="Club Sandwich\n";
                price = 140;
                break;

            default:
                cout << "Invalid input. Please try again." << endl;
                
        }

        cout << "Enter quantity: ";
        cin >> quantity;

        double itemTotal = price * quantity;
        totalBill += itemTotal;

        cout << "You have selected "<<endl<<selected_items<<endl;
        cout<<"Quantity = "<<quantity<<endl;
        cout <<price<<" * "<<quantity<<endl;
		cout<<"Your Bill = INR"<<itemTotal<<endl;
    }

    void displayRollMenu()
    {
        cout << "-------------ROLLS-------------" << endl;
        cout << "1. Veggie Roll  INR 60" << endl;
        cout << "2. Paneer Roll  INR 80" << endl;
        cout << "3. Chicken Roll  INR 110" << endl;
        cout << "4. Egg Roll  INR 130" << endl;

        int choice;
        cout << "Please enter which Roll you would like to have: ";
        cin >> choice;

        int quantity;
        double price;

        switch (choice)
        {
            case 1:
            	selected_items+="Veggie Roll\n";
                price = 60;
                break;

            case 2:
            	selected_items+="Paneer Roll\n";
                price = 80;
                break;

            case 3:
            	selected_items+="Chicken Roll";
                price = 110;
                break;

            case 4:
            	selected_items+="Egg Roll";
                price = 130;
                break;

            default:
                cout << "Invalid input. Please try again." << endl;
                
        }

        cout << "Enter quantity: ";
        cin >> quantity;

        double itemTotal = price * quantity;
        totalBill += itemTotal;

        cout << "You have selected "<<endl<<selected_items<<endl;
        cout<<"Quantity = "<<quantity<<endl;
        cout <<price<<" * "<<quantity<<endl;
		cout<<"Your Bill = INR"<<itemTotal<<endl;
    }

    void displayBiryaniMenu()
    {
        cout << "-------------BIRYANI-------------" << endl;
        cout << "1. Veg Biryani  INR 150" << endl;
        cout << "2. Chicken Biryani  INR 180" << endl;
        cout << "3. Mutton Biryani  INR 220" << endl;
        cout << "4. Egg Biryani  INR 200" << endl;

        int choice;
        cout << "Please enter which Biryani you would like to have: ";
        cin >> choice;

        int quantity;
        double price;

        switch (choice)
        {
            case 1:
            	selected_items+="Veg Biryani\n";
                price = 150;
                break;

            case 2:
            	selected_items+="Chicken Biryani\n";
                price = 180;
                break;

            case 3:
            	selected_items+="Mutton Biryani\n";
                price = 220;
                break;

            case 4:
            	selected_items+="Egg Biryani\n";
                price = 200;
                break;

            default:
                cout << "Invalid input. Please try again." << endl;
                
        }

        cout << "Enter quantity: ";
        cin >> quantity;

        double itemTotal = price * quantity;
        totalBill += itemTotal;

        cout << "You have selected "<<endl<<selected_items<<endl;
        cout<<"Quantity = "<<quantity<<endl;
        cout <<price<<" * "<<quantity<<endl;
		cout<<"Your Bill = INR"<<itemTotal<<endl;
    }
};

main()
{
    TopsRestaurant obj;
    obj.inputdata();
    obj.displaydata();
}
