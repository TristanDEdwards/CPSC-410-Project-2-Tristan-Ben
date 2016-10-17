#include "..\includes\Dispatcher.h"
#include "..\includes\constants.h"
#include <queue>

//making a change to see how Git works

PCB runningPCB;

void dispatcher::init() {	
}

PCB dispatcher::getCurrentJob() {
	return runningPCB;
}

void dispatcher::addJob(PCB &myPCB) {	
}

int dispatcher::processInterrupt(int interrupt) {
	return NO_JOBS;
}

int dispatcher::doTick() {
	return NO_JOBS;
}