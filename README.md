# Space Exploration
 
Authors: [Dominique Masequesmay](https://github.com/dmasequesmay) , [William Do](https://github.com/WmDo) , [Ramon Garcia](https://github.com/hyneut) , [Dylan Vuong](https://github.com/dvuong917)

## Project Description
### Why is it important or interesting to you?
This project is important to our group because creating a text-based role-playing game (RPG) will expand our C++ programming skills, specifically object-oriented programming, data structures, and input/output. Creating a text-based RPG is interesting because it allows our group to implement a creative storyline and narrative into coding to create an interactive experience. 

### What languages/tools/technologies do you plan to use?
* C++

### What will be the input/output of your project?
The input of our project will include commands from the user, which control the character's actions- where the user would like to navigate in the galaxy map, which alien species the user would like to attack, etc.

The output of our project includes menus and storylines. The game will display a menu, where the user can view their current statistics- health, resources/inventory, oxygen levels, attack damage, etc. After each user input, the game will display a dialogue that continues to the storyline and prompts the user for their next input.

### What are the features that the project provides?
This project will consist of a text-based role-playing game (RPG) that implements a Space Exploration theme. The game will have a navigation map, where a character can venture to different planets and environments. Exploring different planets will lead to alien encounters, where the character can either be allies with the new species to gain resources and replenish inventory or conquer the new species through attacks. The user will be able to access a menu of their character's statistics before making any decisions. This menu will include the character's current health, resources/inventory, oxygen levels, attack damage, etc. 

## User Interface Specification
Include a navigation diagram for your screens and the layout of each of those screens as desribed below. For all the layouts/diagrams, you can use any tool such as PowerPoint or a drawing program. (Specification requirement is adapted from [this template](https://redirect.cs.umbc.edu/~mgrass2/cmsc345/Template_UI.doc)

### Navigation Diagram
The user should start at the Title Screen and enter their character details upon selecting the start game option. From there, the story will begin. The user should progress to a screen which displays a description of what is happening in their story playthrough and be given a list of menu options to either: view stats, view inventory, act, or quit. The user will repeatedly use this menu to progress through the story until they lose or win.
![image]([https://github.com/cs100/final-project-dmase002-dvuon016-rgarc224-wdo008/blob/master/User_Navigation_Diagram-2.jpg](https://github.com/cs100/final-project-dmase002-dvuon016-rgarc224-wdo008/blob/0ec523d8767b7ca09cc063ce7f28f466b293e2f6/User_Navigation_Diagram-1.jpg))

### Screen Layouts
Main menu: The main menu of the game will include the name of the game and a start/quit option. Pressing quit will exit the program, while the next screen will lead you to the input name screen. The prompts for the user include inputting a number: 1) Start and 2) Quit.
 
Input Name: This screen will prompt the user to input a name for the character. The user then will input a name and will be asked to confirm their input before going to the next screen. The user will input 1) for Yes, and 2) for No. If 1), the screen will continue to the select class screen, while selecting 2) will prompt the user to input a name for the character once again.
 
Select Weapon: This screen will prompt the user to select a weapon. The user will have options for what weapons they can choose from, and inputting a number will select that weapon. After the user has selected a weapon, they will be asked to confirm their selection, 1) for Yes, and 2) for No. If 1), the screen will continue to the next screen, while 2) will prompt the user to select a weapon.
 
Story Screen. This screen will output the story to the terminal. The user will be prompted to press enter at the bottom of the text which will continue to the next screen.
 
Gameplay Menu: The main menu consists of functions you can do which includes view inventory, view statistics, action, and quit. The user will be prompted to input a number 1 – 4 in order to move onto that screen. Inputting 1 leads to the action screen, inputting 2 leads to the view inventory screen, inputting 3 leads to the view statistics screen, and inputting 4 closes the program. The user will be prompted to confirm if they want to quit the game, while inputting the other options will continue directly to those screens.
 
