//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVCaptureDataOutputDelegateCallbackHelper, AVWeakReference;

__attribute__((visibility("hidden")))
@interface AVCaptureDepthDataOutputInternal : NSObject
{
    AVCaptureDataOutputDelegateCallbackHelper *delegateCallbackHelper;	// 8 = 0x8
    AVWeakReference *weakReference;	// 16 = 0x10
    _Bool alwaysDiscardsLateDepthData;	// 24 = 0x18
    _Bool filteringEnabled;	// 25 = 0x19
}

- (void)dealloc;	// IMP=0x000000000000d73a
- (id)init;	// IMP=0x000000000000d6cf

@end

