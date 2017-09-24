#include <iostream>
#include "Pong.h"


int main(void) {
	srand(time(NULL));
	
  	Pong pong("Fourmi de Langton", 600, 600, 300);
  	
  	pong.execute();
	
	return 0;
	}
