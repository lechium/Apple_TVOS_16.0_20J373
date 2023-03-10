//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (MSErrorUtilities)
+ (id)MSErrorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 underlyingError:(id)arg4 additionalUserInfo:(id)arg5;	// IMP=0x005000000001f300
+ (id)MSErrorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 underlyingError:(id)arg4;	// IMP=0x005000000001f2d6
+ (id)MSErrorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 suggestion:(id)arg4;	// IMP=0x005000000001f202
+ (id)MSErrorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3;	// IMP=0x005000000001f1ed
+ (id)MMCSErrorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3;	// IMP=0x005000000008af89
- (id)MSMMCSRetryAfterDate;	// IMP=0x001000000001e59b
- (_Bool)MSIsRegistrationError;	// IMP=0x001000000001e57a
- (_Bool)MSIsQuotaError;	// IMP=0x001000000001e4db
- (_Bool)MSContainsErrorWithDomain:(id)arg1 code:(long long)arg2;	// IMP=0x001000000001e3e9
- (_Bool)MSIsBadTokenError;	// IMP=0x001000000001e34a
- (_Bool)MSIsAuthError;	// IMP=0x001000000001e2ab
- (_Bool)MSIsFatal;	// IMP=0x001000000001e20c
- (_Bool)MSIsCounted;	// IMP=0x001000000001e16d
- (_Bool)MSNeedsBackoff;	// IMP=0x001000000001e0ce
- (_Bool)MSCanBeIgnored;	// IMP=0x001000000001e0ad
- (_Bool)MSASStateMachineIsCanceledError;	// IMP=0x001000000001e092
- (_Bool)MSIsTemporaryNetworkError;	// IMP=0x001000000001dff3
- (void)_MSApplyBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000001dd06
- (id)MSFindPrimaryError;	// IMP=0x001000000001db6c
- (id)MSMakePrimaryError;	// IMP=0x001000000001da70
- (id)MSVerboseDescription;	// IMP=0x001000000001da59
- (id)_MSVerboseDescriptionRecursionCount:(int)arg1;	// IMP=0x001000000001d80b
- (id)MMCSRetryAfterDate;	// IMP=0x001000000008a8e9
- (_Bool)MMCSIsFatalError;	// IMP=0x001000000008a84a
- (_Bool)MMCSIsAuthorizationError;	// IMP=0x001000000008a7ab
- (_Bool)MMCSIsNetworkConditionsError;	// IMP=0x001000000008a70c
- (_Bool)MMCSIsCancelError;	// IMP=0x001000000008a66d
- (void)_MMCSApplyBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000008a377
- (int)MMCSErrorType;	// IMP=0x001000000008a321
@end

