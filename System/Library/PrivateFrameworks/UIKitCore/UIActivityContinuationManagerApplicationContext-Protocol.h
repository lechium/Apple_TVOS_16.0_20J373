//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError, NSProgress, NSString, NSUserActivity, UIActivityContinuationManager;

@protocol UIActivityContinuationManagerApplicationContext
- (void)activityContinuationManager:(UIActivityContinuationManager *)arg1 didUpdateUserActivity:(NSUserActivity *)arg2;
- (void)activityContinuationManager:(UIActivityContinuationManager *)arg1 didFailToContinueUserActivityWithType:(NSString *)arg2 error:(NSError *)arg3;
- (_Bool)activityContinuationManager:(UIActivityContinuationManager *)arg1 continueUserActivity:(NSUserActivity *)arg2;
- (_Bool)activityContinuationManager:(UIActivityContinuationManager *)arg1 willContinueUserActivityWithType:(NSString *)arg2;
- (_Bool)activityContinuationManagerHandleErrorsByConfiguringProgressUI:(UIActivityContinuationManager *)arg1;
- (NSError *)activityContinuationManagerUserCancelledError:(UIActivityContinuationManager *)arg1;
- (void)activityContinuationManager:(UIActivityContinuationManager *)arg1 hideProgressUIWithCompletion:(void (^)(void))arg2;
- (void)activityContinuationManager:(UIActivityContinuationManager *)arg1 configureProgressUIWithError:(NSError *)arg2;
- (void)activityContinuationManager:(UIActivityContinuationManager *)arg1 displayProgressUI:(NSProgress *)arg2 dismissalHandler:(void (^)(void))arg3;
@end

