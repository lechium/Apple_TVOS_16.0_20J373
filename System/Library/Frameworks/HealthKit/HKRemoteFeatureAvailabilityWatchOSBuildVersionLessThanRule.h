//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface HKRemoteFeatureAvailabilityWatchOSBuildVersionLessThanRule
{
    NSString *_buildVersion;	// 8 = 0x8
}

+ (id)ruleIdentifier;	// IMP=0x0010000000162ee1
- (void).cxx_destruct;	// IMP=0x0000000000163086
@property(retain, nonatomic) NSString *buildVersion; // @synthesize buildVersion=_buildVersion;
- (_Bool)evaluate;	// IMP=0x0000000000162f47
- (void)processUserInfo:(id)arg1;	// IMP=0x0000000000162eee

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

