//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DVTInstrumentsFoundation/DTXAllowedRPC-Protocol.h>

@class NSArray, NSData, NSDictionary, NSNumber, NSString;

@protocol DTProcessControlServiceAuthorizedMethods <DTXAllowedRPC>
- (NSNumber *)requestDisableMemoryLimitsForPid:(int)arg1;
- (void)sendProcessControlEvent:(NSData *)arg1 toPid:(NSNumber *)arg2;
- (void)sendSignal:(NSNumber *)arg1 toPid:(NSNumber *)arg2;
- (void)killPid:(NSNumber *)arg1;
- (NSNumber *)launchSuspendedProcessWithDevicePath:(NSString *)arg1 bundleIdentifier:(NSString *)arg2 environment:(NSDictionary *)arg3 arguments:(NSArray *)arg4 options:(NSDictionary *)arg5;
- (void)resumePid:(NSNumber *)arg1;
- (void)suspendPid:(NSNumber *)arg1;
- (void)stopObservingPid:(NSNumber *)arg1;
- (void)startObservingPid:(NSNumber *)arg1;
@end

