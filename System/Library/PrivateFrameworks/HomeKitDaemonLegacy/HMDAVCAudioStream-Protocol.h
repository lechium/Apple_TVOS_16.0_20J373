//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/NSObject-Protocol.h>

@class AVCMediaStreamConfig, NSDictionary;
@protocol AVCAudioStreamDelegate;

@protocol HMDAVCAudioStream <NSObject>
@property(nonatomic) double rtcpSendIntervalSec;
@property(nonatomic) double rtcpTimeOutIntervalSec;
@property(nonatomic) double rtpTimeOutIntervalSec;
@property(nonatomic, getter=isRTCPTimeOutEnabled) _Bool rtcpTimeOutEnabled;
@property(nonatomic, getter=isRTPTimeOutEnabled) _Bool rtpTimeOutEnabled;
@property(nonatomic, getter=isRTCPEnabled) _Bool rtcpEnabled;
@property(nonatomic) long long direction;
@property(nonatomic) float volume;
@property(nonatomic) __weak id <AVCAudioStreamDelegate> delegate;
@property(readonly, nonatomic) NSDictionary *capabilities;
- (void)startSynchronizeWithStream:(long long)arg1;
- (void)resume;
- (void)pause;
- (void)stop;
- (void)start;
- (_Bool)configure:(AVCMediaStreamConfig *)arg1 error:(id *)arg2;
@end

