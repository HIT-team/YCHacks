//
//  Camera.m
//  MyoCam
//
//  Created by Prachi Bodas on 8/2/14.
//  Copyright (c) 2014 HITapp. All rights reserved.
//

#import "Camera.h"
#import "AVFoundation/AVCaptureDevice.h"

@implementation Camera

-(void) addIOToTheSession
{
    //init session
    _session = [[AVCaptureSession alloc] init];
    [_session setSessionPreset:AVCaptureSessionPresetPhoto];
    
    //add input
    _input = [AVCaptureDevice defaultDeviceWithMediaType:AVMediaTypeVideo];
    NSError *error = nil;
    AVCaptureDeviceInput *vidInput = [AVCaptureDeviceInput deviceInputWithDevice:_input error:&error];
    if (_input) {
        [_session addInput:vidInput];
    }
    else {
        NSLog(@"NO DEVICE RECORDING");
    }
    
    //add output
}

@end
