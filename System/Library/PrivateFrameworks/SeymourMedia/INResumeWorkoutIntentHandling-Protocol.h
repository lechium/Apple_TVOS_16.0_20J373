//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SeymourMedia/NSObject-Protocol.h>

@class INResumeWorkoutIntent;

@protocol INResumeWorkoutIntentHandling <NSObject>
- (void)handleResumeWorkout:(INResumeWorkoutIntent *)arg1 completion:(void (^)(INResumeWorkoutIntentResponse *))arg2;

@optional
- (void)resolveWorkoutNameForResumeWorkout:(INResumeWorkoutIntent *)arg1 withCompletion:(void (^)(INSpeakableStringResolutionResult *))arg2;
- (void)confirmResumeWorkout:(INResumeWorkoutIntent *)arg1 completion:(void (^)(INResumeWorkoutIntentResponse *))arg2;
@end

