//
//  Camera.m
//  MyoCam
//
//  Created by Prachi Bodas on 8/2/14.
//  Copyright (c) 2014 HITapp. All rights reserved.
//

#import "Camera.h"
#import "PhotoGrabber.h"

@implementation Camera// first get a video channel from the sequence grabber

- (void)takePhoto
{
	PhotoGrabber *grabber = [[PhotoGrabber alloc] init];
	grabber.delegate = self;
	[grabber grabPhoto];
}

- (void)photoGrabbed:(NSImage*)image
{
	// image is the image from the camera
	// store it to a file or show, manipulate it, have fun
}



@end
