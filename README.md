# Project 1 CSCE 240 Fall 2021 (20 points)
In this project, you will be writing a basic login system. You will create a basic command line interface (CLI) as well as implement the ability for the user to add, delete, search and more. The data for the system will be stored in a flat file (in this case a CSV file). 

You will need to implement 12 functions. The prototypes for these will be in the login.h file. **You will only need to modify the login.h file, DO NOT MODIFY THE `main.cpp` file!**

To simplify the prototypes for the functions, I have elected to keep both dimensions of the array as constant global variables. 
```
const int COLS = 4;
const int ROWS = 5;
```
This means that your login system only has the capacity for 5 users at most. We are going to enforce that limit. 

The starting users for the system are in the data/ folder in a file called  `user_info.csv`. You will find that in the file there are 4 attributes for each user: Name, Email, Password and Job Title. 

## Commit #1 functions:
These are in order of how I would suggest to complete them. These 6 will be the ones tested for commit #1 (5 points total).

- `bool readUsers(string fh, string data[ROWS][COLS]);`
  -   Reads in the user from the flat csv file and stores it in the data array.
  -   `fh` is the name of the file to be read. This will be sent in by the main. 
  -   `data` is a 5x4 array that you will populate with the data from the `user_info.csv` file. 
-  `void printUsers(const string data[ROWS][COLS]);`
  -  Prints out the contents of the 2d array to standard out
  -  This function will be useful as a debugging step. 
  -  `data` is a 5x4 array that has the user information 
- `bool validateOption(char option);`
  - This function will validate whether a valid input was given to your CLI. 
  - The valid inputs are: E, e, P, p, S, s, F, f, A, a, D, d
  - `option` is the character that should be checked for being a valid input
  - returns bool - true if `option` is a valid input, false otherwise.
- `char displayOptions();`
  -  This function will display the command line options that the user can input into your system. 
  -  It should include a call to `cin` to get the choice from the user and return this choice if it is a valid option (Hint: you will use the `validateOption(char)` to check).
- `void executeOption(char option, const string data[ROWS][COLS], string fn);`
  - Based on the `option` that is sent in, the correct function should be called. Note that for this first commit, you will not have all of the functions implemented, so it is fine for you to just put a cout statement for that option as a placeholder for now. 
  - Options: 
    - E/e Ends the program - you will actually not have to do anything for this option in this function (note the flow in the main function in main.cpp)
    - P/p Calls printUsers()
    - S/s Calls searchForUser() - You will need to first read in a name from the user to pass to this function. You should also use the index that this function returns to print out the user infomation that was found (if one was found - see output example). 
    - F/f Calls findAllUsers() - You will need to read in a job title from the user to pass to this function. You should also print out the number of users that were found here (see output example). 
    - A/a Calls the addUser() function - You will need to read in a name and a job title from the user to send to this function. Before calling the function, you should first check to see if there is an empty spot (a row populated by "NULL"s). If there is not, then you should tell the user that the database is full (see example output). You should also not allow the user to add a duplicate entry. 
    - D/d Calls the deleteUser() function - You will need to read in a name from the user to send to this function. If the user is deleted, then the user should be told they were successfully deleted. If they were not found then the user should be told that there was no user found. 
  - `option` is the action that the user chose in the `displayOptions()` function (note in the main.cpp how this flows). 
  - `data` is a 5x4 array that has the user information 
  -  `fh` is the name of the file. Some of the functions that you will call in this function will need the file name. 
- `int searchForUser(string name, const string data[ROWS][COLS]);`
  -  Allows the user to search the data array by name. If there is a match then the index of the match (the row number) is returned. If there is no match then -1 is returned. 
  -  `name` is the name to search for in the `data` array. 
  -  `data` is a 5x4 array that has the user information

## Commit #2 functions:
int findAllUsers(string, const string data[ROWS][COLS]); 

bool deleteUser(string, string data[ROWS][COLS], string);

string generatePassword();

string generateEmail(string name);

int checkEmpty(const string data[ROWS][COLS]);

void addUser(int, string, string, string data[ROWS][COLS], string);


## Grading
### Commit #1 Due 9/9/21 at Midnight (5 pts)
For commit #1 you need to be passing all of the tests in the commit1 test module (6 in total)

1. Commit1.readUsersOpensCorrectFile - 0.5 pt
2. Commit1.readUsersFailsWithIncorrect - 0.5 pt
3. Commit1.readUsersCorrectContent - 2 pt 
4. Commit1.validateOptionCorrect - 0.5 pt
5. Commit1.searchForUserFoundCorrectIndex - 1 pt 
6. Commit1.searchForUserNotFoundCorrect - 0.5 pt

For more info about these test cases, please see https://github.com/coleca24/csce240_f21_p1/blob/main/Tests.md. 

### Commit #2 Due 9/16/21 at Midnight (15 pts)
For commit #2 you need to be passing all of the tests in the commit1 test module (11 in total)

1. Commit2.findAllUsersCorrectExists - 1 pt
2. Commit2.findAllUsersCorrectNotExist - 1 pt 
3. Commit2.deleteUserReturnCorrectReturn - 0.5 pt 
4. Commit2.deleteUserArrayCorrect - 1.5 pts
5. Commit2.deleteUserFileCorrect - 2 pts
6. Commit2.generatePasswordCorrect - 1 pt
7. Commit2.generateEmailCorrect - 1 pt
8. Commit2.checkEmptyCorrectIndexFound - 0.5 pt
9. Commit2.checkEmptyCorrectIndexNotFound - 0.5 pt
10. Commit2.addUserReturnArrayCorrect - 2 pts
11. Commit2.addUserFileCorrect - 2 pts

**1 pt for passing the style checker**

For more info about these test cases, please see https://github.com/coleca24/csce240_f21_p1/blob/main/Tests.md. 
