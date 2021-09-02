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

1. `bool readUsers(string, string data[ROWS][COLS]);`
3. `void printUsers(const string data[ROWS][COLS]);`
4. char displayOptions();
5. bool validateOption(char);
6. void executeOption(char, const string data[ROWS][COLS], string);
7. int searchForUser(string, const string data[ROWS][COLS]);

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
