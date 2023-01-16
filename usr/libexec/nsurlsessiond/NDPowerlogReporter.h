//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURLSessionTask;

@interface NDPowerlogReporter : NSObject
{
    NSURLSessionTask *_task;	// 8 = 0x8
    _Bool _hasStarted;	// 16 = 0x10
    double _lastUpdateTime;	// 24 = 0x18
    double _lastSuspendTime;	// 32 = 0x20
    double _suspendedDurationSinceLastUpdate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000002d2f
- (void)cancel;	// IMP=0x0010000000002d29
- (void)taskTransferredData:(long long)arg1 countOfBytesReceived:(long long)arg2;	// IMP=0x0010000000002d07
- (void)taskWillSuspend;	// IMP=0x0010000000002ced
- (void)taskWillResume;	// IMP=0x0010000000002cb8
- (id)initWithTask:(id)arg1;	// IMP=0x0010000000002c2d

@end

