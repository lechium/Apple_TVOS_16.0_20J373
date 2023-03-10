//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _LSBundleProxiesOfTypeQuery
{
    unsigned long long _type;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000006b129
+ (id)queryWithType:(unsigned long long)arg1;	// IMP=0x006000000006a811
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006b1bc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006b131
- (unsigned long long)hash;	// IMP=0x000000000006b0dd
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006afd7
- (_Bool)_requiresDatabaseMappingEntitlement;	// IMP=0x000000000006afcf
- (void)_enumerateWithXPCConnection:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000006ab84
- (_Bool)bundleUnitMeetsRequirements:(unsigned int)arg1 bundleData:(const struct LSBundleData *)arg2 context:(struct LSContext *)arg3;	// IMP=0x000000000006a8fa

@end

