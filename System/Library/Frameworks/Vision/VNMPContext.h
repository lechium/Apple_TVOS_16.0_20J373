//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface VNMPContext : NSObject
{
    _Bool _useTimestampAdjustedDistances;	// 8 = 0x8
    _Bool _performClustersPostprocessing;	// 9 = 0x9
    _Bool _performSceneClassification;	// 10 = 0xa
    int _debugMode;	// 12 = 0xc
    int _timerMode;	// 16 = 0x10
    int _clusterSplitDistanceType;	// 20 = 0x14
    float _roiAreaThreshold;	// 24 = 0x18
    float _inliersRatioThreshold;	// 28 = 0x1c
    int _numberOfKeypointsToConsider;	// 32 = 0x20
    float _naturalClusteringDistanceThreshold;	// 36 = 0x24
    NSArray *_qualityCriteriaList;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000250cd6
@property float naturalClusteringDistanceThreshold; // @synthesize naturalClusteringDistanceThreshold=_naturalClusteringDistanceThreshold;
@property int numberOfKeypointsToConsider; // @synthesize numberOfKeypointsToConsider=_numberOfKeypointsToConsider;
@property float inliersRatioThreshold; // @synthesize inliersRatioThreshold=_inliersRatioThreshold;
@property float roiAreaThreshold; // @synthesize roiAreaThreshold=_roiAreaThreshold;
@property _Bool performSceneClassification; // @synthesize performSceneClassification=_performSceneClassification;
@property _Bool performClustersPostprocessing; // @synthesize performClustersPostprocessing=_performClustersPostprocessing;
@property _Bool useTimestampAdjustedDistances; // @synthesize useTimestampAdjustedDistances=_useTimestampAdjustedDistances;
@property(retain) NSArray *qualityCriteriaList; // @synthesize qualityCriteriaList=_qualityCriteriaList;
@property int clusterSplitDistanceType; // @synthesize clusterSplitDistanceType=_clusterSplitDistanceType;
@property int timerMode; // @synthesize timerMode=_timerMode;
@property int debugMode; // @synthesize debugMode=_debugMode;

@end

