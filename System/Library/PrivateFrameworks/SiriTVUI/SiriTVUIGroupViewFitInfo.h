//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface SiriTVUIGroupViewFitInfo : NSObject
{
    NSMapTable *_viewsToFitSizes;	// 8 = 0x8
    struct CGSize _totalFitSize;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000607e
@property(nonatomic) struct CGSize totalFitSize; // @synthesize totalFitSize=_totalFitSize;
@property(copy, nonatomic) NSMapTable *viewsToFitSizes; // @synthesize viewsToFitSizes=_viewsToFitSizes;

@end

