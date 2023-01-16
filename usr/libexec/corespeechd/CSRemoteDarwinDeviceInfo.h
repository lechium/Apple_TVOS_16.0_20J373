//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CSRemoteDarwinDeviceInfo : NSObject
{
}

+ (id)sharedInstance;	// IMP=0x00400000000daf9e
- (_Bool)isPrimaryVoiceTriggerDeviceWithUUID:(id)arg1;	// IMP=0x00400000000daffa
- (id)fetchRichDeviceUIDStringFromUUID:(id)arg1;	// IMP=0x00100000000daff2
- (_Bool)isRemoteDarwinConnectedWithUUID:(id)arg1;	// IMP=0x00100000000dafea
- (_Bool)hasDarwinDeviceHandleVoiceTrigger;	// IMP=0x00100000000dafe2
- (_Bool)hasDarwinDeviceConnected;	// IMP=0x00100000000dafda
- (id)fetchDeviceUUIDStringFromUID:(id)arg1;	// IMP=0x00100000000dafd2
- (void)notifyVoiceTriggerDisabledWithDeviceUUID:(id)arg1;	// IMP=0x00100000000dafcc
- (void)notifyVoiceTriggerEnabledWithDeviceUUID:(id)arg1;	// IMP=0x00100000000dafc6
- (void)allDeviceDisconnected;	// IMP=0x00100000000dafc0
- (void)deviceDisconnectedWithUUID:(id)arg1;	// IMP=0x00100000000dafba
- (void)deviceConnectedWithUUID:(id)arg1;	// IMP=0x00100000000dafb4
- (id)init;	// IMP=0x00100000000dafa6

@end
