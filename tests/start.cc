/**
 * start.cc - CPP-PIC Runtime Main Function
 *
 * Main application logic called from entry_point().
 */

#include "language/pil_tests.h"

/**
 * start - Main application function
 *
 * Called by entry_point() after platform-specific initialization.
 * @return TRUE if all operations succeeded, FALSE otherwise
 */
INT32 start()
{
	// Run runtime and unit tests
	BOOL allPassed = RunPILTests();
	return allPassed;
}
