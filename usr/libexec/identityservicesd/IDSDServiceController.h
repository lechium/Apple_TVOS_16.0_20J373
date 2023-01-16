//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSServiceProperties, NSArray, NSDictionary, NSMapTable, NSMutableDictionary, NSSet;
@protocol OS_dispatch_queue;

@interface IDSDServiceController : NSObject
{
    NSMapTable *_services;	// 8 = 0x8
    NSMapTable *_servicesToNameMap;	// 16 = 0x10
    NSMapTable *_servicesToTopicMap;	// 24 = 0x18
    NSMutableDictionary *_deviceIDToSubServicesMap;	// 32 = 0x20
    NSMutableDictionary *_serviceNameToControlCategoryMap;	// 40 = 0x28
    NSSet *_allAdHocServices;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
}

+ (_Bool)shouldLoadService:(id)arg1;	// IMP=0x00400000006ce360
+ (id)sharedInstance;	// IMP=0x00100000006ce2a0
- (void).cxx_destruct;	// IMP=0x00200000006d4990
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSSet *allAdHocServices; // @synthesize allAdHocServices=_allAdHocServices;
- (id)adHocServicesForIdentifier:(id)arg1;	// IMP=0x00100000006d42d0
- (id)primaryServiceForAdhocServiceType:(unsigned int)arg1;	// IMP=0x00100000006d4140
- (id)linkedServicesForService:(id)arg1;	// IMP=0x00100000006d3d80
- (id)serviceWithPushTopic:(id)arg1;	// IMP=0x00100000006d3c70
- (id)serviceWithName:(id)arg1;	// IMP=0x00100000006d3b60
- (id)serviceWithIdentifier:(id)arg1;	// IMP=0x00100000006d3ac0
@property(readonly, nonatomic) NSDictionary *serviceNameToControlCategoryMap;
@property(readonly, nonatomic) __weak NSArray *allServicesStrings;
@property(readonly, nonatomic) __weak NSArray *allFamilyServices;
@property(readonly, nonatomic) __weak NSArray *allTinkerServices;
@property(readonly, nonatomic) __weak NSArray *allServices;
@property(readonly, nonatomic) NSSet *allPrimaryServices;
- (id)allServicesWithAdHocServiceType:(unsigned int)arg1;	// IMP=0x00100000006d3590
- (id)_currentSubServicesForDevice:(id)arg1 superService:(id)arg2;	// IMP=0x00100000006d34a0
- (void)_updateSubServicesForDevice:(id)arg1 superService:(id)arg2 newSubservices:(id)arg3;	// IMP=0x00100000006d3240
- (_Bool)_anyDeviceUsingSubService:(id)arg1 superService:(id)arg2;	// IMP=0x00100000006d2cb0
- (id)_combinedServicesForAllDevices;	// IMP=0x00100000006d2720
- (void)_loadSubServices;	// IMP=0x00100000006d1360
- (void)_saveSubServices;	// IMP=0x00100000006d10e0
- (void)updateSubServices:(id)arg1 forService:(id)arg2 deviceUniqueID:(id)arg3;	// IMP=0x00100000006cfb00
- (void)_loadSubServiceWithName:(id)arg1 usingService:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000006cf710
- (void)_unloadServiceWithName:(id)arg1;	// IMP=0x00100000006cf580
- (void)_loadService:(id)arg1;	// IMP=0x00100000006cf070
- (void)_loadServices;	// IMP=0x00100000006ce670
@property(readonly, nonatomic) IDSServiceProperties *gameCenterService;
@property(readonly, nonatomic) IDSServiceProperties *iCloudService;
@property(readonly, nonatomic) IDSServiceProperties *iTunesService;
- (id)userDefaults;	// IMP=0x00100000006ce1e0
- (id)serviceLoader;	// IMP=0x00100000006ce1b0
- (id)init;	// IMP=0x00100000006ce030

@end
