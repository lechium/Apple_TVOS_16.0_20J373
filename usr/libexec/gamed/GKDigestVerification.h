//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface GKDigestVerification : NSObject
{
}

+ (_Bool)digest:(id)arg1 matchesHash:(id)arg2;	// IMP=0x00100000000fdd9b
+ (id)computeVerificationHashForDigest:(id)arg1;	// IMP=0x00100000000fdbb7
+ (id)digestForSubmitAchievement:(id)arg1 forBundleID:(id)arg2 shouldScreen:(_Bool)arg3 eligibleChallenges:(id)arg4;	// IMP=0x00100000000fe1f9
+ (id)digestForSubmitScore:(id)arg1 forBundleID:(id)arg2 shouldScreen:(_Bool)arg3 eligibleChallenges:(id)arg4;	// IMP=0x00100000000fdfe0
+ (_Bool)verifyHash:(id)arg1 forDigest:(id)arg2 withSugar:(id)arg3;	// IMP=0x00100000000fe5d0
+ (id)computeHashForDigest:(id)arg1 withSugar:(id)arg2;	// IMP=0x00100000000fe5ab

@end
