#ifndef TASK_H
#define TASK_H

#include <string>
#include <ctime>
#include "Subtask.h"
#include "Deadline.h"
#include "Description.h"

using namespace std;

class Task
{
private:
    Deadline* ddl;
    Description* description;
    Subask **allSubtasks;
    uint numSubtasks;

public:
    Task(Deadline* dl,Description* des);
    Task();
    ~Task();
    int addSubtask(Subtask *newSubtask);
    int deleteSubtask(int index);
    std::string getDdl();
    void editDdl(struct tm *newDdl);
    std::string getDescription();
    void editDescription(std::string newDescription);
};

#endif
