//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UNNotificationRequest;

@protocol AFUserNotificationService
- (void)withdrawNotificationRequestWithIdentifier:(NSString *)arg1;
- (void)postNotificationRequest:(UNNotificationRequest *)arg1 completion:(void (^)(NSError *))arg2;
@end

