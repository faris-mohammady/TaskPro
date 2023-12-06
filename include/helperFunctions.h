#ifndef HELPERFUNCTIONS_H
#define HELPERFUNCTIONS_H

#include <iostream>
#include <string>
#include <ctime>
#include "../include/TaskList.h"



using namespace std;

void printMainMenu();
void displayTasks(TaskList*);
void taskToAdd(TaskList*);
void subtaskToAdd(MainTask*);
void subtaskToDelete(MainTask*);
void taskToDelete(TaskList*);
void taskToEdit(TaskList*);
void subtaskToEdit(MainTask*);
void sortTasks(TaskList*);
// void* updateDdlHelper(void*);
time_t _addRecurring(time_t oldDeadLine, uint recurringDay);
int getUserInputInteger();
time_t getUserInputDdl();
int getUserInputIntegerForMinute();
std::string getUserInputString();
    
#endif