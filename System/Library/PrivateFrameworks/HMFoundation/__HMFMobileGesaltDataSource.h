//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HMFObject.h"

@class HMFMACAddress, HMFSoftwareVersion, NSObject, NSString;
@protocol HMFSystemInfoNameDataSourceDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface __HMFMobileGesaltDataSource : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _supportsBLE;	// 12 = 0xc
    id <HMFSystemInfoNameDataSourceDelegate> _delegate;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    NSString *_modelIdentifier;	// 32 = 0x20
    NSString *_model;	// 40 = 0x28
    NSString *_regionInfo;	// 48 = 0x30
    NSString *_serialNumber;	// 56 = 0x38
    long long _productPlatform;	// 64 = 0x40
    long long _productClass;	// 72 = 0x48
    long long _productVariant;	// 80 = 0x50
    HMFSoftwareVersion *_softwareVersion;	// 88 = 0x58
    HMFMACAddress *_WiFiInterfaceMACAddress;	// 96 = 0x60
    long long _productColor;	// 104 = 0x68
    NSObject<OS_dispatch_queue> *_queue;	// 112 = 0x70
    struct MGNotificationTokenStruct *_notificationToken;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x000000000002ba31
@property(readonly) struct MGNotificationTokenStruct *notificationToken; // @synthesize notificationToken=_notificationToken;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly) long long productColor; // @synthesize productColor=_productColor;
@property(readonly) _Bool supportsBLE; // @synthesize supportsBLE=_supportsBLE;
@property(readonly, copy) HMFMACAddress *WiFiInterfaceMACAddress; // @synthesize WiFiInterfaceMACAddress=_WiFiInterfaceMACAddress;
@property(readonly, copy, nonatomic) HMFSoftwareVersion *softwareVersion; // @synthesize softwareVersion=_softwareVersion;
@property(readonly, nonatomic) long long productVariant; // @synthesize productVariant=_productVariant;
@property(readonly, nonatomic) long long productClass; // @synthesize productClass=_productClass;
@property(readonly, nonatomic) long long productPlatform; // @synthesize productPlatform=_productPlatform;
@property(readonly, copy, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(readonly, copy, nonatomic) NSString *regionInfo; // @synthesize regionInfo=_regionInfo;
@property(readonly, copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(readonly, copy, nonatomic) NSString *modelIdentifier; // @synthesize modelIdentifier=_modelIdentifier;
@property __weak id <HMFSystemInfoNameDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (_Bool)shouldFetchUserAssignedDeviceName;	// IMP=0x000000000002b831
- (void)dealloc;	// IMP=0x000000000002b7ea
- (id)init;	// IMP=0x000000000002add5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

