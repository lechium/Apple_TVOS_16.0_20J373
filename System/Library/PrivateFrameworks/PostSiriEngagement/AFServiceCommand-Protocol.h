//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PostSiriEngagement/NSObject-Protocol.h>

@class AFCommandExecutionInfo, NSDictionary;
@protocol AFServiceHelper;

@protocol AFServiceCommand <NSObject>

@optional
- (id)initWithDictionary:(NSDictionary *)arg1;
- (void)performWithCompletion:(void (^)(NSDictionary *))arg1 serviceHelper:(id <AFServiceHelper>)arg2 executionInfo:(AFCommandExecutionInfo *)arg3;
- (void)performWithCompletion:(void (^)(NSDictionary *))arg1 serviceHelper:(id <AFServiceHelper>)arg2;
- (void)performWithCompletion:(void (^)(NSDictionary *))arg1;
@end

