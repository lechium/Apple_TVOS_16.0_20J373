//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TelephonyUtilities/NSObject-Protocol.h>

@class NSString;

@protocol TUUserNotificationsProviderXPCServer <NSObject>
- (oneway void)momentCapturedForStreamToken:(long long)arg1 requesterID:(NSString *)arg2 reply:(void (^)(NSError *))arg3;
@end

