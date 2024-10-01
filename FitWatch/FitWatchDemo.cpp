#include <iostream>
#include "FitWatch.h"
using fit_watch_tracker::FitWatch;

int main() 
{
    std::cout << "FitWatch demo" << std::endl;
	
	// (1) Declare a FitWatch object
	FitWatch Whitman;
	
	// (2) Walk some miles
	Whitman.walk(15);
	Whitman.walk(20);
	
	// (3) Call methods to get and print distance and calories
	std::cout << "Distance walked today: " << Whitman.getMilesWalked() << " miles." << std::endl;
	std::cout << "Calories burned today: " << Whitman.getCaloriesBurned() << std::endl;
	
	return 0;
}