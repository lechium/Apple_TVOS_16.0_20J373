//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface DMDRemoveAppOperation
{
}

+ (void)removeAppWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0040000000063830
+ (_Bool)removeAppMetadataForBundleIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000634b0
+ (id)requiredEntitlements;	// IMP=0x0010000000063176
+ (id)whitelistedClassesForRequest;	// IMP=0x0010000000063144
- (void)runWithRequest:(id)arg1 bundleIdentifier:(id)arg2;	// IMP=0x0040000000063183

@end

