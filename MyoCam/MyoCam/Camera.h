//
//  Camera.h
//  MyoCam
//
//  Created by Prachi Bodas on 8/2/14.
//  Copyright (c) 2014 HITapp. All rights reserved.
//

#import <AVFoundation/AVFoundation.h>

#import <AVFoundation/AVCaptureSession.h>
//#import "AVCaptureInputClass.h"

@interface Camera : NSObject

@property (nonatomic, strong) AVCaptureSession* session;


//input device to get stuff
@property (nonatomic, strong) AVCaptureDevice* input;


////instance of concrete sublcass of AVCaptureInput
//@property (nonatomic, strong) AVCaptureInputClass* capInput;
////instance of concretesub of AVCaptureOutput
//@property (nonatomic, strong) AVCaptureOutputClass* capOutput;
////AVCaptureSession to mediate b/w in and out



//default preset is high


@end
