//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _GCMicrosoftXboxControllerProfile : NSObject
{
}

+ (id)physicalDeviceGetHapticCapabilityGraph:(id)arg1;	// IMP=0x00100000000527ae
+ (id)physicalDeviceGetHapticCapabilities:(id)arg1;	// IMP=0x00100000000525ab
+ (void)physicalDevice:(id)arg1 getBatteryWithReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000052350
+ (long long)logicalDeviceDeterminePhysicalInputType:(id)arg1;	// IMP=0x0010000000052110
+ (id)logicalDevice:(id)arg1 makeControllerPhysicalInputProfileWithIdentifier:(id)arg2;	// IMP=0x0010000000051fcf
+ (id)logicalDeviceControllerDetailedProductCategory:(id)arg1;	// IMP=0x0010000000051ec5
+ (id)logicalDeviceControllerProductCategory:(id)arg1;	// IMP=0x0010000000051eb1
+ (void)deviceManager:(id)arg1 prepareLogicalDevice:(id)arg2;	// IMP=0x0010000000051e99
+ (void)deviceManager:(id)arg1 willPublishPhysicalDevice:(id)arg2;	// IMP=0x0010000000051e81
+ (id)deviceManager;	// IMP=0x0010000000051d53

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

