//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol PXDisplayAsset, PXStoryMovieHighlightCuration;

@protocol PXStoryMovieHighlightsCollection
@property(readonly, nonatomic) NSString *diagnosticDescription;
@property(readonly, nonatomic) long long count;
- (id <PXStoryMovieHighlightCuration>)movieHighlightsForDisplayAsset:(id <PXDisplayAsset>)arg1;
@end