Action: The general layout of the screen will provide actions of what the character can do depending on the situation they are in.

Action/Battle:  While in battle, the character will be prompted to input a number 1-5 on what they should do. 1) will attack the enemy you are in battle with, 2) will block damage from what the enemy is doing, 3) will give the player a chance to evade the incoming enemy attack or have a chance of still getting hit 4) will give the user the ability to use items that heal or give more oxygen or can change weapons 5) will return to the gameplay menu.

Battle/Attack: If the user were to choose the attack option, they will be shown how much damage they have done to the alien, and see what the alien’s action is.

Battle/Block: If the user were to choose the block option: they will be shown how much damage they have taken, and what the alien’s action is.

Battle/Evade: If the user were to choose the evade option: they will be shown if they were successful or not and the alien’s action.

Action/Out of battle: When out of battle, the user is able to move from one room to another. The user will be given prompts on which way to go, and inputting a number will change the room that they are in.
 
View Inventory: This screen will show the items the player has in their inventory as well as how many they have of each. The user will be able to use items to heal or get more oxygen. The user will be prompted to input a number to choose an item and what to do with it. They will also have the option to go back to the gameplay menu.

View Statistics: This screen will show the user their statistics such as health, oxygen level, and stamina. The user will be prompted to press enter in order to exit the screen and return to the gameplay menu.

Game Over: This screen will show a game over screen after the character has died, be it to combat or lack of oxygen. The user will be prompted to enter 1) to restart the game or 2) to exit the game. Restarting will return the player to the main menu, while exit will quit the program.
 
Help: The help menu will be available throughout the game. It will include useful information such as information on character classes, items, storyline, and more. The user will be able to input a number to get information about a certain topic, and can then return to their previous screen whenever.


## Class Diagram
The Space Exploration: UML Class Diagram models the RPG's object orientation. It illustrates the main classes, interfaces, and associations between classes.

The Character base class is used to construct characters in the game. The Player class and Alien class are derived from the Character class to inherit all protected variables and public mutator/accessor functions. The Player class and Alien class are both abstract base classes because they include virtual void function(s). There are three subclasses, tankPlayer, nimblePlayer, and allRounderPlayer, which inherit from the Player class. There are three subclasses, tankAlien, slipperyAlien, and bossAlien, which inherit from the Alien class. The Player and Alien subclasses all must override the virtual function(s) defined from their parent superclass. Additionally, the Player Class has an aggregation relationship with the Weapon class because all players have weapons. The Weapon base class has two derived classes, heavyWeapon and lightWeapon, in which their protected variables will have different starting values.

![image](https://github.com/cs100/final-project-dmase002-dvuon016-rgarc224-wdo008/assets/133715991/92989169-94b5-4668-84ce-4dab55f2c7d6)

 
 ## Phase III

SOLID principles we applied:
* Dependency: The parseSource() function parses strings from a text file to build a vector of nodes. Instead of depending on specific string variables, the parseSource() function takes input from any text file. This avoids having the story text be hard-coded into the program and we won’t be forced to recompile our program every time we want to change the story.
* Open Closed: Menu base class was created for extensions of the menu. Different parts of the menu became extensions of the menu class rather than adding onto the menu class. This follows the open-closed principle as the menu class was written and closed for modification, but open for extension. This also follows the open closed principal as the derived menus become their own objects and are closed for modification.
* Dependency: The Combat class was created to handle all instances of combat within the game. Rather than having to call attack() from the Player and Alien classes individually for combat, the Combat class can take in both Character classes as parameters. This makes it so when combat starts within the game, we are able to repeat combat without having to hard code it each time.

![image](https://github.com/cs100/final-project-dmase002-dvuon016-rgarc224-wdo008/assets/133715991/8c58eff4-d935-48bb-8031-509455819957)


 
## Final deliverable
 > All group members will give a demo to the reader during lab time. ou should schedule your demo on Calendly with the same reader who took your second scrum meeting. The reader will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
