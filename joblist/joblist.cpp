#include <iostream>
#include "..\includes\joblist.h"
#include "..\includes\file_io.h"
#include "..\includes\constants.h"
#include "..\includes\Dispatcher.h"

//assumme the worst
bool joblistHasJobs = false;

int joblist::init(const char* filename) {
	return SUCCESS;
}

PCB joblist::getNextJob() {
	return getNext();
}

int joblist::doTick(int currentTick) {
	return NO_JOBS;
}
