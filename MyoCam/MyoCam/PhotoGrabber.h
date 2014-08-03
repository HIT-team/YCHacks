//
//  PhotoGrabber.h
//  MyoCam
//
//  Created by Prachi Bodas on 8/2/14.
//  Copyright (c) 2014 HITapp. All rights reserved.
//

//
//  PhotoGrabber.h
//  By Erik Rothoff Andersson <erikrothoff.com>
//

#import <Foundation/Foundation.h>
#import <QTKit/QTKit.h>

@protocol PhotoGrabberDelegate <NSObject>

- (void)photoGrabbed:(NSImage*)image;

@end

@interface PhotoGrabber : NSObject {
    CVImageBufferRef currentImage;
    
    QTCaptureDevice *video;
    QTCaptureDecompressedVideoOutput *output;
    QTCaptureInput *input;
    QTCaptureSession *session;
    
    //id<PhotoGrabberDelegate> delegate;
}

@property (unsafe_unretained) id<PhotoGrabberDelegate> delegate;

- (void)grabPhoto;
- (NSString*)deviceName;

@end
