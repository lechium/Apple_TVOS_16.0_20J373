//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameController/NSObject-Protocol.h>

@class _GCDefaultDeviceManager, _GCHIDServiceInfo;
@protocol _GCLogicalDevice, _GCPhysicalDevice;

@protocol _GCDefaultDeviceManagerDelegate <NSObject>

@optional
- (void)deviceManager:(_GCDefaultDeviceManager *)arg1 prepareLogicalDevice:(id <_GCLogicalDevice>)arg2;
- (void)deviceManager:(_GCDefaultDeviceManager *)arg1 willPublishPhysicalDevice:(id <_GCPhysicalDevice>)arg2;
- (id <_GCPhysicalDevice>)deviceManager:(_GCDefaultDeviceManager *)arg1 physicalDeviceForHIDDevice:(_GCHIDServiceInfo *)arg2;
@end

