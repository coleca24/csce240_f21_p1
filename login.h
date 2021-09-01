// Author: <Enter name here>
// Email: <Enter email here>
// Section #: <Enter section here>
// Copyright 2021 <Enter Name Here>
// Modified from template code @coleca24 GitHub
#ifndef LOGIN_H_
#define LOGIN_H_

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using std::string;

const int COLS = 4;
const int ROWS = 5;

// TODO(commit 1): Commit #1 functions
void printUsers(const string data[ROWS][COLS]);
bool readUsers(string, string data[ROWS][COLS]);
char displayOptions();
bool validateOption(char);
void executeOption(char, const string data[ROWS][COLS], string);
int searchForUser(string, const string data[ROWS][COLS]);

// TODO(commit 2): Commit #2 functions
int findAllUsers(string, const string data[ROWS][COLS]);  // Based on job title
bool deleteUser(string, string data[ROWS][COLS], string);
string generatePassword();
string generateEmail(string name);
int checkEmpty(const string data[ROWS][COLS]);
void addUser(int, string, string, string data[ROWS][COLS], string);

#endif  // LOGIN_H_
