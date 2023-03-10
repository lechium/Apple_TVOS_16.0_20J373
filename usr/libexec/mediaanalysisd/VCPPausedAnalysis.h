//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, PHAsset;

@interface VCPPausedAnalysis : NSObject
{
    PHAsset *_asset;	// 8 = 0x8
    NSDictionary *_analysis;	// 16 = 0x10
}

+ (id)pausedAnalysis:(id)arg1 forAsset:(id)arg2;	// IMP=0x00400000000a2be3
+ (id)persistedPausedAnalysisFromPhotoLibrary:(id)arg1;	// IMP=0x00100000000a2ac7
+ (id)filepathForPhotoLibrary:(id)arg1;	// IMP=0x00100000000a26f5
- (void).cxx_destruct;	// IMP=0x00200000000a3067
@property(readonly, nonatomic) NSDictionary *analysis; // @synthesize analysis=_analysis;
@property(readonly, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
- (int)persist;	// IMP=0x00100000000a2c77
- (id)initWithAnalysis:(id)arg1 forAsset:(id)arg2;	// IMP=0x00100000000a2b2c
- (id)initWithFileFromPhotoLibrary:(id)arg1;	// IMP=0x00100000000a2763

@end

