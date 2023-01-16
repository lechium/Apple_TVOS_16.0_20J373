//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APSConnection, NSMutableArray, NSString, TaskQueue, UnfairLock;
@protocol OS_dispatch_queue, PushConnectionDelegate;

@interface PushConnection : NSObject
{
    APSConnection *_connection;	// 8 = 0x8
    NSString *_environment;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    UnfairLock *_historyLock;	// 32 = 0x20
    NSString *_logKey;	// 40 = 0x28
    NSMutableArray *_messageHistory;	// 48 = 0x30
    TaskQueue *_taskQueue;	// 56 = 0x38
    id <PushConnectionDelegate> _delegate;	// 64 = 0x40
}

+ (id)_newConnectionForEnvironment:(id)arg1 dispatchQueue:(id)arg2;	// IMP=0x0020000000046d31
- (void).cxx_destruct;	// IMP=0x0020000000046dcb
@property __weak id <PushConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSString *description;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x0010000000046b5c
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;	// IMP=0x00100000000468fc
- (void)shutdown;	// IMP=0x00100000000468e6
- (id)publicToken;	// IMP=0x00100000000468d0
@property(readonly) NSString *environment;
- (id)initWithEnvironment:(id)arg1 queue:(id)arg2;	// IMP=0x001000000004675b
- (id)initWithEnvironment:(id)arg1;	// IMP=0x00100000000466f8
- (id)init;	// IMP=0x00100000000466dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

