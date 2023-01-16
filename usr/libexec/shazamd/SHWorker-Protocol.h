//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@protocol SHWorkerDelegate;

@protocol SHWorker <NSObject>
@property(readonly, nonatomic) _Bool managesRecordingSession;
@property(readonly) _Bool isRunning;
@property(nonatomic) __weak id <SHWorkerDelegate> workerDelegate;
- (double)timeRequiredToPerformWork;
- (oneway void)stop;
@end
