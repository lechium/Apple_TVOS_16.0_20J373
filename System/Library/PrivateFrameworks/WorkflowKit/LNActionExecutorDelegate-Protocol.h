//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/NSObject-Protocol.h>

@class LNAction, LNActionConfirmationRequest, LNActionExecutor, LNConfirmationRequest, LNDisambiguationRequest, LNNeedsValueRequest, LNSuccessResult, LNTranscriptActionRecord, NSError;

@protocol LNActionExecutorDelegate <NSObject>
- (void)executor:(LNActionExecutor *)arg1 didFinishWithResult:(LNSuccessResult *)arg2 error:(NSError *)arg3;
- (void)executor:(LNActionExecutor *)arg1 needsValueWithRequest:(LNNeedsValueRequest *)arg2;
- (void)executor:(LNActionExecutor *)arg1 needsDisambiguationWithRequest:(LNDisambiguationRequest *)arg2;
- (void)executor:(LNActionExecutor *)arg1 needsConfirmationWithRequest:(LNConfirmationRequest *)arg2;

@optional
- (void)executor:(LNActionExecutor *)arg1 preferredContentSizeForViewSnippetWithCompletion:(void (^)(NSValue *))arg2;
- (void)executor:(LNActionExecutor *)arg1 environmentForViewSnippetWithCompletion:(void (^)(LNSnippetEnvironment *))arg2;
- (void)executor:(LNActionExecutor *)arg1 needsActionConfirmationWithRequest:(LNActionConfirmationRequest *)arg2;
- (_Bool)executor:(LNActionExecutor *)arg1 shouldRunShowOutputAction:(LNAction *)arg2;
- (void)executor:(LNActionExecutor *)arg1 didDonateWithTranscriptActionRecord:(LNTranscriptActionRecord *)arg2 error:(NSError *)arg3;
@end

