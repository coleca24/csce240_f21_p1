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

Commit2.findAllUsersCorrectExists - 1 pt
Commit2.findAllUsersCorrectNotExist - 1 pt
Commit2.deleteUserReturnCorrectReturn - 0.5 pt
Commit2.deleteUserArrayCorrect - 1.5 pts
Commit2.deleteUserFileCorrect - 2 pts
Commit2.generatePasswordCorrect - 1 pt
Commit2.generateEmailCorrect - 1 pt
Commit2.checkEmptyCorrectIndexFound - 0.5 pt
Commit2.checkEmptyCorrectIndexNotFound - 0.5 pt
Commit2.addUserReturnArrayCorrect - 2 pts
Commit2.addUserFileCorrect - 2 pts
