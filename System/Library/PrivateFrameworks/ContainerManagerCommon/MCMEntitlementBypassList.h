//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface MCMEntitlementBypassList : NSObject
{
    NSSet *_bypassListedLookupByContainer[15];	// 8 = 0x8
    NSDictionary *_bypassListedLookupByCodeSignIdentifier;	// 128 = 0x80
    NSDictionary *_systemEntitlementBypassList;	// 136 = 0x88
    NSDictionary *_systemGroupEntitlementBypassList;	// 144 = 0x90
}

+ (id)sharedBypassList;	// IMP=0x0060000000033dab
- (void).cxx_destruct;	// IMP=0x0000000000033c97
@property(retain, nonatomic) NSDictionary *systemGroupEntitlementBypassList; // @synthesize systemGroupEntitlementBypassList=_systemGroupEntitlementBypassList;
@property(retain, nonatomic) NSDictionary *systemEntitlementBypassList; // @synthesize systemEntitlementBypassList=_systemEntitlementBypassList;
- (id)wellKnownContainerIdentifiersForSandboxPushDownCompatibilitySet;	// IMP=0x0000000000033b4e
- (id)_convertArraysToSetsInNestedDictionary:(id)arg1;	// IMP=0x00000000000336d0
- (_Bool)isLookupAllowedToBypassEntitlementFromCodeSignIdentifier:(id)arg1 forContainerClass:(unsigned long long)arg2 containerIdentifier:(id)arg3;	// IMP=0x00000000000334bd
- (id)wellknownContainerForId:(id)arg1 class:(unsigned long long)arg2;	// IMP=0x0000000000033429
- (_Bool)containerIdIsWellknown:(id)arg1 class:(unsigned long long)arg2;	// IMP=0x00000000000333a3
- (id)wellknownSystemGroupContainers;	// IMP=0x0000000000033328
- (_Bool)systemGroupContainerIdIsWellknown:(id)arg1;	// IMP=0x000000000003327b
- (id)wellknownSystemGroupContainerForId:(id)arg1;	// IMP=0x00000000000331d5
- (id)wellknownSystemContainers;	// IMP=0x000000000003315a
- (_Bool)systemContainerIdIsWellknown:(id)arg1;	// IMP=0x00000000000330ad
- (id)wellknownSystemContainerForId:(id)arg1;	// IMP=0x0000000000033007
- (id)initWithSystemContainerMapping:(id)arg1 systemGroupContainerMapping:(id)arg2 bypassListedContainerMapping:(id)arg3 bypassListedCodeSignIdentifierMapping:(id)arg4;	// IMP=0x0000000000032e1a

@end
