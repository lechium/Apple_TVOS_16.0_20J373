//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, SBSUnlockOptions;

@protocol SBSLockScreenServiceServerInterface
- (oneway void)setPreventSpuriousScreenUndim:(NSNumber *)arg1;
- (oneway void)setPreventPasscodeLock:(NSNumber *)arg1;
- (oneway void)requestPasscodeCheckUIWithOptions:(SBSUnlockOptions *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (oneway void)requestPasscodeUnlockUIWithOptions:(SBSUnlockOptions *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (oneway void)launchEmergencyDialerWithCompletion:(void (^)(NSError *))arg1;
@end

