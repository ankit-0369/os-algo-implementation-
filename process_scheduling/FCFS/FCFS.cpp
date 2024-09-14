#include "FCFS.h"
#include <iostream>
#include <numeric>

// Schedule the processes using the FCFS algorithm
void FCFS::schedule(const std::vector<Process> &processes)
{
    std::vector<int> waitingTimes = calculate_waiting_times(processes);
    std::vector<int> turnaroundTimes = calculate_turn_around_times(processes, waitingTimes);
    display_results(processes, waitingTimes, turnaroundTimes);
}

// Calculate waiting times for each process
std::vector<int> FCFS::calculate_waiting_times(const std::vector<Process> &processes) const
{
    std::vector<int> waiting_times(processes.size());
    waiting_times[0] = 0;

    for (size_t i = 1; i < processes.size(); ++i)
    {
        waiting_times[i] = processes[i - 1].get_burst_time() + waiting_times[i - 1];
    }

    return waiting_times;
}

// Calculate turnaround times for each process
std::vector<int> FCFS::calculate_turn_around_times(const std::vector<Process> &processes, const std::vector<int> &waiting_times) const
{
    std::vector<int> turn_around_times(processes.size());

    for (size_t i = 0; i < processes.size(); ++i)
    {
        turn_around_times[i] = processes[i].get_burst_time() + waiting_times[i];
    }

    return turn_around_times;
}

// Display the results of the scheduling
void FCFS::display_results(const std::vector<Process> &processes, const std::vector<int> &waiting_times, const std::vector<int> &turn_around_times) const
{
    std::cout << "Process\tArrival Time\tBurst Time\tWaiting Time\tTurnaround Time\n";

    for (size_t i = 0; i < processes.size(); ++i)
    {
        std::cout << "P" << processes[i].get_id() << "\t\t"
                  << processes[i].get_arrival_time() << "\t\t"
                  << processes[i].get_burst_time() << "\t\t"
                  << waiting_times[i] << "\t\t"
                  << turn_around_times[i] << "\n";
    }

    double avgWaitingTime = std::accumulate(waiting_times.begin(), waiting_times.end(), 0.0) / processes.size();
    double avgTurnaroundTime = std::accumulate(turn_around_times.begin(), turn_around_times.end(), 0.0) / processes.size();

    std::cout << "Average Waiting Time: " << avgWaitingTime << "\n";
    std::cout << "Average Turnaround Time: " << avgTurnaroundTime << "\n";
}
