//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreParsec/NSObject-Protocol.h>

@class SFMoreResults;

@protocol SFMoreResultsResourceLoader <NSObject>
- (void)loadMoreResults:(SFMoreResults *)arg1 completionHandler:(void (^)(NSArray *, NSError *))arg2;
- (_Bool)canLoadMoreResults:(SFMoreResults *)arg1;
@end

