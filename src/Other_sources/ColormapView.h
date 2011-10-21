/*****************************************************************************
* Copyright 2005 Jamie Portsmouth <jamports@mac.com>                         *
*                                                                            *
* This file is part of CMBview, a program for viewing HEALPix-format         *
* CMB data on an OpenGL-rendered 3d sphere.                                  * 
*                                                                            *
* See the source files in the Classes folder for the full license preamble   *
*                                                                            *
*****************************************************************************/

#import "CMBview.h"
#import "PreferenceController.h"

@class PreferenceController;

@interface ColormapView : NSView
{
	NSBezierPath *path;
	BOOL reverse;
}
@end