//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ActionKit/NSObject-Protocol.h>

@class WFSplitTextIntent;

@protocol WFSplitTextIntentHandling <NSObject>
- (void)resolveCustomSeparatorForSplitText:(WFSplitTextIntent *)arg1 withCompletion:(void (^)(INStringResolutionResult *))arg2;
- (void)resolveSeparatorForSplitText:(WFSplitTextIntent *)arg1 withCompletion:(void (^)(WFSplitTextSeparatorResolutionResult *))arg2;
- (void)resolveTextForSplitText:(WFSplitTextIntent *)arg1 withCompletion:(void (^)(NSArray *))arg2;
- (void)handleSplitText:(WFSplitTextIntent *)arg1 completion:(void (^)(WFSplitTextIntentResponse *))arg2;

@optional
- (void)confirmSplitText:(WFSplitTextIntent *)arg1 completion:(void (^)(WFSplitTextIntentResponse *))arg2;
@end

