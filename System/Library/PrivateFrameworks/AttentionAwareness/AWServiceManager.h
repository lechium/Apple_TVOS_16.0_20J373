//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSXPCConnection;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AWServiceManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSXPCConnection *_connection;	// 16 = 0x10
    NSMutableSet *_serviceObservers;	// 24 = 0x18
}

+ (void)removeObserver:(id)arg1;	// IMP=0x006000000001106c
+ (void)addObserver:(id)arg1;	// IMP=0x0060000000010ffa
+ (id)invokeWithService:(CDUnknownBlockType)arg1;	// IMP=0x0060000000010f77
+ (id)sharedManager;	// IMP=0x0060000000010f47
- (void).cxx_destruct;	// IMP=0x000000000001096d
- (void)removeObserver:(id)arg1;	// IMP=0x00000000000108c1
- (void)addObserver:(id)arg1;	// IMP=0x0000000000010815
- (id)invokeWithService:(CDUnknownBlockType)arg1;	// IMP=0x0000000000010552
- (id)init;	// IMP=0x00000000000103bd

@end

