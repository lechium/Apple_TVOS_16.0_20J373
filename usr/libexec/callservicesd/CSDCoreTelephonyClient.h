//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CTXPCContexts, CoreTelephonyClient, NSDictionary, NSMutableDictionary, NSSet, NSString, NSUUID;
@protocol CSDCoreTelephonyClientDelegate, OS_dispatch_queue;

@interface CSDCoreTelephonyClient : NSObject
{
    id <CSDCoreTelephonyClientDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    CoreTelephonyClient *_client;	// 24 = 0x18
    CTXPCContexts *_activeContexts;	// 32 = 0x20
    NSMutableDictionary *_mobileCodesToISOCountryCode;	// 40 = 0x28
}

+ (_Bool)_isNSErrorFatal:(id)arg1;	// IMP=0x002000000018a75b
+ (_Bool)_isCTErrorFatal:(CDStruct_1ef3fb1f)arg1;	// IMP=0x001000000018a73e
- (void).cxx_destruct;	// IMP=0x002000000018b128
@property(readonly, nonatomic) NSMutableDictionary *mobileCodesToISOCountryCode; // @synthesize mobileCodesToISOCountryCode=_mobileCodesToISOCountryCode;
@property(copy, nonatomic) CTXPCContexts *activeContexts; // @synthesize activeContexts=_activeContexts;
@property(readonly, nonatomic) CoreTelephonyClient *client; // @synthesize client=_client;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <CSDCoreTelephonyClientDelegate> delegate; // @synthesize delegate=_delegate;
- (void)ctEmergencyCallbackModeStatusChangedWithUserInfo:(id)arg1;	// IMP=0x001000000018af7d
- (void)phoneServicesCapabilitiesChanged:(id)arg1;	// IMP=0x001000000018add5
- (void)context:(id)arg1 capabilitiesChanged:(id)arg2;	// IMP=0x001000000018ac38
- (void)callCapabilitiesChanged:(id)arg1 capabilities:(id)arg2;	// IMP=0x001000000018aa7f
- (void)activeSubscriptionsDidChange;	// IMP=0x001000000018a9f9
- (id)_subscriptionWithUUID:(id)arg1;	// IMP=0x001000000018a7fe
- (id)mobileNetworkCodeForSubscription:(id)arg1 error:(id *)arg2;	// IMP=0x001000000018a661
- (id)mobileCountryCodeForSubscription:(id)arg1 error:(id *)arg2;	// IMP=0x001000000018a584
- (id)ISOCountryCodeForMobileCountryCode:(id)arg1 mobileNetworkCode:(id)arg2;	// IMP=0x001000000018a268
- (id)ISOCountryCodeForSubscriptionUUID:(id)arg1;	// IMP=0x0010000000189f54
- (id)accountISOCountryCodeForSubscriptionUUID:(id)arg1;	// IMP=0x0010000000189c9a
- (void)legacyRecheckAccountStatusForCapability:(id)arg1;	// IMP=0x0010000000189ba4
- (void)legacyRemoveSecondaryThumperDeviceWithIDSDeviceIdentifier:(id)arg1;	// IMP=0x0010000000189a34
- (void)legacyAddSecondaryThumperDeviceWithIDSDeviceIdentifier:(id)arg1;	// IMP=0x00100000001898c4
- (id)legacySystemCapabilities;	// IMP=0x001000000018981b
- (void)setLegacyCapability:(id)arg1 enabled:(_Bool)arg2 capabilityInformation:(id)arg3;	// IMP=0x0010000000189682
- (void)endEmergencyCallbackMode;	// IMP=0x0010000000189551
- (void)recheckAccountStatusForSubscription:(id)arg1 capability:(id)arg2;	// IMP=0x00100000001893e2
- (void)removeSecondaryThumperDeviceWithIDSDeviceIdentifier:(id)arg1 fromSubscription:(id)arg2;	// IMP=0x00100000001891c2
- (void)addSecondaryThumperDeviceWithIDSDeviceIdentifier:(id)arg1 toSubscription:(id)arg2;	// IMP=0x0010000000188fa2
- (void)setSubscription:(id)arg1 capability:(id)arg2 enabled:(_Bool)arg3 info:(id)arg4;	// IMP=0x0010000000188d2c
- (void)setCapability:(id)arg1 enabled:(_Bool)arg2 info:(id)arg3;	// IMP=0x0010000000188d1a
- (id)systemCapabilitiesForSubscription:(id)arg1;	// IMP=0x0010000000188ba5
- (id)capabilityInfoForSubscription:(id)arg1 capability:(id)arg2;	// IMP=0x0010000000188a08
- (id)callCapabilitiesForSubscription:(id)arg1;	// IMP=0x001000000018884c
@property(readonly, copy, nonatomic) NSDictionary *thumperDeviceInfo;
@property(readonly, nonatomic, getter=isEmergencyCallbackModeEnabled) _Bool emergencyCallbackModeEnabled;
@property(readonly, copy, nonatomic) NSSet *telephonySubscriptions;
@property(readonly, copy, nonatomic) NSSet *subscriptions;
@property(readonly, copy, nonatomic) NSUUID *preferredVoiceSubscriptionUUID;
- (id)initWithQueue:(id)arg1 shouldRegisterForECBMNotification:(_Bool)arg2;	// IMP=0x0010000000187f5d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
