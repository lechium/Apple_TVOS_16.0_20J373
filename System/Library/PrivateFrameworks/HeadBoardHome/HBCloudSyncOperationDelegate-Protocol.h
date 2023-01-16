//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HeadBoardHome/NSObject-Protocol.h>

@class NSDictionary, NSError;

@protocol HBCloudSyncOperationDelegate <NSObject>
- (void)cloudSyncOperationDidFailWithError:(NSError *)arg1;
- (void)cloudSyncOperationDidCompleteSuccessfully:(NSDictionary *)arg1;
- (void)cloudSyncOperationWillBegin;
@end

