//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CoreTelephonyClient, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TUCoreTelephonyClient : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    CoreTelephonyClient *_client;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000083aed
@property(readonly, nonatomic) CoreTelephonyClient *client; // @synthesize client=_client;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (id)subscriptionForUUID:(id)arg1;	// IMP=0x000000000008375f
- (id)subscriptionForLabelIdentifier:(id)arg1;	// IMP=0x00000000000833e5
- (id)initWithQueue:(id)arg1;	// IMP=0x000000000008334d
- (id)init;	// IMP=0x0000000000083322
- (_Bool)isTTYSoftwareSupportedForSubscriptionUUID:(id)arg1;	// IMP=0x000000000005734f
- (_Bool)isTTYSoftwareSupportedForSubscription:(id)arg1;	// IMP=0x0000000000057347
- (_Bool)isTTYSoftwareEnabledForSubscriptionUUID:(id)arg1;	// IMP=0x00000000000572f4
- (_Bool)isTTYSoftwareEnabledForSubscription:(id)arg1;	// IMP=0x00000000000572ec
- (_Bool)isTTYSoftwareAvailableForSubscriptionUUID:(id)arg1;	// IMP=0x0000000000057299
- (_Bool)isTTYSoftwareAvailableForSubscription:(id)arg1;	// IMP=0x0000000000057291
- (_Bool)isTTYHardwareSupportedForSubscriptionUUID:(id)arg1;	// IMP=0x000000000005723e
- (_Bool)isTTYHardwareSupportedForSubscription:(id)arg1;	// IMP=0x0000000000057236
- (_Bool)isTTYHardwareEnabledForSubscriptionUUID:(id)arg1;	// IMP=0x00000000000571e3
- (_Bool)isTTYHardwareEnabledForSubscription:(id)arg1;	// IMP=0x00000000000571db
- (_Bool)isTTYHardwareAvailableForSubscriptionUUID:(id)arg1;	// IMP=0x0000000000057188
- (_Bool)isTTYHardwareAvailableForSubscription:(id)arg1;	// IMP=0x0000000000057180
- (_Bool)isTTYSupportedForSubscriptionUUID:(id)arg1;	// IMP=0x000000000005712d
- (_Bool)isTTYSupportedForSubscription:(id)arg1;	// IMP=0x0000000000057125
- (_Bool)isTTYEnabledForSubscriptionUUID:(id)arg1;	// IMP=0x00000000000570d2
- (_Bool)isTTYEnabledForSubscription:(id)arg1;	// IMP=0x0000000000057072
- (_Bool)isRTTSupportedForSubscriptionUUID:(id)arg1;	// IMP=0x000000000005701f
- (_Bool)isRTTSupportedForSubscription:(id)arg1;	// IMP=0x0000000000057017
- (id)objectForKey:(id)arg1 subscriptionLabelIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000b1e36
- (id)testEmergencyHandleForSubscriptionLabelIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000b1db1
- (_Bool)isDialAssistSupportedForSubscriptionLabelIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000b1d26
- (_Bool)shouldShowEmergencyCallbackModeAlertForSubscription:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000b49cd
- (_Bool)shouldShowEmergencyCallbackModeAlertForSubscriptionUUID:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000b4969
- (_Bool)isWhitelistedEmergencyNumberForDigits:(id)arg1 subscription:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000b4894
- (_Bool)isWhitelistedEmergencyNumberForDigits:(id)arg1 subscriptionUUID:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000b4812
- (_Bool)isEmergencyNumberForDigits:(id)arg1 subscription:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000b473d
- (_Bool)isEmergencyNumberForDigits:(id)arg1 subscriptionUUID:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000b46bb
- (_Bool)inEmergencyMode;	// IMP=0x00000000000b45fe

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

