//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/NSObject-Protocol.h>

@class NSArray;

@protocol HKSharingRecipientAuthorizationStoreClientInterface <NSObject>
- (void)clientRemote_wasRevoked;
- (void)clientRemote_didRemoveSharingAuthorizations:(NSArray *)arg1;
- (void)clientRemote_didAddSharingAuthorizations:(NSArray *)arg1;
@end

