//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol AVOutputContextCommunicationChannelDelegate, AVOutputContextImpl, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVOutputContextInternal : NSObject
{
    NSObject<OS_dispatch_queue> *ivarAccessQueue;	// 8 = 0x8
    id <AVOutputContextImpl> impl;	// 16 = 0x10
    unsigned long long outputDeviceFeatures;	// 24 = 0x18
    int applicationPID;	// 32 = 0x20
    _Bool applicationPIDWasSet;	// 36 = 0x24
    id <AVOutputContextCommunicationChannelDelegate> communicationChannelDelegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000dc74a

@end

