 > As you complete each section you **must** remove the prompt text. Every *turnin* of this project includes points for formatting of this README so keep it clean and keep it up to date. 
 > Prompt text is any lines beginning with "\>"
 > Replace anything between \<...\> with your project specifics and remove angle brackets. For example, you need to name your project and replace the header right below this line with that title (no angle brackets). 
# Space Exploration
 > Your author list below should include links to all members GitHub (remove existing author).
 
 > Authors: [Dominique Masequesmay](https://github.com/dmasequesmay) , [William Do](https://github.com/WmDo) , [Ramon Garcia](https://github.com/hyneut)

 > You will be forming a group of **FOUR** students and working on an interesting project. The project has 4 phases, each one with specific requirements. A list of proposed project ideas that have been successful in previous quarters is listed in the project specifications document on Canvas. You can select an idea from the list and start thinking about the features you will implement. If you want to propose your own original idea, you will have to contact your instructor to discuss the project and obtain written permission before you submit your project proposal (Phase 1). The project work should be divided almost equally among team members. You can of course help each other, but it needs to be clear who will be responsible for which features. Additionally, you are expected to follow Scrum patterns, specifically the use of a Scrum (Project) board, Sprints, and Scrum meetings.

 > ## Expectations
 > * The backend of your project should be implemented in C++. If you wish to choose anoher programming language (e.g. Java, Python), please discuss with your lab TA to obtain permission.
 > * You can incorporate additional technologies/tools but they must be approved (in writing) by the instructor or the TA.
 > * Each member of the group **must** be committing code regularly and make sure their code is correctly attributed to them. We will be checking attributions to determine if there was equal contribution to the project.
 > * **Each member of the group must actively participate in the Github Project board, writing unit tests, and reviewing commited code.**
> * All project phases are to be submitted to this GitHub repository. You should modify this README file to reflect the different phases of the project. In addition, you should regularly hold sprint meetings with your group. You will need to hold two to three scrum/check-in meetings with your lab TA/reader at different times in addition to the final demo.

## Project Description
 > Your project description should summarize the project you are proposing. Be sure to include:
 > * Why is it important or interesting to you?
 > * What languages/tools/technologies do you plan to use? (This list may change over the course of the project)
 > * What will be the input/output of your project?
 > * What are the features that the project provides?
 > This description should be in enough detail that the TA/instructor can determine the complexity of the project and if it is sufficient for the team members to complete in the time allotted. 
 > 
 > You also need to set up an empty project board using GitHub projects (board view). Make sure you add the board under your project repository. You should also have a Product Backlog and In testing columns added.
>
>### Why is it important or interesting to you?
> This project is important to our group because creating a text-based role-playing game (RPG) will expand our C++ programming skills, specifically object-oriented programming, data structures, and input/output. Creating a text-based RPG is interesting because it allows our group to implement a creative storyline and narrative into coding to create an interactive experience. 
>
>### What languages/tools/technologies do you plan to use?
> * C++
>
>### What will be the input/output of your project?
> The input of our project will include commands from the user, which control the character's actions- where the user would like to navigate in the galaxy map, which alien species the user would like to attack, etc.
>
> The output of our project includes menus and storylines. The game will display a menu, where the user can view their current statistics- health, resources/inventory, oxygen levels, attack damage, etc. After each user input, the game will display a dialogue that continues to the storyline and prompts the user for their next input.
>
> ### What are the features that the project provides?
> This project will consist of a text-based role-playing game (RPG) that implements a Space Exploration theme. The game will have a navigation map, where a character can venture to different planets and environments. Exploring different planets will lead to alien encounters, where the character can either be allies with the new species to gain resources and replenish inventory or conquer the new species through attacks. The user will be able to access a menu of their character's statistics before making any decisions. This menu will include the character's current health, resources/inventory, oxygen levels, attack damage, etc. 

 > ## Phase II
 > In addition to completing the "User Interface Specification" and "Class Diagram" sections below, you will need to:
 > * Create an "Epic" (note) for each feature. Place these epics in the `Product Backlog` column
 > * Complete your first *sprint planning* meeting to plan out the next 7 days of work.
 >   * Break down the "Epics" into smaller actionable user stories (i.e. smaller development tasks). Convert them into issues and assign them to team members. Place these in the `TODO` (aka Sprint Backlog) column.
 >   * These cards should represent roughly 7 days worth of development time for your team. Then, once the sprint is over you should be repeating these steps to plan a new sprint, taking you until your second scrum meeting with the reader in phase III.
 > * Schedule two check-ins using Calendly. You need to pick both time slots on Tuesday of week 6. The check-ins will occur on Zoom. Your entire team must be present for both check-ins.
 >   * The first check-in needs to be scheduled with your lab TA. During that meeting, you will discuss your project design/class diagram from phase II.
 >   * The second check-in should be scheduled with a reader. During that meeting you will discuss:
 >     * The tasks you are planning for the first sprint
 >     * How work will be divided between the team members
## User Interface Specification
 > Include a navigation diagram for your screens and the layout of each of those screens as desribed below. For all the layouts/diagrams, you can use any tool such as PowerPoint or a drawing program. (Specification requirement is adapted from [this template](https://redirect.cs.umbc.edu/~mgrass2/cmsc345/Template_UI.doc))

### Navigation Diagram
> Draw a diagram illustrating how the user can navigate from one screen to another. Here is an [example](https://creately.com/diagram/example/ikfqudv82/user-navigation-diagram-classic?r=v). It can be useful to label each symbol that represents a screen so that you can reference the screens in the next section or the rest of the document if necessary. Give a brief description of what the diagram represents.

### Screen Layouts
> Main menu: The main menu of the game will include the name of the game and a start/quit option. Pressing quit will exit the program, while the next screen will lead you to the input name screen. The prompts for the user include inputting a number: 1) Start and 2) Quit.
 
>Input Name: This screen will prompt the user to input a name for the character. The user then will input a name and will be asked to confirm their input before going to the next screen. The user will input 1) for Yes, and 2) for No. If 1), the screen will continue to the select class screen, while selecting 2) will prompt the user to input a name for the character once again.
 
