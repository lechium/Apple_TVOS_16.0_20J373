//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FMNSXPCConnection, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FMNSXPCCachedConnection : NSObject
{
    FMNSXPCConnection *_connection;	// 8 = 0x8
    CDUnknownBlockType _didInvalidate;	// 16 = 0x10
    CDUnknownBlockType _failureBlock;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_serialQueue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000000a1d0
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(copy, nonatomic) CDUnknownBlockType didInvalidate; // @synthesize didInvalidate=_didInvalidate;
@property(retain, nonatomic) FMNSXPCConnection *connection; // @synthesize connection=_connection;
- (void)_invalidate;	// IMP=0x000000000000a075
- (void)invalidate;	// IMP=0x0000000000009f8c
- (id)remoteObjectProxy;	// IMP=0x0000000000009f3c
- (void)addFailureBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000009cb6
- (id)initWithFMNSXPCConnection:(id)arg1;	// IMP=0x0000000000009c18

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

