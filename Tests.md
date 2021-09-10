# Tests for Project 1

## Tests for Commit #1 Due 9/13/21 at Midnight (5 pts)
For commit #1 you need to be passing all of the tests in the commit1 test module (6 in total)

### Commit1.readUsersOpensCorrectFile - 0.5 pt
Tests if given a legitimate file name, your `readUsers()` function returns true indicating that it found the file and was able to open it (think `is_open()`)

### Commit1.readUsersFailsWithIncorrect - 0.5 pt
Tests if given a illegal file name, your `readUsers()` function returns false indicating that it did not find the file and was not able to open it.

### Commit1.readUsersCorrectContent - 2 pt
Tests if your `readUsers()` function modifies the `data` array properly. It will loop through row by row and column by column and check for equality. If a certain row, column combination does not match what is expected you will get an error similar to the following where the two numbers indicate the row and column that differs: 
```
Arrays differ at index 0, 0
```

### Commit1.validateOptionCorrect - 0.5 pt
Checks that all valid options (a, A, p, P, s, S, f, F, d, D, e, E) are returning true when passed to your `validateOption()` function and also that other character values are returning false. If you do not pass one of these assertions you will get an error message either telling you that a certain option is not working or that the invalid option did not return false. 

### Commit1.searchForUserFoundCorrectIndex - 1 pt
Tests that your `searchForUser()` function finds the correct index for each of the valid search names (names from the original user_info.csv file). If you do not pass one of these assertions, you will get an error telling you which of the test values (names) you failed. 

### Commit1.searchForUserNotFoundCorrect - 0.5 pt
Tests that your `searchForUser()` function returns -1 when a name that does not exist in the `data` array is passed. 

## Tests for Commit #2 Due 9/20/21 at Midnight (15 pts)
For commit #2 you need to be passing all of the tests in the commit1 test module (11 in total)

### Commit2.findAllUsersCorrectExists - 1 pt
Tests that your findAllUsers() function returns the correct number of users that have a given job in the `data` array. The test cases that it looks for are:
- "CEO" : should return 1
- "Manager" : should return 2
- "Engineer" : should return 2

### Commit2.findAllUsersCorrectNotExist - 1 pt
Tests that your findAllUsers() function returns 0 when a job is passed to it that does not appear in the `data` array. Test case: 
- "Frog" : should return 0

### Commit2.deleteUserReturnCorrectReturn - 0.5 pt
Tests that your deleteUsers() returns false when a user cannot be deleted (because they do not exist) and true when the user was able to be deleted. Test cases: 
- "Earl Jones" : should return true
- "Bob Jones" : should return false.

**ISSUE FOUND!** The current definition reads: 
```
TEST(Commit2, deleteUserReturnCorrectReturn) {
     std::string data_real[ROWS][COLS] = {
          {"Earl Jones", "EarlJones@email.com", "7Rfkqyuq", "Manager"},
          {"Kandy McGill", "KandyMcGill@email.com", "bYeP82i6", "Engineer"},
          {"Hank Stark", "HankStark@email.com", "t277Bqyi", "Manager"},
          {"Bob Baker", "BobBaker@email.com", "yidHvr81", "Engineer"},
          {"Tariq Thompson", "TariqThompson@email.com", "hB23uiyu", "CEO"}};
     std::string file = "test/user_info_delete1.csv";
     EXPECT_EQ(deleteUser("Earl Jones", data_real, file), true)
          << "deleteUsers should return true when user found and deleted.\n";
     EXPECT_EQ(deleteUser("Bob Jones", data_real, file), false)
          << "deleteUsers should return true when user found and deleted.\n";
}
```
**CORRECTIONS:** The second `EXPECT_EQ` does not have the correct output if you fail the test. It should be
```
// old (incorrect)
EXPECT_EQ(deleteUser("Bob Jones", data_real, file), false)
          << "deleteUsers should return true when user found and deleted.\n";
// new (correct)
EXPECT_EQ(deleteUser("Bob Jones", data_real, file), false)
          << "deleteUsers should return false when user not found and deleted.\n";
```
Note that this will not cause your code to fail building or testing, just give you a not so useful error message if you fail the test. 

