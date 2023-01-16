//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHomeAdministratorHandler, NSObject, NSString, NSUUID;
@protocol HMFMessageReceiver, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface __HMDHomeAdministratorReceiver : HMFObject
{
    id <HMFMessageReceiver> _receiver;	// 8 = 0x8
    HMDHomeAdministratorHandler *_handler;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x001000000095849d
- (void).cxx_destruct;	// IMP=0x0000000000958423
@property(readonly) __weak HMDHomeAdministratorHandler *handler; // @synthesize handler=_handler;
@property(readonly) __weak id <HMFMessageReceiver> receiver; // @synthesize receiver=_receiver;
- (id)logIdentifier;	// IMP=0x0000000000958377
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)__handleXPCMessage:(id)arg1;	// IMP=0x00000000009581ac
- (void)registerForMessage:(id)arg1 policies:(id)arg2;	// IMP=0x00000000009580c3
- (id)shortDescription;	// IMP=0x0000000000958049
- (void)dealloc;	// IMP=0x0000000000957f8c
- (id)initWithReceiver:(id)arg1 handler:(id)arg2;	// IMP=0x0000000000957ef1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly) Class superclass;

@end

