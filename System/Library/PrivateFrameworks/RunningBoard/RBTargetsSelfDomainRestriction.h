//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "RBDomainRestriction.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface RBTargetsSelfDomainRestriction : RBDomainRestriction
{
    NSArray *_restrictions;	// 8 = 0x8
}

+ (id)domainRestrictionForDictionary:(id)arg1 withError:(id *)arg2;	// IMP=0x0060000000074e10
- (void).cxx_destruct;	// IMP=0x0000000000075168
- (id)description;	// IMP=0x00000000000750ee
- (unsigned long long)hash;	// IMP=0x00000000000750d1
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000075080
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000075075
- (id)allEntitlements;	// IMP=0x000000000007505c
- (_Bool)allowsContext:(id)arg1 withError:(id *)arg2;	// IMP=0x0000000000074e75
- (id)_init;	// IMP=0x0000000000074dc2

@end
