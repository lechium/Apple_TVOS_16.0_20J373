//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface _LSApplicationProxyForIdentifierQuery
{
    NSString *_identifier;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x004000000006c50f
+ (id)alwaysAllowedBundleIdentifiers;	// IMP=0x004000000006be1b
+ (id)queryWithIdentifier:(id)arg1;	// IMP=0x004000000006bd80
- (void).cxx_destruct;	// IMP=0x000000000006c6a4
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006c5c9
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006c517
- (unsigned long long)hash;	// IMP=0x000000000006c481
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006c2d0
- (_Bool)_requiresDatabaseMappingEntitlement;	// IMP=0x000000000006c1ec
- (void)_enumerateWithXPCConnection:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000006be87

@end

