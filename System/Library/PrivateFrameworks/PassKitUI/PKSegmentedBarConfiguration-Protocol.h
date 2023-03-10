//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/NSObject-Protocol.h>

@class UIColor;

@protocol PKSegmentedBarConfiguration <NSObject>
- (UIColor *)colorForSegmentAtIndex:(long long)arg1;
- (double)valueForSegmentAtIndex:(long long)arg1;
- (long long)numberOfSegments;
- (double)totalValue;
- (_Bool)isReady;
@end

