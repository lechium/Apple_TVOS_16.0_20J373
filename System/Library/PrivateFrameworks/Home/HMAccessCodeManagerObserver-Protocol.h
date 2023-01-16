//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/NSObject-Protocol.h>

@class HMAccessCodeManager, NSArray;

@protocol HMAccessCodeManagerObserver <NSObject>

@optional
- (void)accessCodeManager:(HMAccessCodeManager *)arg1 didRemoveHomeAccessCodes:(NSArray *)arg2;
- (void)accessCodeManager:(HMAccessCodeManager *)arg1 didUpdateHomeAccessCodes:(NSArray *)arg2;
- (void)accessCodeManager:(HMAccessCodeManager *)arg1 didAddHomeAccessCodes:(NSArray *)arg2;
- (void)accessCodeManager:(HMAccessCodeManager *)arg1 didRemoveAccessoryAccessCodes:(NSArray *)arg2;
- (void)accessCodeManager:(HMAccessCodeManager *)arg1 didUpdateAccessoryAccessCodes:(NSArray *)arg2;
- (void)accessCodeManager:(HMAccessCodeManager *)arg1 didAddAccessoryAccessCodes:(NSArray *)arg2;
@end

