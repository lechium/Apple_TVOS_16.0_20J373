//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LinkServices/NSObject-Protocol.h>

@class LNConnectionOperation, NSError;

@protocol LNConnectionOperationDelegate <NSObject>
- (void)connectionOperation:(LNConnectionOperation *)arg1 didFinishWithError:(NSError *)arg2;
- (void)connectionOperationWillStart:(LNConnectionOperation *)arg1;
@end

