//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/NSObject-Protocol.h>

@class NSNumber, WFDialogRequest, WFWorkflowRunningContext;

@protocol WFUIPresenterHostInterface <NSObject>

@optional
- (void)presenterRequestedWorkflowPauseForContext:(WFWorkflowRunningContext *)arg1 dialogRequest:(WFDialogRequest *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)presenterDidResumeDialogPresentationWithQueuedDialogs:(NSNumber *)arg1 completionHandler:(void (^)(NSError *))arg2;
@end

