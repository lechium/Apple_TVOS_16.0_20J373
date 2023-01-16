//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVOutputDevice, AVOutputDeviceGroup, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface AVAPSyncControllerRemoteOutputDeviceGroupImpl : NSObject
{
    AVOutputDeviceGroup *_parentOutputDeviceGroup;	// 8 = 0x8
    struct OpaqueAPSyncController *_syncController;	// 16 = 0x10
    struct __CFString *_groupID;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000154744
@property __weak AVOutputDeviceGroup *parentOutputDeviceGroup; // @synthesize parentOutputDeviceGroup=_parentOutputDeviceGroup;
- (void)_volumeControlTypeChangedForGroupWithID:(struct __CFString *)arg1;	// IMP=0x00000000001546d1
- (long long)volumeControlType;	// IMP=0x0000000000154627
- (void)setVolume:(float)arg1;	// IMP=0x00000000001545ca
- (void)_volumeChangedForGroupWithID:(struct __CFString *)arg1;	// IMP=0x0000000000154576
@property(readonly) float volume;
- (void)removeOutputDevice:(id)arg1 withOptions:(id)arg2 completionhandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001543ec
- (void)addOutputDevice:(id)arg1 withOptions:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001540ae
@property(readonly) AVOutputDevice *groupLeader;
- (void)_groupMembersChangedForGroupWithID:(struct __CFString *)arg1;	// IMP=0x0000000000153feb
- (id)_outputDeviceForID:(struct __CFString *)arg1;	// IMP=0x0000000000153fe3
- (id)_outputDevicesFromProperty:(struct __CFString *)arg1 withQualifier:(struct __CFString *)arg2;	// IMP=0x0000000000153f01
@property(readonly) NSArray *outputDevices;
@property(readonly) _Bool receivesLongFormAudioFromLocalDevice;
- (void)dealloc;	// IMP=0x0000000000153df0
- (id)initWithRemoteGroupID:(struct __CFString *)arg1 syncController:(struct OpaqueAPSyncController *)arg2;	// IMP=0x0000000000153957

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