### Commit2.deleteUserArrayCorrect - 1.5 pts
Tests to see if the `data` is correct after deleting a user from it (by calling deleteUser()). Test case:
- "Hank Stark" is removed - expected data array values: 
```
{"Earl Jones", "EarlJones@email.com", "7Rfkqyuq", "Manager"},
{"Kandy McGill", "KandyMcGill@email.com", "bYeP82i6", "Engineer"},
{"NULL", "NULL", "NULL", "NULL"},
{"Bob Baker", "BobBaker@email.com", "yidHvr81", "Engineer"},
{"Tariq Thompson", "TariqThompson@email.com", "hB23uiyu", "CEO"}};
```
If a certain row, column combination does not match what is expected you will get an error similar to the following where the two numbers indicate the row and column that differs: 
```
Arrays differ at index 0, 0 after deleting Hank Stark (row 2)
```
### Commit2.deleteUserFileCorrect - 2 pts
Tests to see if the csv file is properly modified after your deleteUser() is called. Test case: 
- "Hank Stark" is removed - expected file contents: 
```
Earl Jones,EarlJones@email.com,7Rfkqyuq,Manager
Kandy McGill,KandyMcGill@email.com,bYeP82i6,Engineer
NULL,NULL,NULL,NULL
Bob Baker,BobBaker@email.com,yidHvr81,Engineer
Tariq Thompson,TariqThompson@email.com,hB23uiyu,CEO
```
If a certain row, column combination does not match what is expected you will get an error similar to the following where the two numbers indicate the row and column that differs: 
```
Files differ at index 0, 0 after deleting Hank Stark (row 2)
```
### Commit2.generatePasswordCorrect - 1 pt
Checks that your generatePassword() generates a password that: 
- has 1 number
- has 1 Uppercase letter
- is exactly 8 characters
If one of these conditions is not met then an error message denoting which one has failed is shown. 

### Commit2.generateEmailCorrect - 1 pt
Checks that your generateEmail() function generates the correct email for a given user. Test case: 
- "George Hank" should generate "GeorgeHank@email.com"

### Commit2.checkEmptyCorrectIndexFound - 0.5 pt
Checks that your checkEmpty() function returns the correct row number when there is an empty row. 

### Commit2.checkEmptyCorrectIndexNotFound - 0.5 pt
Checks that your checkEmpty() function returns -1 when there is no empty row. 

### Commit2.addUserReturnArrayCorrect - 2 pts
Tests to see if the `data` is correct after adding a user from it (by calling addUser()). Test case:
- "Casey Cole", "Manager" is added
Starting array: 
```
{"Earl Jones", "EarlJones@email.com", "7Rfkqyuq", "Manager"},
{"NULL", "NULL", "NULL", "NULL"},
{"Hank Stark", "HankStark@email.com", "t277Bqyi", "Manager"},
{"Bob Baker", "BobBaker@email.com", "yidHvr81", "Engineer"},
{"Tariq Thompson", "TariqThompson@email.com", "hB23uiyu", "CEO"}};
```
Expected values after call: 
```
{"Earl Jones", "EarlJones@email.com", "7Rfkqyuq", "Manager"},
{"Casey Cole", "CaseyCole@email.com", "<VALID Password>", "Manager"},
{"Hank Stark", "HankStark@email.com", "t277Bqyi", "Manager"},
{"Bob Baker", "BobBaker@email.com", "yidHvr81", "Engineer"},
{"Tariq Thompson", "TariqThompson@email.com", "hB23uiyu", "CEO"}};
```
Where <VALID password> is a valid password generated by generatePassword(). 

If a certain row, column combination does not match what is expected you will get an error similar to the following where the two numbers indicate the row and column that differs: 
```
Arrays differ at index 0, 0 after inserting Casey Cole (row 1)
```
### Commit2.addUserFileCorrect - 2 pts
Tests to see if the csv file is properly modified after your addUser() is called. 
Starting file content:
```
Earl Jones,EarlJones@email.com,7Rfkqyuq,Manager
NULL,NULL,NULL,NULL
Hank Stark,HankStark@email.com,t277Bqyi,Manager
Bob Baker,BobBaker@email.com,yidHvr81,Engineer
Tariq Thompson,TariqThompson@email.com,hB23uiyu,CEO
```
Expected values after call: 
```
Earl Jones,EarlJones@email.com,7Rfkqyuq,Manager
Casey Cole,CaseyCole@email.com,<VALID Password>,"Manager"
Hank Stark,HankStark@email.com,t277Bqyi,Manager
Bob Baker,BobBaker@email.com,yidHvr81,Engineer
Tariq Thompson,TariqThompson@email.com,hB23uiyu,CEO
```
Where <VALID password> is a valid password generated by generatePassword(). 
  
If a certain row, column combination does not match what is expected you will get an error similar to the following where the two numbers indicate the row and column that differs: 
```
Files differ at index 0, 0 after inserting Casey Cole (row 1)
```
