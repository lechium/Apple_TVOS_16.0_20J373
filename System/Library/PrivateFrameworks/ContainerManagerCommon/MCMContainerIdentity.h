//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface MCMContainerIdentity
{
    _Bool _transient;	// 40 = 0x28
}

+ (id)containerIdentityWithMinimalContainerIdentity:(id)arg1 transient:(_Bool)arg2;	// IMP=0x006000000001645e
+ (id)containerIdentityFromPlist:(id)arg1 userIdentityCache:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x00600000000163c0
+ (id)containerIdentityWithIdentifier:(id)arg1 containerClass:(unsigned long long)arg2 platform:(unsigned int)arg3 error:(unsigned long long *)arg4;	// IMP=0x006000000001623c
+ (id)containerIdentityWithUserIdentity:(id)arg1 identifier:(id)arg2 containerClass:(unsigned long long)arg3 platform:(unsigned int)arg4 error:(unsigned long long *)arg5;	// IMP=0x0060000000016185
+ (id)containerIdentityWithUserIdentity:(id)arg1 identifier:(id)arg2 containerClass:(unsigned long long)arg3 platform:(unsigned int)arg4 transient:(_Bool)arg5 error:(unsigned long long *)arg6;	// IMP=0x00600000000160c4
@property(readonly, nonatomic) _Bool transient; // @synthesize transient=_transient;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000015be3
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000015b58
- (_Bool)isEqualToContainerIdentity:(id)arg1;	// IMP=0x0000000000015aca
- (unsigned long long)hash;	// IMP=0x0000000000015a5a
- (id)debugDescription;	// IMP=0x00000000000159d0
- (id)description;	// IMP=0x0000000000015946
- (id)containerIdentity;	// IMP=0x0000000000015912
- (id)identityByChangingTransient:(_Bool)arg1;	// IMP=0x00000000000158c2
- (id)nontransientContainerIdentity;	// IMP=0x00000000000157ae
- (id)transientContainerIdentity;	// IMP=0x000000000001569a
- (id)initWithVersion1PlistDictionary:(id)arg1 userIdentityCache:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x00000000000154b9
- (id)plist;	// IMP=0x00000000000153bd
- (id)initWithLibsystemContainer:(struct container_object_s *)arg1 defaultUserIdentity:(id)arg2 userIdentityCache:(id)arg3 error:(unsigned long long *)arg4;	// IMP=0x0000000000015314
- (id)initWithUserIdentity:(id)arg1 identifier:(id)arg2 containerClass:(unsigned long long)arg3 platform:(unsigned int)arg4 transient:(_Bool)arg5 error:(unsigned long long *)arg6;	// IMP=0x000000000001528f
- (id)init;	// IMP=0x00000000000151a8

@end

