# Project 1 CSCE 240 Fall 2021 (20 points)
In this project, you will be writing a basic login system. You will create a basic command line interface (CLI) as well as implement the ability for the user to add, delete, search and more. The data for the system will be stored in a flat file (in this case a CSV file). 

You will need to implement the following functions (prototypes in login.h): 
## Commit #1 functions:
void printUsers(const string data[ROWS][COLS]);

bool readUsers(string, string data[ROWS][COLS]);

char displayOptions();

bool validateOption(char);

void executeOption(char, const string data[ROWS][COLS], string);

int searchForUser(string, const string data[ROWS][COLS]);

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
