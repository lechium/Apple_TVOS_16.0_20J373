//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKVSearchCriteria, CKVTokenChain, NSArray, NSString;

@protocol CKVSearchService
- (NSArray *)matchSpansOfString:(NSString *)arg1;
- (NSArray *)matchSpansWithTokenChain:(CKVTokenChain *)arg1;
- (NSArray *)searchFTSWithCriteria:(CKVSearchCriteria *)arg1 error:(id *)arg2;
- (void)prewarmSpanMatcher;
@end

