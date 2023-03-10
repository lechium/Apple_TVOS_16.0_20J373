//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DMDAppMetadata;

@interface DMDMDMv1StartManagingAppOperation
{
    DMDAppMetadata *_metadata;	// 8 = 0x8
}

+ (id)requiredEntitlements;	// IMP=0x00400000000580ac
+ (id)whitelistedClassesForRequest;	// IMP=0x0010000000058004
- (void).cxx_destruct;	// IMP=0x00100000000580de
@property(retain, nonatomic) DMDAppMetadata *metadata; // @synthesize metadata=_metadata;
- (void)_endOperationWithBundleIdentifier:(id)arg1;	// IMP=0x00100000000593fe
- (void)_attemptSINFSwap;	// IMP=0x00100000000592a5
- (void)_setState:(unsigned long long)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x00100000000591c5
- (void)_manageApp;	// IMP=0x0010000000058bee
- (void)_promptToManageApp:(id)arg1 appDisplayName:(id)arg2 originator:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000005888d
- (void)_promptIfPermittedByPolicyToManageApp:(id)arg1 appDisplayName:(id)arg2 originator:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000586fb
- (void)_runWithRequest:(id)arg1;	// IMP=0x0010000000058260
- (void)runWithRequest:(id)arg1;	// IMP=0x00100000000580f1

@end