>Select Weapon: This screen will prompt the user to select a weapon. The user will have options for what weapons they can choose from, and inputting a number will select that weapon. After the user has selected a weapon, they will be asked to confirm their selection, 1) for Yes, and 2) for No. If 1), the screen will continue to the next screen, while 2) will prompt the user to select a weapon.
 
>Story Screen. This screen will output the story to the terminal. The user will be prompted to press enter at the bottom of the text which will continue to the next screen.
 
>Gameplay Menu: The main menu consists of functions you can do which includes view inventory, view statistics, action, and quit. The user will be prompted to input a number 1 – 4 in order to move onto that screen. Inputting 1 leads to the action screen, inputting 2 leads to the view inventory screen, inputting 3 leads to the view statistics screen, and inputting 4 closes the program. The user will be prompted to confirm if they want to quit the game, while inputting the other options will continue directly to those screens.
 
>Action: The general layout of the screen will provide actions of what the character can do depending on the situation they are in.

>Action/Battle:  While in battle, the character will be prompted to input a number 1-5 on what they should do. 1) will attack the enemy you are in battle with, 2) will block damage from what the enemy is doing, 3) will give the player a chance to evade the incoming enemy attack or have a chance of still getting hit 4) will give the user the ability to use items that heal or give more oxygen or can change weapons 5) will return to the gameplay menu.

>Battle/Attack: If the user were to choose the attack option, they will be shown how much damage they have done to the alien, and see what the alien’s action is.

>Battle/Block: If the user were to choose the block option: they will be shown how much damage they have taken, and what the alien’s action is.

>Battle/Evade: If the user were to choose the evade option: they will be shown if they were successful or not and the alien’s action.

>Action/Out of battle: When out of battle, the user is able to move from one room to another. The user will be given prompts on which way to go, and inputting a number will change the room that they are in.
 
>View Inventory: This screen will show the items the player has in their inventory as well as how many they have of each. The user will be able to use items to heal or get more oxygen. The user will be prompted to input a number to choose an item and what to do with it. They will also have the option to go back to the gameplay menu.

>View Statistics: This screen will show the user their statistics such as health, oxygen level, and stamina. The user will be prompted to press enter in order to exit the screen and return to the gameplay menu.

>Game Over: This screen will show a game over screen after the character has died, be it to combat or lack of oxygen. The user will be prompted to enter 1) to restart the game or 2) to exit the game. Restarting will return the player to the main menu, while exit will quit the program.
 
>Help: The help menu will be available throughout the game. It will include useful information such as information on character classes, items, storyline, and more. The user will be able to input a number to get information about a certain topic, and can then return to their previous screen whenever.


## Class Diagram
> The Space Exploration: UML Class Diagram models the RPG's object orientation. It illustrates the main classes, interfaces, and associations between classes.
>
> The Character base class is used to construct characters in the game. The Player class and Alien class are derived from the Character class to inherit all protected variables and public mutator/accessor functions. The Player class and Alien class are both abstract base classes because they include virtual void function(s). There are three subclasses, tankPlayer, nimblePlayer, and allRounderPlayer, which inherit from the Player class. There are three subclasses, tankAlien, slipperyAlien, and bossAlien, which inherit from the Alien class. The Player and Alien subclasses all must override the virtual function(s) defined from their parent superclass. Additionally, the Player Class has an aggregation relationship with the Weapon class because all players have weapons. The Weapon base class has two derived classes, heavyWeapon and lightWeapon, in which their protected variables will have different starting values.
>
> ![image](https://github.com/cs100/final-project-dmase002-dvuon016-rgarc224-wdo008/assets/133715991/92989169-94b5-4668-84ce-4dab55f2c7d6)

 
 > ## Phase III
 > You will need to schedule a check-in for the second scrum meeting with the same reader you had your first scrum meeting with (using Calendly). Your entire team must be present. This meeting will occur on Zoom and should be conducted by Wednesday of week 8.
 
 > BEFORE the meeting you should do the following:
 > * Update your class diagram from Phase II to include any feedback you received from your TA/grader.
 > * Considering the SOLID design principles, reflect back on your class diagram and think about how you can use the SOLID principles to improve your design. You should then update the README.md file by adding the following:
 >   * A new class diagram incorporating your changes after considering the SOLID principles.
 >   * For each update in your class diagram, you must explain in 3-4 sentences:
 >     * What SOLID principle(s) did you apply?
 >     * How did you apply it? i.e. describe the change.
 >     * How did this change help you write better code?
 > * Perform a new sprint plan like you did in Phase II.
 > * You should also make sure that your README file (and Project board) are up-to-date reflecting the current status of your project and the most recent class diagram. Previous versions of the README file should still be visible through your commit history.
 
> During the meeting with your reader you will discuss: 
 > * How effective your last sprint was (each member should talk about what they did)
 > * Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 > * Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 > * What tasks you are planning for this next sprint.

 
 > ## Final deliverable
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
 
