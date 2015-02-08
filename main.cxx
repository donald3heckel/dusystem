/*
 * main.cxx
 * 
 * Copyright 2014 Grant <grant@GHeckel-Zor9PC>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <iostream>
#include <cstring>
#include <stdlib.h>

using namespace std;

int main()
{
	char input, quit;
	
	do{
	
	cout << ("\n\nWelcome to the System utility 1.0. Please specify an operation.\nPlease keep in mind that upgrading/updating packages or wiping tmp\nwill require root privileges."); // instructions
	cout << ("\nYour operations are:\n1: Wipe tmp\n2: upgrade all packages\n3: fart riddle"); // Menu options for selection part 1
	cout << ("\n4: Upgrade/Install Google Chrome\n5: Upgrade/Install Firefox\n6: Retrieve new package list"); // Menu options for selection part 2
	cout << ("\n7: Exit"); // Last menu option
	
	cout << ("\n\nFunction Number: "); // User input selection pane
	cin >> input;
	
	if(input == '1'){
		cout << ("\n\nCleaning tmp...");
		system("sudo rm -R /tmp/*");
		system("cd ~");
		cout << ("\n\nDone. All set.");
		cout << ("\n\nNow in home directory.");
		
	}
	
	if(input == '2'){
		system("sudo apt-get upgrade");
		cout << ("\n\nupgraded thine mighty directories of thy packages...");
		cout << ("\n\nDone. All set.");
	}
	
	if(input == '3'){
		cout << ("\n\nBeans Beans the magical fR00t.\nThe more you eat, the more you t00t.");
		cout << ("\n\nClassic Huh?");
	}
	
	if(input == '4'){
		cout << ("\n\nUpgrading/Installing google chrome...");
		system("sudo apt-get install google-chrome-stable");
		cout << ("\n\nDone.");
	}
	
	if(input == '5'){
		cout << ("\n\nUpgrading/Installing Firefox...");
		system("sudo apt-get install firefox");
		cout << ("\n\nAll set.");
	}
	
	if(input == '6'){
		cout << ("\n\nRetrieving new list of packages...");
		system("sudo apt-get update");
		cout << ("\n\nGood to go. Package list retrieved.");
	}
		
		if(input == '7'){
		return 0;
	
	}
	
	cout << ("\n\nThank you for using sysutil.\nWould you like to exit? (y or n): ");
	cin >> quit;
	
	if(quit == 'y'){
		cout << ("\n\nThank you for using sysutil. Have a nice day.\n\n");
	}
	
	if(quit == 'n'){
		system("clear");
		cout << ("\n\nReturning to menu...\n\n");
	}
	
}while(quit == 'n');
	
	return 0;
}

