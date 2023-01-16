//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUUID;

@interface CSAudioRecordDeviceInfo : NSObject
{
    _Bool _isRemoteDevice;	// 8 = 0x8
    NSString *_route;	// 16 = 0x10
    NSUUID *_remoteDeviceUID;	// 24 = 0x18
    NSString *_remoteDeviceProductIdentifier;	// 32 = 0x20
    NSString *_remoteDeviceUIDString;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000008cb2b
- (void).cxx_destruct;	// IMP=0x002000000008cec3
@property(readonly, copy, nonatomic) NSString *remoteDeviceUIDString; // @synthesize remoteDeviceUIDString=_remoteDeviceUIDString;
@property(readonly, copy, nonatomic) NSString *remoteDeviceProductIdentifier; // @synthesize remoteDeviceProductIdentifier=_remoteDeviceProductIdentifier;
@property(readonly, copy, nonatomic) NSUUID *remoteDeviceUID; // @synthesize remoteDeviceUID=_remoteDeviceUID;
@property(readonly, nonatomic) _Bool isRemoteDevice; // @synthesize isRemoteDevice=_isRemoteDevice;
@property(readonly, copy, nonatomic) NSString *route; // @synthesize route=_route;
- (id)initWithAVVCRecordDeviceInfo:(id)arg1;	// IMP=0x001000000008cd91
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000008cc13
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000008cb33
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000008cb20
- (id)description;	// IMP=0x001000000008ca84
- (id)xpcObject;	// IMP=0x001000000008c926
- (id)initWithXPCObject:(id)arg1;	// IMP=0x001000000008c6d9
- (id)initWithRoute:(id)arg1 isRemoteDevice:(_Bool)arg2 remoteDeviceUID:(id)arg3 remoteDeviceProductIdentifier:(id)arg4 remoteDeviceUIDString:(id)arg5;	// IMP=0x001000000008c5c6
- (id)initWithRoute:(id)arg1 isRemoteDevice:(_Bool)arg2 remoteDeviceUID:(id)arg3 remoteDeviceProductIdentifier:(id)arg4;	// IMP=0x001000000008c5a3

@end
