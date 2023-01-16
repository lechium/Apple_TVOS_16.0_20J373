//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/NSObject-Protocol.h>

@class HMEEvent, NSString;
@protocol HMECachedEventSource;

@protocol HMEEventConsumer <NSObject>
- (void)didReceiveEvent:(HMEEvent *)arg1 topic:(NSString *)arg2;

@optional
- (void)didReceiveCachedEvent:(HMEEvent *)arg1 topic:(NSString *)arg2 source:(id <HMECachedEventSource>)arg3;
@end

