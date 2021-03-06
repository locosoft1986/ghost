/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                                                                           *
 *  Ghost, a micro-kernel based operating system for the x86 architecture    *
 *  Copyright (C) 2015, Max Schlüssel <lokoxe@gmail.com>                     *
 *                                                                           *
 *  This program is free software: you can redistribute it and/or modify     *
 *  it under the terms of the GNU General Public License as published by     *
 *  the Free Software Foundation, either version 3 of the License, or        *
 *  (at your option) any later version.                                      *
 *                                                                           *
 *  This program is distributed in the hope that it will be useful,          *
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of           *
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the            *
 *  GNU General Public License for more details.                             *
 *                                                                           *
 *  You should have received a copy of the GNU General Public License        *
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.    *
 *                                                                           *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef GHOST_MULTITASKING_WAITER_SEND_MESSAGE
#define GHOST_MULTITASKING_WAITER_SEND_MESSAGE

#include "tasking/wait/waiter.hpp"

/**
 *
 */
class g_waiter_send_message: public g_waiter {
private:
	g_syscall_send_message* data;

public:
	g_waiter_send_message(g_syscall_send_message* _data) {
		this->data = _data;
	}

	/**
	 *
	 */
	virtual bool checkWaiting(g_thread* task);

	/**
	 *
	 */
	virtual const char* debug_name() {
		return "send-message";
	}

};

#endif
