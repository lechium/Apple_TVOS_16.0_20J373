//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (GameKitErrors)
+ (id)_gkUnauthenticatedError;	// IMP=0x008000000004111d
+ (id)serverErrorForCode:(long long)arg1 withReason:(id)arg2;	// IMP=0x008000000004103a
+ (id)serverErrorForCode:(long long)arg1 withUserInfo:(id)arg2;	// IMP=0x0080000000041014
+ (id)userErrorForServerCode:(long long)arg1 reason:(id)arg2 userInfo:(id)arg3;	// IMP=0x0080000000040f83
+ (id)userErrorForServerCode:(long long)arg1 reason:(id)arg2;	// IMP=0x0080000000040f24
+ (id)userErrorForServerError:(id)arg1 userInfo:(id)arg2;	// IMP=0x0080000000040b88
+ (id)userErrorForServerError:(id)arg1;	// IMP=0x0080000000040b30
+ (id)userErrorForInternalErrorCode:(long long)arg1 reason:(id)arg2;	// IMP=0x0080000000040a4f
+ (id)userErrorForCode:(long long)arg1 underlyingError:(id)arg2;	// IMP=0x0080000000040974
+ (id)userErrorForCode:(long long)arg1 userInfo:(id)arg2;	// IMP=0x008000000004041c
+ (id)_gkUserErrorForGameSessionErrorCode:(long long)arg1 userInfo:(id)arg2;	// IMP=0x00800000000cb810
+ (id)_gkUserErrorForTournamentErrorCode:(long long)arg1 reason:(id)arg2 userInfo:(id)arg3;	// IMP=0x00800000000e24d4
- (_Bool)_gkIsUnauthenticatedError;	// IMP=0x0010000000041136
@end

