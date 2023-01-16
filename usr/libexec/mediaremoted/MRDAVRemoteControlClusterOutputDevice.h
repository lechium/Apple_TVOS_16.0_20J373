//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaRemote/MRAVDistantOutputDevice.h>

@class NSArray;

@interface MRDAVRemoteControlClusterOutputDevice : MRAVDistantOutputDevice
{
    NSArray *_memberOutputDevices;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000004f9c0
@property(readonly, nonatomic) NSArray *memberOutputDevices; // @synthesize memberOutputDevices=_memberOutputDevices;
- (id)descriptor;	// IMP=0x001000000004f99d
- (_Bool)isLocalDevice;	// IMP=0x001000000004f964
- (id)clusterComposition;	// IMP=0x001000000004f848
- (unsigned int)deviceSubtype;	// IMP=0x001000000004f83d
- (unsigned int)deviceType;	// IMP=0x001000000004f832
- (id)uid;	// IMP=0x001000000004f820
- (id)initWithPrimaryOutputDevice:(id)arg1 members:(id)arg2;	// IMP=0x001000000004f754
- (id)initWithDevices:(id)arg1;	// IMP=0x001000000004f0c9

@end
