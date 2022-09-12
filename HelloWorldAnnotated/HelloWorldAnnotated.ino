// This code is released under the CC0 licence.
// For more information see:
// https://creativecommons.org/publicdomain/zero/1.0/

// Include the Arduboy2 library
#include <Arduboy2.h>

// Define an 'Arduboy2' variable named 'arduboy'
Arduboy2 arduboy;

// The 'setup' function,
// called once when the Arduboy starts.
void setup()
{
	// Initialise the Arduboy2 library object.
	arduboy.begin();
}

// The 'loop' function,
// called repeatedly inside a loop.
// When the function ends, it is called again.
void loop()
{
	// If it it not yet time to render the next frame.
	if(!arduboy.nextFrame())
		// Exit the function early.
		return;

	// Update the Arduboy's buttons,
	// so they can be compared to the values
	// from the previous update.
	// (I.e. to detect when a button has changed
	// from being up to being down, and vice versa.)
	arduboy.pollButtons();

	// Clear the Arduboy2 library's screen buffer.
	arduboy.clear();

	// Print the words "Hello World" to
	// the Arduboy2 library's screen buffer.
	arduboy.println(F("Hello World"));

	// Copy the contents of
	// the Arduboy2 library's screen buffer
	// to the actual screen.
	arduboy.display();
}