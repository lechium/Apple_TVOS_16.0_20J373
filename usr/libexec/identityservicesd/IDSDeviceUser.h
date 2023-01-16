//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface IDSDeviceUser : NSObject
{
    NSString *_deviceUDID;	// 8 = 0x8
    NSString *_serverUserID;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000006b27d0
- (void).cxx_destruct;	// IMP=0x00200000006b2cc0
@property(retain, nonatomic) NSString *serverUserID; // @synthesize serverUserID=_serverUserID;
@property(retain, nonatomic) NSString *deviceUDID; // @synthesize deviceUDID=_deviceUDID;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000006b2a30
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000006b2950
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000006b27f0
- (_Bool)isIdenticalToUser:(id)arg1;	// IMP=0x00100000006b2770
- (_Bool)isEqualToUser:(id)arg1;	// IMP=0x00100000006b2710
- (_Bool)isEqualToDeviceUser:(id)arg1;	// IMP=0x00100000006b24e0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000006b2440
@property(readonly) unsigned long long hash;
- (_Bool)shouldReplace:(id)arg1;	// IMP=0x00100000006b2280
- (id)storageIdentifier;	// IMP=0x00100000006b2250
- (id)unprefixedIdentifier;	// IMP=0x00100000006b20f0
- (id)realmPrefixedIdentifier;	// IMP=0x00100000006b1ef0
- (long long)realm;	// IMP=0x00100000006b1ed0
- (id)uniqueIdentifier;	// IMP=0x00100000006b1e50
- (id)deviceUserWithUpdatedServerUserID:(id)arg1;	// IMP=0x00100000006b1da0
- (id)initWithUDID:(id)arg1;	// IMP=0x00100000006b1ce0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
