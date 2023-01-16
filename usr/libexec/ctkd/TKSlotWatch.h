//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSMutableDictionary, NSString, NSXPCListenerEndpoint, TKHostTokenDriverCache, TKSlotWatcher, TKSmartCardSlot;
@protocol OS_dispatch_queue, OS_os_transaction;

@interface TKSlotWatch : NSObject
{
    TKSmartCardSlot *_smartCardSlot;	// 8 = 0x8
    long long _previousSlotState;	// 16 = 0x10
    NSString *_slotType;	// 24 = 0x18
    TKSlotWatcher *_slotWatcher;	// 32 = 0x20
    NSXPCListenerEndpoint *_endpoint;	// 40 = 0x28
    TKHostTokenDriverCache *_driverCache;	// 48 = 0x30
    NSMutableDictionary *_tokenConnections;	// 56 = 0x38
    NSObject<OS_os_transaction> *_transaction;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_queue;	// 72 = 0x48
    MISSING_TYPE *_name;	// 80 = 0x50
}

+ (_Bool)smartCard:(id)arg1 mightHandleAIDFromExtension:(id)arg2 foundAID:(id *)arg3;	// IMP=0x004000000000ad88
+ (id)supportedAIDsOfExtension:(id)arg1;	// IMP=0x001000000000ab79
+ (void)parseAIDForAttribute:(id)arg1 into:(id)arg2;	// IMP=0x001000000000a9cc
- (void).cxx_destruct;	// IMP=0x002000000000bdd3
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void)tokenRemoved;	// IMP=0x001000000000bb66
- (void)tokenArrived;	// IMP=0x001000000000b262
- (void)getTokenIDs:(id)arg1;	// IMP=0x001000000000a7df
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x001000000000a68b
- (void)remove;	// IMP=0x001000000000a60c
- (id)initWithName:(id)arg1 endpoint:(id)arg2 slotType:(id)arg3 watcher:(id)arg4;	// IMP=0x001000000000a318

@end

