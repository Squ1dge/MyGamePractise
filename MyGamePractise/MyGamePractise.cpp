#include "pch.h"
#include <iostream>

// Ask the user to choose the cake list given
void CakeList()
{
	std::cout << "What type of cake would you like to make?" << std::endl;
	std::cout << "At the moment we only have Chocolate Cake.\n" << std::endl;
	std::cout << "Choose from the list:" << std::endl;
	std::cout << "Chocolate Cake, number 1:\n* Serves six people\n* Prep 30 minutes\n* Cooking 20 minutes\n" << std::endl;
	std::cout << "Carrot Cake, number 2:\n* To be updated\n" << std::endl;
	std::cout << "Red Velvet Cake, number 2:\n* To be updated" << std::endl;

	int a; //Chocolate Cake
	//int b; //Carrot Cake
	//int c; //Red Velvet Cake

	std::cin >> a;

	if (a == 1)
	{
		std::cout << "\nYou entered " << a << "\n\nLets get baking!" << std::endl;
	}
	else if (a != 1)
	{
		std::cout << "\nPlease choose Chocolate Cake\n\nThis would be option number 1" << std::endl;
	}
}

int main()
{
	// Ask the user to choose the cake list given
	CakeList();

	// Get the equipment needed to make the cake
	//equipmentNeeded();



	// Get ingredients needed to make the cake
	//ingredientsNeededForCake(); 

	// Mix the ingredients for the cake
	//mixForCake();

	// Put the cakes in the oven
	//bakeCakes();

	// Wait for the cakes to cool down
	//wait();

	// Get the cakes out of the tin after cooled down
	//takeOutTin();

	// Get ingredients needed to make the icing
	//ingredientsNeededForIcing();

	// Mix the ingredients for the icing
	//mixForIcing();

	// Put icing on the cakes
	//iceTheCakes();

	// Put decorations on the cake
	//decorate();

	// Put in cakes in the fridge
	//fridgeIn();

	// Take the cakes out of the fridge
	//fridgeOut();

	// Cut the cake for you or / and the guest
	//cutCake();

	// information of how to make the cake is here
	//information();
}



