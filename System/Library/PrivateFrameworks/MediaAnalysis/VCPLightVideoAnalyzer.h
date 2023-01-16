//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAsset, NSArray, NSDictionary, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VCPLightVideoAnalyzer : NSObject
{
    unsigned long long _requestedAnalyses;	// 8 = 0x8
    AVAsset *_avAsset;	// 16 = 0x10
    struct CGAffineTransform _transform;	// 24 = 0x18
    NSArray *_metaTracks;	// 72 = 0x48
    NSMutableDictionary *_publicMutableResults;	// 80 = 0x50
    NSMutableDictionary *_privateMutableResults;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000000aa5f8
@property(readonly, nonatomic) NSDictionary *privateResults;
@property(readonly, nonatomic) NSDictionary *publicResults;
- (int)analyzeAsset:(CDUnknownBlockType)arg1 flags:(unsigned long long *)arg2;	// IMP=0x00000000000aa412
- (int)postProcessOrientationResults;	// IMP=0x00000000000a9fa4
- (int)checkTimeRangeConsistency;	// IMP=0x00000000000a9d29
- (int)processMetaTrackForType:(id)arg1 cancel:(CDUnknownBlockType)arg2 flags:(unsigned long long *)arg3;	// IMP=0x00000000000a9713
- (id)findMetaTrackforType:(id)arg1;	// IMP=0x00000000000a93d0
- (id)initWithAVAsset:(id)arg1 forAnalysisTypes:(unsigned long long)arg2;	// IMP=0x00000000000a9219

@end
