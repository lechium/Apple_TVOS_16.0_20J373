//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (Authentication)
@property(readonly, nonatomic) _Bool isAuthKitUnableToPromptDueToNetworkError;
@property(readonly, nonatomic) _Bool isAuthKitUnableToPromptError;
@property(readonly, nonatomic) _Bool isAuthenticationError;
- (id)errorByExtendingUserInfoWithDictionary:(id)arg1;	// IMP=0x003000000000cb30
- (_Bool)isRecoveryPETSoftLimitError;	// IMP=0x003000000000cabd
- (_Bool)isRecoveryPETHardLimitError;	// IMP=0x003000000000ca4a
- (_Bool)isCoolDownError;	// IMP=0x003000000000c983
- (_Bool)isLoginSoftLimit;	// IMP=0x003000000000c971
- (_Bool)isLoginHardLimit;	// IMP=0x003000000000c95f
- (_Bool)isICSCInvalidError;	// IMP=0x003000000000c8ec
- (_Bool)isICSCRecoveryHardLimitError;	// IMP=0x003000000000c825
@end
