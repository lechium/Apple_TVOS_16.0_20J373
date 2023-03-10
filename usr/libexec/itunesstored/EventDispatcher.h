//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSMutableArray;
@protocol OS_dispatch_queue;

@interface EventDispatcher : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    NSMutableArray *_eventMonitors;	// 16 = 0x10
}

+ (void)observeXPCServer:(id)arg1;	// IMP=0x0040000000120ba7
+ (void)connectEventMonitorWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000001207af
+ (MISSING_TYPE *)eventDispatcher;	// IMP=0x0010000000120465
- (void)_handleMessage:(id)arg1 connection:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0020000000120df0
- (void)_addClient:(id)arg1;	// IMP=0x0010000000120dda
- (void)_clientDisconnectNotification:(id)arg1;	// IMP=0x0010000000120bcf
- (void)postEventWithName:(id)arg1 userInfo:(id)arg2;	// IMP=0x00100000001204aa
- (void)dealloc;	// IMP=0x00100000001203e3
- (id)init;	// IMP=0x0010000000120345

@end

