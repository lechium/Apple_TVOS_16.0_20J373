//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface HKRemoteFeatureAvailabilityWatchOSBuildVersionGreaterThanRule
{
    NSString *_buildVersion;	// 8 = 0x8
}

+ (id)ruleIdentifier;	// IMP=0x0010000000111466
- (void).cxx_destruct;	// IMP=0x000000000011160b
@property(retain, nonatomic) NSString *buildVersion; // @synthesize buildVersion=_buildVersion;
- (_Bool)evaluate;	// IMP=0x00000000001114cc
- (void)processUserInfo:(id)arg1;	// IMP=0x0000000000111473

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

