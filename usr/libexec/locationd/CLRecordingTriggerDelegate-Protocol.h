//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CLIntersiloUniverse-Protocol.h"

@class CLDispatchSilo, CLWeatherServiceData, CLWorkoutRecorderPublisher, NSURL;

@protocol CLRecordingTriggerDelegate <CLIntersiloUniverse>
@property(readonly, nonatomic) CLDispatchSilo *silo;
- (CLWeatherServiceData *)getRecentWeatherData;
- (struct CLDaemonLocation *)getRecentLocation;
- (NSURL *)getWorkingDirectory;
- (_Bool)didPublishRecording:(id *)arg1 settings:(void *)arg2 publisher:(CLWorkoutRecorderPublisher *)arg3;
- (_Bool)canStartRecording:(id *)arg1 settings:(void *)arg2 publisher:(CLWorkoutRecorderPublisher *)arg3;
@end

