//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class MSSearch, NSArray, NSError;

@protocol MSSearchDelegate <NSObject>

@optional
- (void)search:(MSSearch *)arg1 didFinishWithError:(NSError *)arg2;
- (_Bool)search:(MSSearch *)arg1 didFindResults:(NSArray *)arg2;
@end

