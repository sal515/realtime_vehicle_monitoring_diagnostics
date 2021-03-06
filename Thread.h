/*
 * Thread.h
 *
 *  Created on: Nov 14, 2020
 *      Author: Salman
 */

#ifndef THREAD_H_
#define THREAD_H_

#include <pthread.h>

namespace realtime_vehicle_monitoring_diagnostics
{
#define THREAD_IDLE_PRIORITY (1)
#define THREAD_RUN_PRIORITY (60)

	typedef void *(*start_routine_t)(void *);
	struct Thread_Control
	{
		// int data_ready = 0;
		pthread_mutex_t completion_mutex;
		pthread_mutex_t mutex;
		pthread_cond_t condvar;
	};

	class Thread
	{
	public:
		Thread();
		Thread(start_routine_t start_routine,
			   int sched_priority,
			   char *thread_name);
		Thread(const Thread &thread);

		virtual ~Thread();

		pthread_t thread;
		char *thread_name;

		pthread_attr_t attr;
		struct sched_param params;
		start_routine_t start_routine;
		struct Thread_Control thread_control;
		bool is_complete;
		int prio;

		void release_completion_mutex();
		int acquire_completion_mutex();

		void signal();
		void block();
		void unblock();
		void release_lock();
		int acquire_lock();

		void update_priority(int prio);
	};

} // namespace realtime_vehicle_monitoring_diagnostics

#endif /* THREAD_H_ */
