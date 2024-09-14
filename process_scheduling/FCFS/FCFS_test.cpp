#include "FCFS.h"
#include "Process.h"
#include <vector>

int main() {
    // Create a list of processes
    //Process(id, arrival_time, burst_time)
    std::vector<Process> processes = {
        Process(1, 0, 24),
        Process(2, 0, 3),
        Process(3, 0, 3),
         Process(4, 0, 3),
          Process(5, 0, 3),
           Process(6, 0, 3),

    };

    // Create an FCFS scheduler
    FCFS scheduler;
    
    // Schedule the processes
    scheduler.schedule(processes);

    return 0;
}
