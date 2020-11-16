/*
 * Scheduler.h
 *
 *  Created on: Nov 14, 2020
 *      Author: Salman
 */

#ifndef SCHEDULER_H_
#define SCHEDULER_H_

namespace realtime_vehicle_monitoring_diagnostics
{

	class Scheduler
	{
	private:
	public:
		Scheduler(); // initializatin of a Scheduler
		virtual ~Scheduler();
		/* TODO: Figure out if we have queues with ascending sorting */
		// void init();
		void generate_tasks();
		// void create_a_task();
		void check_task_deadlines();
		void update_task_priority();
	};

} // namespace realtime_vehicle_monitoring_diagnostics

#endif /* SCHEDULER_H_ */