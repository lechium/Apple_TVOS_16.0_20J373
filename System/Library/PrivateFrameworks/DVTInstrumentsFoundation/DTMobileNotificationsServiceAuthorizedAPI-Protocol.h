//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DVTInstrumentsFoundation/DTXAllowedRPC-Protocol.h>

@class NSNumber, NSString;

@protocol DTMobileNotificationsServiceAuthorizedAPI <DTXAllowedRPC>
- (void)postDarwinNotification:(NSString *)arg1;
- (void)setMemoryNotificationsEnabled:(NSNumber *)arg1;
- (void)setApplicationStateNotificationsEnabled:(NSNumber *)arg1;
@end

