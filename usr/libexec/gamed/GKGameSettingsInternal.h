//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface GKGameSettingsInternal
{
    NSString *_bundleID;	// 8 = 0x8
    long long _allowFriendListAccess;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0040000000002c5a
+ (id)secureCodedPropertyKeys;	// IMP=0x0010000000002b7b
- (void).cxx_destruct;	// IMP=0x0020000000002f82
@property(nonatomic) long long allowFriendListAccess; // @synthesize allowFriendListAccess=_allowFriendListAccess;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (id)allowFriendListAccessString;	// IMP=0x0010000000002f0e
- (id)description;	// IMP=0x0010000000002e58
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000002d4d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000002c62
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000002afd
- (id)serverAllowFriendListAccessValue;	// IMP=0x0010000000002ad0
- (id)initWithGameSettings:(id)arg1;	// IMP=0x0010000000002962

@end
