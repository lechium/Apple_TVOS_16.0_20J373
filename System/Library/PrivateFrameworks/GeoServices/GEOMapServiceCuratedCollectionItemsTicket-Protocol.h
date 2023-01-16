//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOMapServiceCancellableTicket-Protocol.h>

@class GEOMapServiceTraits;

@protocol GEOMapServiceCuratedCollectionItemsTicket <GEOMapServiceCancellableTicket>
@property(readonly, nonatomic) GEOMapServiceTraits *traits;
- (void)cancel;
- (void)submitWithHandler:(void (^)(GEOPlaceCollection *, NSArray *, NSArray *, NSError *))arg1 networkActivity:(void (^)(_Bool))arg2;
@end

