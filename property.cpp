// #include "player.h"
#include "property.h"
// #include "tile.h"

// Property Constructor
Property::Property()
{
    //default conbstructor could perhaps be used for GO
    //rent = = - 200; player gains 200
}



// Property Constructor with name, price and rent
Property::Property(string name, float price, float rent)
{
    owned = false;
    num_house = 0;
    num_hotel = 0;
    property_name = name;
    Price = price;
    Rent = rent;
}

void buy_property(Player buyer){
    cout<<"Would you like to buy "<<Name<<" for "<<Price<<" dollars? yes/no"<<endl;
    cin>>buy_this;
    if(buy_this == "yes"){
        //we want to call Player_name.set_owner(buyer)
        //only way I can think to overcome this issue is to not have a discrete set_owner function. 
       // self.set_owner(buyer);
    }
    if(buy_this == "no"){
        cout<<"You chose not to buy this property"<<endl;
    }
    else: 
     cout<<:"please type yes or no only"<<endl;
     buy_property(buyer);
     //calling function recursively
}

// Function to set owner. //this should be integrated with function on line 25 to be all in one to avoid errors. 
void Property::set_owner(Player owner)
{
    property_owner = owner.get_name();
    //prints out saves player  number who owns the property. 
    owner_number = owner.get_numbers();
    cout<< "CONGRATULATIONS "<< proper_owner <<" now owns "<< property_name <<" purchased for "<<Price<<<" dollars. "<<endl;
    owned = true;
    return;
}

void ontile(Player player_on_tile){
    //checking if the property is owned and the owner of the property is a different player (i.e player number is different)
    
    if(owned == true && owner_number != player_on_tile.get_numer() ){
        int price_payed = -rent; //our current system enables the player to get into debt.
        cout<<player_on_tile.get_name() << "pays "<<rent<<" dollars in rent "<<endl;
        player_on_tile.change_balance(price_payed);
        cout<<" your account now has "<<player_on_tile.get_balance()<<" dollars "<<endl;
        
    }
}