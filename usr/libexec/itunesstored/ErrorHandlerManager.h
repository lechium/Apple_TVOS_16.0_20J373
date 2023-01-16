//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface ErrorHandlerManager : NSObject
{
    NSMutableArray *_clients;	// 8 = 0x8
    NSMutableDictionary *_completionBlocks;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_completionQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 32 = 0x20
}

+ (void)resolveSessionWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x004000000019438b
+ (void)connectHandlerWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000019434b
+ (void)observeXPCServer:(id)arg1;	// IMP=0x00100000001942f0
+ (id)errorHandlerManager;	// IMP=0x0010000000193db8
- (void)_resolveSessionWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00200000001957a3
- (void)_handleMessage:(id)arg1 connection:(id)arg2 withReplyBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000195681
- (void)_handleMessage:(id)arg1 connection:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000195581
- (void)_connectHandlerWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000194ace
- (id)_clientForConnection:(id)arg1;	// IMP=0x0010000000194980
- (void)_clientDisconnectNotification:(id)arg1;	// IMP=0x00100000001943cb
- (void)openSession:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000193e35
- (void)dealloc;	// IMP=0x0010000000193d1d
- (id)init;	// IMP=0x0010000000193bf9

@end

