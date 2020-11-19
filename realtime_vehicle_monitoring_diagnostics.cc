#include <cstdlib>
#include <iostream>

#include "DatasetManager.h"
#include "Scheduler.h"
#include "ThreadManager.h"
#include "TimerManager.h"
#include "Task.h"
#include "PeriodicTask.h"

using namespace realtime_vehicle_monitoring_diagnostics;

int main(int argc, char *argv[])
{
	DatasetManager ds_manager_obj = DatasetManager();
	Scheduler scheduler_obj = Scheduler();
	//	ThreadManager thread_manager_obj = ThreadManager();
	// ThreadManager.create_thread();
	TimerManager timer_manager_obj = TimerManager();
	PeriodicTask periodic_task = PeriodicTask();
	// Task task = Task();
	// task.task_type = PERIODIC;

	return EXIT_SUCCESS;
}
