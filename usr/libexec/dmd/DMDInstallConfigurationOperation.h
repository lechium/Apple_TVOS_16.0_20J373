//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface DMDInstallConfigurationOperation
{
}

+ (_Bool)validateRequest:(id)arg1 error:(id *)arg2;	// IMP=0x002000000004f2ae
+ (id)requiredEntitlements;	// IMP=0x001000000004f296
+ (id)whitelistedClassesForRequest;	// IMP=0x001000000004f264
+ (id)_intersectionAliasToFeatures;	// IMP=0x0010000000051486
- (unsigned long long)queueGroup;	// IMP=0x001000000004f2a3
- (id)_intersectionFeatureForPayloadRestrictionKey:(id)arg1;	// IMP=0x001000000005153c
- (id)_applyHeuristicsToRestrictions:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000051312
- (id)_mapMCRestrictionsFromPayload:(id)arg1 error:(id *)arg2;	// IMP=0x001000000005027b
- (_Bool)_installRestrictionsPayload:(id)arg1 withRequest:(id)arg2 error:(id *)arg3;	// IMP=0x001000000004ff92
- (void)_rollbackProfile:(id)arg1 withRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000004fd22
- (_Bool)_installProfile:(id)arg1 withRequest:(id)arg2 error:(id *)arg3;	// IMP=0x001000000004f991
- (void)runWithRequest:(id)arg1;	// IMP=0x001000000004f3d8

@end
