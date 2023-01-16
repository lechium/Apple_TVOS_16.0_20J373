//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IDSKeyTransparencyPolicy : NSObject
{
}

- (_Bool)isKeyTransparencyUIEnabled;	// IMP=0x0040000000740420
- (_Bool)shouldSyncTrustCircleAfterSelfQueryForServiceIdentifier:(id)arg1;	// IMP=0x0010000000740020
- (_Bool)isKeyTransparencySFAnalyticsEnabled;	// IMP=0x001000000073ff00
- (_Bool)isKeyTransparencyRTCAnalyticsEnabled;	// IMP=0x001000000073fdd0
- (_Bool)isKeyTransparencyAnalyticsEnabled;	// IMP=0x001000000073fcb0
- (unsigned long long)keyTransparencyMaximumVerificationsPerXPCActivity;	// IMP=0x001000000073fb90
- (unsigned long long)keyTransparencyXPCActivityIntervalInSeconds;	// IMP=0x001000000073fa50
- (_Bool)isKeyTransparencyXPCActivityEnabled;	// IMP=0x001000000073f930
- (_Bool)isKeyTransparencyAccountKeyCircleEnabled;	// IMP=0x001000000073f7d0
- (_Bool)isKeyTransparencyCloudKitCircleEnabled;	// IMP=0x001000000073f670
- (_Bool)isKeyTransparencyTrustCircleEnabled;	// IMP=0x001000000073f610
- (_Bool)isKeyTransparencyEnabledForServiceType:(id)arg1;	// IMP=0x001000000073f4e0
- (_Bool)isKeyTransparencyEnabledForServiceIdentifier:(id)arg1;	// IMP=0x001000000073f310
- (_Bool)_isKeyTransparencyDisabledViaServerBag;	// IMP=0x001000000073f210
- (_Bool)_isKeyTransparencyEnabledViaServerBag;	// IMP=0x001000000073f1e0
- (_Bool)_isKeyTransparencyEnabledViaDefaults;	// IMP=0x001000000073f180
- (_Bool)isKeyTransparencyTrustCircleAllowedWithoutEnrollment;	// IMP=0x001000000073f160
- (_Bool)isKeyTransparencyPeerVerificationAllowedWithoutEnrollment;	// IMP=0x001000000073f130
- (_Bool)isKeyTransparencyEnabled;	// IMP=0x001000000073f0d0

@end
