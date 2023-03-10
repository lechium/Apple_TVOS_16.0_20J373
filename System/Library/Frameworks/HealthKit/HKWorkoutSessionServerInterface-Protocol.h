//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKWorkoutConfiguration, NSArray, NSDate, NSDictionary;

@protocol HKWorkoutSessionServerInterface
- (void)remote_enableAutomaticDetectionForActivityConfigurations:(NSArray *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_endCurrentActivityOnDate:(NSDate *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_beginNewActivityWithConfiguration:(HKWorkoutConfiguration *)arg1 date:(NSDate *)arg2 metadata:(NSDictionary *)arg3 completion:(void (^)(_Bool, NSError *))arg4;
- (void)remote_recoverWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)remote_setTargetState:(long long)arg1 date:(NSDate *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
@end

