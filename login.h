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
bool readUsers(string fh, string data[ROWS][COLS]);
char displayOptions();
bool validateOption(char option);
void executeOption(char option, string data[ROWS][COLS], string);
int searchForUser(string name, const string data[ROWS][COLS]);

// TODO(commit 2): Commit #2 functions
int findAllUsers(string title, const string data[ROWS][COLS]);
bool deleteUser(string name, string data[ROWS][COLS], string fh);
string generatePassword();
string generateEmail(string name);
int checkEmpty(const string data[ROWS][COLS]);
void addUser(int index, string name, string title,
             string data[ROWS][COLS], string fh);

void printUsers(const string data[ROWS][COLS]) {
  return;
}
bool readUsers(string fh, string data[ROWS][COLS]) {
  return false;
}
char displayOptions() {
  return 'e';
}
bool validateOption(char option) {
  return false;
}
void executeOption(char option, string data[ROWS][COLS], string) {
  return;
}
int searchForUser(string name, const string data[ROWS][COLS]) {
  return -1;
}

int findAllUsers(string title, const string data[ROWS][COLS]) {
  return -1;
}
bool deleteUser(string name, string data[ROWS][COLS], string fh) {
  return false;
}
string generatePassword() {
  return "";
}
string generateEmail(string name) {
  return "";
}
int checkEmpty(const string data[ROWS][COLS]) {
  return -1;
}
void addUser(int index, string name, string title,
             string data[ROWS][COLS], string fh) {
  return;
}

#endif  // LOGIN_H_
