//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet, NSString, SKRExecutionOutput, SKRFlowPluginInfo;

@protocol SKRExecutionBridge
- (void)closeServerRequestForExecutionRequestId:(NSString *)arg1;
- (void)retriggerOriginalRequestWithExecutionRequestId:(NSString *)arg1 forUserId:(NSString *)arg2 givenCurrentExecutionRequestId:(NSString *)arg3 reply:(void (^)(NSError *))arg4;
- (void)acquireConversationUserInputForUserId:(NSString *)arg1 requestId:(NSString *)arg2 reply:(void (^)(SKEConversationUserInput *))arg3;
- (void)fetchSpeechInfoWithReply:(void (^)(AFSpeechInfo *))arg1;
- (void)fetchContextsFor:(NSSet *)arg1 includesNearByDevices:(_Bool)arg2 completion:(void (^)(NSArray *))arg3;
- (void)prepareForAudioHandoffFailedWithCompletion:(void (^)(void))arg1;
- (void)prepareForAudioHandoffWithCompletion:(void (^)(_Bool))arg1;
- (void)fallbackToServerForResultCandidateId:(NSString *)arg1;
- (void)flowPluginWillExecuteWithFlowPluginInfo:(SKRFlowPluginInfo *)arg1;
- (void)closeWithExecutionOutput:(SKRExecutionOutput *)arg1 errorString:(NSString *)arg2;
- (void)closeWithExecutionOutput:(SKRExecutionOutput *)arg1 needsUserInput:(_Bool)arg2;
- (void)closeWithExecutionOutput:(SKRExecutionOutput *)arg1;
- (void)submitWithExecutionOutput:(SKRExecutionOutput *)arg1 completion:(void (^)(SABaseCommand *, NSError *))arg2;
@end
