//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVServices/NSObject-Protocol.h>

@class ISOperation, NSError, SSOperationProgress;

@protocol ISOperationDelegate <NSObject>

@optional
- (void)operationWillStart:(ISOperation *)arg1;
- (void)operationFinished:(ISOperation *)arg1;
- (void)operation:(ISOperation *)arg1 updatedProgress:(SSOperationProgress *)arg2;
- (void)operation:(ISOperation *)arg1 failedWithError:(NSError *)arg2;
@end

