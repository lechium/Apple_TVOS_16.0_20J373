//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMAccessory, HMHome, NSArray, NSString, NSUUID, _HMContext;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _HMAccessoryProfile : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSUUID *_uniqueIdentifier;	// 16 = 0x10
    NSString *_assistantIdentifier;	// 24 = 0x18
    _HMContext *_context;	// 32 = 0x20
    HMAccessory *_accessory;	// 40 = 0x28
    HMHome *_home;	// 48 = 0x30
    NSUUID *_profileUniqueIdentifier;	// 56 = 0x38
    NSArray *_services;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000001d81c5
- (void).cxx_destruct;	// IMP=0x00000000001d816a
@property(readonly, nonatomic) NSArray *services; // @synthesize services=_services;
@property(readonly, copy, nonatomic) NSUUID *profileUniqueIdentifier; // @synthesize profileUniqueIdentifier=_profileUniqueIdentifier;
@property(readonly, nonatomic) __weak HMHome *home; // @synthesize home=_home;
@property(readonly, nonatomic) __weak HMAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly, nonatomic) _HMContext *context; // @synthesize context=_context;
@property(copy, nonatomic) NSString *assistantIdentifier; // @synthesize assistantIdentifier=_assistantIdentifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001d810b
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001d7e4e
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001d7d37
- (void)recomputeAssistantIdentifier;	// IMP=0x00000000001d7cf0
- (void)_recomputeAssistantIdentifier;	// IMP=0x00000000001d7a22
@property(readonly, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (_Bool)_mergeWithNewObject:(id)arg1;	// IMP=0x00000000001d7935
- (void)handleRuntimeStateUpdate:(id)arg1;	// IMP=0x00000000001d792f
- (void)_registerNotificationHandlers;	// IMP=0x00000000001d7929
- (void)_unconfigure;	// IMP=0x00000000001d7917
- (void)_unconfigureContext;	// IMP=0x00000000001d7881
- (void)__configureWithContext:(id)arg1 accessory:(id)arg2;	// IMP=0x00000000001d77d4
@property(readonly, copy) NSString *description;
- (id)initWithUUID:(id)arg1 services:(id)arg2;	// IMP=0x00000000001d7667

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

