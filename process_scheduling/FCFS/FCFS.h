#ifndef FCFS_H
#define FCFS_H

#include <vector>
#include <utility>

#include "Process.h"

class FCFS
{
private:
    std::vector<int> calculate_waiting_times(const std::vector<Process> &processes) const;
    std::vector<int> calculate_turn_around_times(const std::vector<Process> &processes, const std::vector<int> &waitingTimes) const;
    void display_results(const std::vector<Process> &processes, const std::vector<int> &waitingTimes, const std::vector<int> &turnaroundTimes) const;

public:
 void schedule(const std::vector<Process>& processes);
};



#endif