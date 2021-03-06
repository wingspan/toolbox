//
//  UITextField.h
//  Useful Utilities - UITextField extensions
//
//	License:
//  You are free to use this code for whatever purposes you desire. The only requirement is that you smile everytime you use it.
//
//  Contact: @cheesemaker or jon@threejacks.com

#import <Foundation/Foundation.h>

@interface UITextField (UUFramework)

	//Enable one finger swipe to move the text caret forward/backward one character and
	// two finger swipe to move the text caret forward/backward an entire word
	- (void) uuAddGestureNavigation;

@end
